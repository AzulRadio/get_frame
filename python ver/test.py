from camera import Camera

import cv2

cam = Camera()

while(True):
	cam.get_frame()
	frame = cam.show_frame()
cam.shundown()
