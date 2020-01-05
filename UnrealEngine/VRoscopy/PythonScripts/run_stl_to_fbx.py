import subprocess
import os
import stl_to

# import run_stl_to_fbx
# reload(run_stl_to_fbx)
# run_stl_to_fbx.run_cmd(
# blender --background --python PATH_TO_PYTHON_SCRIPT -- "PATH_TO_STL" "PATH_TO_FBX_OUTPUT"

# "C:\integrationcourseenv\Projects\!!!AfekaFinalProject\VRoscopy\UnrealEngine\VRoscopy\PythonScripts\stl_to_fbx.py"
path_to_python_script = "C:/integrationcourseenv/Projects/!!!AfekaFinalProject/VRoscopy/UnrealEngine/VRoscopy/PythonScripts/stl_to_fbx.py"
# path_to_stl = 'C:/Users/DAN/Desktop/'
# stl_file_name = "test.stl"
# fbx_export_path = 'C:/Users/DAN/Desktop/untitled.fbx'


def run_cmd(path_to_stl="", stl_file_name="", fbx_export_path=""):
    # def run_cmd():
    cp = subprocess.run(
        "blender --background --python " + path_to_python_script + " --" + " \"" + path_to_stl + stl_file_name + "\"" +
        " \"" + fbx_export_path + "\"", shell=True)
    print(cp)
    # os.system("blender --background --python " + path_to_python_script + " -- " + "\"" + path_to_stl + stl_file_name + "\"" +
    #     " \"" + fbx_export_path + "\"")
    # subprocess.call(
    #     "(blender --background --python " + path_to_python_script + " -- " + "\"" + path_to_stl + stl_file_name + "\"" +
    #     " \"" + fbx_export_path + "\")", shell=True)
    # p = subprocess.Popen(
    #     ["blender --background --python " + path_to_python_script + " -- " + "\"" + path_to_stl + stl_file_name + "\"" +
    #      " \"" + fbx_export_path + "\""], stdout=subprocess.PIPE,stderr=subprocess.PIPE, shell=True)
    # out, err = p.communicate()
