import bpy
import sys


######## Script converts stl to fbx using blender #######

argv = sys.argv
argv = argv[argv.index("--") + 1:]
importPath = argv[0]
exportPath = argv[1]
bpy.ops.import_mesh.stl(filepath=importPath, filter_glob="*.stl")
ob_new = bpy.context.selected_objects[0]
if ob_new != None:
    bpy.ops.export_scene.fbx(filepath=exportPath, axis_forward='-Z', axis_up='Y')
    # ob_new.rotation_euler[0] = 150
else:
    print("I failed to detect my newly imported object")


