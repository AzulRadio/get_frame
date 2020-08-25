#include "opencv2/opencv.hpp"

#ifndef CAMERA_H
#define CAMERA_H

class Camera {
 public:
  Camera();
  Camera(int video_num)
  void resize_frame(int frame_width, int frame_height);
  cv::Mat get_frame(void);
  void show_frame(void);
  void shundown(void);
 private:
  cv::Mat frame;
  cv::VideoCapture cam;
};

#endif
