/*
 * COPYRIGHT AND PERMISSION NOTICE
 * Penn Software MSCKF_VIO
 * Copyright (C) 2017 The Trustees of the University of Pennsylvania
 * All rights reserved.
 */

#ifndef MSCKF_VIO_UTILS_H
#define MSCKF_VIO_UTILS_H

#include <ros/ros.h>

#include <Eigen/Geometry>
#include <opencv2/core/core.hpp>
#include <string>

namespace msckf_vio {
/*
 * @brief utilities for msckf_vio
 */
namespace utils {
// 从ros的参数服务器获取参数，field是要获取字段的名称
Eigen::Isometry3d getTransformEigen(const ros::NodeHandle& nh, const std::string& field);

cv::Mat getTransformCV(const ros::NodeHandle& nh, const std::string& field);

cv::Mat getVec16Transform(const ros::NodeHandle& nh, const std::string& field);

cv::Mat getKalibrStyleTransform(const ros::NodeHandle& nh, const std::string& field);

}  // namespace utils
}  // namespace msckf_vio
#endif
