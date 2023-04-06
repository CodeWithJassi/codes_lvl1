import cv2
import cv2.aruco as aruco

# Define the dictionary for the ArUco markers
aruco_dict = aruco.Dictionary_get(aruco.DICT_4X4_100)

# Print the dictionary
print(aruco_dict)
