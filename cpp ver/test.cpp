#include "camera.h"
#include <iostream>
#include <time.h>

int main()
{
	Camera cam1();
	cam1.resize_frame(800,600);
	cv::Mat frame;
	while (1) {
		clock_t start = clock();
		
		cam1.get_frame();
		cam1.show_frame();

		clock_t end = clock();
		std::cout << (double)(end -start)/ CLOCKS_PER_SEC << "sec" << std::endl;
	}
	
	cam1.shundown();
}
