===================================
make sure you have opencv installed
====================================
Hy.You, 2020.8.25, hy19@illinois.edu
====================================

how to start demo(cpp):
	$make
	$./test
	or
	$sudo ./test

how to start demo(python):
	$python test.py
	or
	$sudo python test.py


the default constructor Camera cam() will set camera to /dev/video0
Camera cam(1) will set camera to /dev/video1
$ ls /dev/video*    to check your cameras

KEY FUNCTIONS:
	get_frame(void) -> return the latest frame in cv::Mat
	show_frame(void) -> open a window and display the frame
	----------------------------NOTE------------------------------
	to show a single frame, add cv::waitKey(0) after show_frame()
	then close the window will refresh the frame
	--------------------------------------------------------------
	shundown() -> stop video capturing, use it at the end of the program, not necessary though
