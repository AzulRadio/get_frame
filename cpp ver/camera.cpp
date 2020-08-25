#include "camera.h"

Camera::Camera() {
  cam = cv::VideoCapture(0);
  cam.set(cv::CAP_PROP_FPS, 24);
  cam.set(cv::CAP_PROP_BUFFERSIZE, 1);
}

Camera::Camera(int video_num) {
  cam = cv::VideoCapture(video_num);
  cam.set(cv::CAP_PROP_FPS, 24);
  cam.set(cv::CAP_PROP_BUFFERSIZE, 1);
}

void Camera::resize_frame(int frame_width, int frame_height) {
  cam.set(cv::CAP_PROP_FRAME_WIDTH, frame_width);
  cam.set(cv::CAP_PROP_FRAME_HEIGHT, frame_height);
}

cv::Mat Camera::get_frame(void) {
  cam.read(frame);
  return frame;
}

void Camera::shundown(void) {
  cam.cv::release();
}

void Camera::show_frame(void) {
  cv::imshow("frame", frame);
  cv::waitKey(1);
}

