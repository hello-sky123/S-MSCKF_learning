/*
 * COPYRIGHT AND PERMISSION NOTICE
 * Penn Software MSCKF_VIO
 * Copyright (C) 2017 The Trustees of the University of Pennsylvania
 * All rights reserved.
 */

#include <msckf_vio/image_processor_nodelet.h>
#include <pluginlib/class_list_macros.h>

namespace msckf_vio {
void ImageProcessorNodelet::onInit() {
  // 初始化一个ImageProcessor对象，并将其指针存储在img_processor_ptr中
  // reset方法用于释放当前指针所指向的对象（如果存在），并将指针重置为新的对象。
  // 当传递一个新的指针给reset()方法时，智能指针会接管该对象的所有权
  // getPrivateNodeHandle()是nodelet::Nodelet类中的一个成员函数，返回ros::NodeHandle对象，用于在Nodelet中访问私有命名空间
  img_processor_ptr.reset(new ImageProcessor(getPrivateNodeHandle()));
  if (!img_processor_ptr->initialize())
    ROS_ERROR("Cannot initialize Image Processor...");
}

// 导出插件
PLUGINLIB_EXPORT_CLASS(msckf_vio::ImageProcessorNodelet, nodelet::Nodelet);

}  // end namespace msckf_vio
