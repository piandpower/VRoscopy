from unreal_engine.classes import Actor, PyFbxFactory, StaticMeshActor, StaticMesh, AnimBlueprintFactory, Character, BlueprintFactory, StaticMeshComponent
import unreal_engine as ue
from unreal_engine import FVector, FRotator
import os.path


ue.log('dicom to ueasset_pyactor')


class Dicom_Mesh:
    path_to_output_asset = '/Game/DicomMeshAssets/1'
    fbx_factory = PyFbxFactory()
    mesh = None
    world = ue.get_editor_world()

    # this is called on game start
    def begin_play(self):
        ue.log('Begin Play on Dicom_Mesh class')
        # found_object = ue.find_object(self.path_to_output_asset + 'test')
        # ue.log(found_object)

    # this is called at every 'tick'
    def tick(self, delta_time):
        pass

    def run_fbx_to_ueasset(self, path_to_fbx = ''):
        if path_to_fbx is None:
            print("provide correct path to file and proper fbx name")
        else:
            print(path_to_fbx)

            # configure the factory
            self.fbx_factory.ImportUI.bCreatePhysicsAsset = False
            self.fbx_factory.ImportUI.bImportMaterials = False
            self.fbx_factory.ImportUI.bImportTextures = False
            self.fbx_factory.ImportUI.bImportAnimations = False

            self.fbx_factory.ImportUI.bImportAsSkeletal = True


            # import the mesh
            self.mesh = self.fbx_factory.factory_import_object(path_to_fbx, self.path_to_output_asset)
            self.mesh.save_package()
            ue.add_on_screen_debug_message(1, 30, self.mesh)
            # self.create_blueprint_from_mesh()
            self.add_mesh_to_level()
            #self.add_mesh_to_level()

    def create_blueprint_from_mesh(self):
        # new_blueprint = ue.find_asset(self.path_to_output_asset + '/Kaiju_BP')
        #         # if new_blueprint is not None:
        #         #     ue.delete_asset(new_blueprint.get_path_name())
        #         # new_blueprint = ue.create_blueprint(Character, self.path_to_output_asset + '/Kaiju_BP')
        #         # # new_blueprint.GeneratedClass.get_cdo().Mesh.StaticMesh = self.mesh
        #         # new_blueprint.GeneratedClass.get_cdo().Mesh.RelativeLocation = FVector(0, 0, -140)
        #         # new_blueprint.GeneratedClass.get_cdo().Mesh.RelativeRotation = FRotator(0, 0, -90)
        #         # new_blueprint.GeneratedClass.get_cdo().CapsuleComponent.CapsuleHalfHeight = 150
        #         # new_blueprint.GeneratedClass.get_cdo().CapsuleComponent.CapsuleRadius = 50
        #         # #add empty static mesh component to blueprint class
        #         # st_component = ue.add_component_to_blueprint(new_blueprint, StaticMeshComponent, 'dicom_mesh')
        #         # st_component.StaticMesh = ue.load_object(StaticMesh, '/Game/DicomMeshAssets/1/test')
        #         # new_blueprint.SimpleConstructionScript.DefaultSceneRootNode.ChildNodes[0].ComponentTemplate.StaticMesh = self.mesh


        ue.compile_blueprint(new_blueprint)

        #saves uasset on the hard disk
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



    def add_mesh_to_level(self, mesh = ''):
        dicom_mesh_actor = self.world.actor_spawn(StaticMeshActor)
        dicom_mesh_actor.StaticMeshComponent.StaticMesh = ue.load_object(StaticMesh, '/Game/DicomMeshAssets/1/test')
        dicom_mesh_actor.set_actor_label('Dicom Mesh Actor')
        # mesh = ue.load_object(StaticMesh, '/Game/DicomMeshAssets/1/test')
        # obj = ue.get_editor_world().actor_spawn(StaticMeshActor)
        # obj.StaticMeshComponent.StaticMesh = self.mesh
        pass