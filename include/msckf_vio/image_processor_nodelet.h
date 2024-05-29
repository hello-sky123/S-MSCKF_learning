/*
 * COPYRIGHT AND PERMISSION NOTICE
 * Penn Software MSCKF_VIO
 * Copyright (C) 2017 The Trustees of the University of Pennsylvania
 * All rights reserved.
 */

#ifndef IMAGE_PROCESSOR_NODELET_H
#define IMAGE_PROCESSOR_NODELET_H

#include <nodelet/nodelet.h>
#include <msckf_vio/image_processor.h>

namespace msckf_vio {
class ImageProcessorNodelet: public nodelet::Nodelet {
 public:
  ImageProcessorNodelet() = default;
  ~ImageProcessorNodelet() override = default;

 private:
  void onInit() override; // // 初始化函数，在nodelet加载时调用
  ImageProcessorPtr img_processor_ptr;
};
}  // end namespace msckf_vio

#endif
