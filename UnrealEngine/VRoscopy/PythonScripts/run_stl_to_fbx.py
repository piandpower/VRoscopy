import subprocess
import os
# import stl_to

# import run_stl_to_fbx
# reload(run_stl_to_fbx)
# run_stl_to_fbx.run_cmd(
# blender --background --python PATH_TO_PYTHON_SCRIPT -- "PATH_TO_STL" "PATH_TO_FBX_OUTPUT"

path_to_python_script = "C:/integrationcourseenv/Projects/!!!AfekaFinalProject/VRoscopy/UnrealEngine/VRoscopy/PythonScripts/stl_to_fbx.py"


def run_cmd(path_to_stl="", stl_file_name="", fbx_export_path=""):
    subprocess.call(
        "(blender --background --python " + path_to_python_script + " -- " + "\"" + path_to_stl + stl_file_name + "\"" +
        " \"" + fbx_export_path + "\")", shell=True)

