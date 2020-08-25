import cv2

class Camera:
  cam = 0
  frame = 0
  def __init__(self):
    self.cam = cv2.VideoCapture(0)
    self.cam.set(cv2.CAP_PROP_FPS, 24)
    self.cam.set(cv2.CAP_PROP_BUFFERSIZE, 1)
  
  def __init__(self, video_num):
    self.cam = cv2.VideoCapture(int(video_num))
    self.cam.set(cv2.CAP_PROP_FPS, 24)
    self.cam.set(cv2.CAP_PROP_BUFFERSIZE, 1)
  
  def resize_frame(self, frame_width, frame_height):
    self.cam.set(cv2.CAP_PROP_FRAME_WIDTH, int(frame_width))
    self.cam.set(cv2.CAP_PROP_FRAME_HEIGHT, int(frame_height))
  
  def get_frame(self):
    ret, self.frame = self.cam.read()
    return self.frame
  
  def show_frame(self):
    cv2.imshow("frame", self.frame)
    cv2.waitKey(1)

  def shutdown(self):
    cam.cv2.release()

