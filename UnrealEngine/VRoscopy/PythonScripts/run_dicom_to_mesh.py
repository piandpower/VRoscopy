# import os
import subprocess

######## Script runs Invesalius 3 for converting dicoms to .stl mesh #######


### copy inside execute python script in ue4 ####
# import run_dicom_to_mesh
# reload(run_dicom_to_mesh)
# run_dicom_to_mesh.dicoms_to_mesh(

# import run_dicom_to_mesh
# reload(run_dicom_to_mesh)
# run_dicom_to_mesh.dicom_to_mesh(


def dicoms_to_mesh(invesalius_file_path="", dicoms_folder="", output_stl_path="", output_file_name=""):
    # TODO add checkers for file paths
    # TODO consider migrating to subprocess instead of os
    subprocess.call(
        "(python " + invesalius_file_path + "/app.py --no-gui -i " + dicoms_folder + " -t 200,3033 -e " + output_stl_path + output_file_name + ")",
        shell=True)
