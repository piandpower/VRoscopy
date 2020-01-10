import os.path
from unreal_engine.classes import PyFbxFactory

path_to_output_asset = '/Game/DicomMeshAssets/1'
path_to_fbx = 'C:/Users/DAN/Desktop/finalProject'
fbx_name = 'untitled.fbx'
# instantiate a new factory
fbx_factory = PyFbxFactory()

# build the path for the fbx file
#kaiju_assets_dir = path_to_fbx
#os.path.join(os.path.expanduser('~/Desktop'), 'Kaiju_Assets/Slicer')
def run_fbx_to_ueasset(path_to_fbx = '', fbx_name = ''):
    if(path_to_fbx != None and fbx_name != None):
        full_path = os.path.join(path_to_fbx, fbx_name)
        print(full_path)

        # configure the factory
        fbx_factory.ImportUI.bCreatePhysicsAsset = False
        fbx_factory.ImportUI.bImportMaterials = False
        fbx_factory.ImportUI.bImportTextures = False
        fbx_factory.ImportUI.bImportAnimations = False
        # scale the mesh (the Kaiju is 30 meters high !)
        fbx_factory.ImportUI.SkeletalMeshImportData.ImportUniformScale = 0.1;

        # import the mesh
        slicer_mesh = fbx_factory.factory_import_object(full_path, path_to_output_asset)
    else:
        print("provide correct path to file and proper fbx name")