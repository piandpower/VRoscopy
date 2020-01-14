import os.path
import subprocess
import sys
import unreal_engine as ue
from unreal_engine import FVector, FRotator
from unreal_engine.classes import Actor, FbxFactory, StaticMeshActor, StaticMesh, AnimBlueprintFactory, Character, \
    BlueprintFactory, StaticMeshComponent
#PyFbxFactory

# blender --background --python C:/integrationcourseenv/VRoscopy/VRoscopy/Content/Scripts/stl_to_fbx.py -- "C:/Users/DAN/Desktop/test.stl" "C:/Users/DAN/Desktop/test.fbx"


ue.log('dicom to ueasset_pyactor')


def get_full_path(path):
    return os.path.join(os.path.expanduser('~'), path)

def runProcess(command):
    p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT, universal_newlines=True, shell=True)
    while True:
        # returns None while subprocess is running
        retcode = p.poll()
        line = p.stdout.readline()
        ue.log(line)
        if retcode is not None:
            break


class Dicom_Mesh_PyActor:
    path_to_output_asset = '/Game/DicomMeshAssets/1'
    fbx_factory = FbxFactory()
    mesh = None
    world = ue.get_editor_world()
    dilimiter = '#'

    # this is called on game start
    def begin_play(self):
        ue.log('Begin Play on Dicom_Mesh class')
        # found_object = ue.find_object(self.path_to_output_asset + 'test')
        # ue.log(found_object)

    # this is called at every 'tick'
    def tick(self, delta_time):
        pass

    def runProcess(self, command):
        p = subprocess.Popen(exe, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
        while (True):
            # returns None while subprocess is running
            retcode = p.poll()
            line = p.stdout.readline()
            yield line
            if retcode is not None:
                break

    def dicoms_to_mesh(self, args):
        # TODO add checkers for file paths
        # TODO consider migrating to subprocess instead of os
        args_lst = args.split(self.dilimiter)
        (invesalius_path, dicoms_folder_path, output_stl_path) = (args_lst[0], args_lst[1], args_lst[2])
        invesalius_path = get_full_path(invesalius_path)
        dicoms_folder_path = get_full_path(dicoms_folder_path)
        output_stl_path = get_full_path(output_stl_path)
        ue.log("invesalius path = " + invesalius_path)
        ue.log("dicoms_folder_path = " + dicoms_folder_path)
        ue.log("stl_path = " + output_stl_path)
        ue.log("calling for invisalius via command line for mesh to stl conversion")
        runProcess("python " + invesalius_path + "/app.py --no-gui -i " + dicoms_folder_path + " -t 200,3033 -e "
                   + output_stl_path)
        ue.log("finished conversion from dicom files to stl")

    def stl_to_fbx(self, args):
        path_to_stl_to_fbx_script = "C:/integrationcourseenv/VRoscopy/VRoscopy/Content/Scripts/stl_to_fbx.py"
        args_lst = args.split(self.dilimiter)
        (path_to_stl, fbx_export_path) = (args_lst[0], args_lst[1])
        path_to_stl = get_full_path(path_to_stl)
        fbx_export_path = get_full_path(fbx_export_path)
        ue.log("path_to_stl = " + path_to_stl)
        ue.log("fbx_export_path = " + fbx_export_path)
        ue.log("calling command line for stl to fbx conversion")
        # blender --background --python C:/integrationcourseenv/VRoscopy/VRoscopy/Content/Scripts/stl_to_fbx.py -- "C:/Users/DAN/Desktop/test.stl" "C:/Users/DAN/Desktop/test.fbx"
        runProcess("blender --background --python " + path_to_stl_to_fbx_script + " -- " + "\"" + path_to_stl
                        + "\"" + " \"" + fbx_export_path)
        # subprocess.call("(blender --background --python " + path_to_stl_to_fbx_script + " -- " + "\"" + path_to_stl
        #                 + "\"" + " \"" + fbx_export_path + "\")", shell=True)
        ue.log("finished conversion from stl to fbx")

    def run_fbx_to_ueasset(self, path_to_fbx=''):
        if path_to_fbx is None:
            ue.log("provide correct path to file and proper fbx name")
        else:
            path_to_fbx = get_full_path(path_to_fbx)
            ue.log("path_to_fbx = " + path_to_fbx)
            # configure the factory
            self.fbx_factory.ImportUI.bCreatePhysicsAsset = False
            self.fbx_factory.ImportUI.bImportMaterials = False
            self.fbx_factory.ImportUI.bImportTextures = False
            self.fbx_factory.ImportUI.bImportAnimations = False
            self.fbx_factory.ImportUI.bImportAsSkeletal = True
            self.fbx_factory.ImportUI.SkeletalMeshImportData.ImportUniformScale = 0.1

            # import the mesh
            ue.log("starting to import fbx to unreal engine")
            ###### asset = factory.factory_import_object(filename, asset_name)
            # self.mesh = self.fbx_factory.factory_import_object(path_to_fbx, self.path_to_output_asset)
            self.mesh = self.fbx_factory.factory_import_object(path_to_fbx, self.path_to_output_asset)
            ue.log("finished to import fbx to unreal engine ")
            self.mesh.save_package()
            ue.log("save uasset as package")
            ue.add_on_screen_debug_message(1, 30, self.mesh)
            self.create_blueprint_from_mesh()

    def create_blueprint_from_mesh(self):
        new_blueprint = ue.find_asset(self.path_to_output_asset + '/main_mesh')
        if new_blueprint is None:
            ue.log("blueprint class doesn't exists")
            new_blueprint = ue.create_blueprint(Character, self.path_to_output_asset + '/main_mesh')
        else:
            ue.log("blueprint class exists")
            new_blueprint = ue.find_asset(self.path_to_output_asset + '/main_mesh')
        # new_blueprint.GeneratedClass.get_cdo().Mesh.RelativeLocation = FVector(0, -200, 150)
        # new_blueprint.GeneratedClass.get_cdo().Mesh.RelativeRotation = FRotator(0, 0, 0)
        # add empty static mesh component to blueprint class
        new_blueprint.GeneratedClass.get_cdo().CapsuleComponent.CapsuleHalfHeight = 150
        new_blueprint.GeneratedClass.get_cdo().CapsuleComponent.CapsuleRadius = 50
        st_component = ue.add_component_to_blueprint(new_blueprint, StaticMeshComponent, 'dicom_mesh')
        ue.log("self.mesh.get_name() = " + self.mesh.get_name())
        st_component.StaticMesh = ue.load_object(StaticMesh, self.path_to_output_asset + "/test_test")

        ue.compile_blueprint(new_blueprint)

        # saves uasset on the hard disk
        new_blueprint.save_package()

        world = ue.get_editor_world()
        new_actor = world.actor_spawn(new_blueprint.GeneratedClass, FVector(0, 0, 150))

        # anim_bp = ue.find_asset(self.path_to_output_asset+'.test')
        # bpFactory = BlueprintFactory()
        # new_blueprint = bpFactory.factory_create_new(self.path_to_output_asset + '/Kaiju_BP')
        # tmp_static_mesh = new_blueprint.add_component_to_blueprint(new_blueprint, StaticMesh, self.mesh)

        # ue.get_editor_world().actor_spawn(new_blueprint.GeneratedClass)
        # ue.editor_save_all()

        # if anim_bp:
        #     ue.delete_asset(anim_bp.get_path_name())
        #
        # anim_bp_factory = AnimBlueprintFactory()
        # # anim_bp_factory.TargetSkeleton = self.mesh.Skeleton
        #
        # anim_bp = anim_bp_factory.factory_create_new(self.path_to_output_asset+'testAnimBP')

    def add_mesh_to_level(self):
        dicom_mesh_actor = self.world.actor_spawn(StaticMeshActor)
        dicom_mesh_actor.StaticMeshComponent.StaticMesh = ue.load_object(StaticMesh, '/Game/DicomMeshAssets/1/test')
        dicom_mesh_actor.set_actor_label('Dicom Mesh Actor')

        # mesh = ue.load_object(StaticMesh, '/Game/DicomMeshAssets/1/test')
        # obj = ue.get_editor_world().actor_spawn(StaticMeshActor)
        # obj.StaticMeshComponent.StaticMesh = self.mesh
        pass
