// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/DepthCameraRayCasterPattern.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_DepthCameraRayCasterPattern_fov_vertical
{
public:
  explicit Init_DepthCameraRayCasterPattern_fov_vertical(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::DepthCameraRayCasterPattern fov_vertical(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern::_fov_vertical_type arg)
  {
    msg_.fov_vertical = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::DepthCameraRayCasterPattern msg_;
};

class Init_DepthCameraRayCasterPattern_fov_horizontal
{
public:
  explicit Init_DepthCameraRayCasterPattern_fov_horizontal(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern & msg)
  : msg_(msg)
  {}
  Init_DepthCameraRayCasterPattern_fov_vertical fov_horizontal(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern::_fov_horizontal_type arg)
  {
    msg_.fov_horizontal = std::move(arg);
    return Init_DepthCameraRayCasterPattern_fov_vertical(msg_);
  }

private:
  ::gs_ros_interfaces::msg::DepthCameraRayCasterPattern msg_;
};

class Init_DepthCameraRayCasterPattern_cy
{
public:
  explicit Init_DepthCameraRayCasterPattern_cy(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern & msg)
  : msg_(msg)
  {}
  Init_DepthCameraRayCasterPattern_fov_horizontal cy(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern::_cy_type arg)
  {
    msg_.cy = std::move(arg);
    return Init_DepthCameraRayCasterPattern_fov_horizontal(msg_);
  }

private:
  ::gs_ros_interfaces::msg::DepthCameraRayCasterPattern msg_;
};

class Init_DepthCameraRayCasterPattern_cx
{
public:
  explicit Init_DepthCameraRayCasterPattern_cx(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern & msg)
  : msg_(msg)
  {}
  Init_DepthCameraRayCasterPattern_cy cx(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern::_cx_type arg)
  {
    msg_.cx = std::move(arg);
    return Init_DepthCameraRayCasterPattern_cy(msg_);
  }

private:
  ::gs_ros_interfaces::msg::DepthCameraRayCasterPattern msg_;
};

class Init_DepthCameraRayCasterPattern_fy
{
public:
  explicit Init_DepthCameraRayCasterPattern_fy(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern & msg)
  : msg_(msg)
  {}
  Init_DepthCameraRayCasterPattern_cx fy(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern::_fy_type arg)
  {
    msg_.fy = std::move(arg);
    return Init_DepthCameraRayCasterPattern_cx(msg_);
  }

private:
  ::gs_ros_interfaces::msg::DepthCameraRayCasterPattern msg_;
};

class Init_DepthCameraRayCasterPattern_fx
{
public:
  explicit Init_DepthCameraRayCasterPattern_fx(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern & msg)
  : msg_(msg)
  {}
  Init_DepthCameraRayCasterPattern_fy fx(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern::_fx_type arg)
  {
    msg_.fx = std::move(arg);
    return Init_DepthCameraRayCasterPattern_fy(msg_);
  }

private:
  ::gs_ros_interfaces::msg::DepthCameraRayCasterPattern msg_;
};

class Init_DepthCameraRayCasterPattern_res
{
public:
  Init_DepthCameraRayCasterPattern_res()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DepthCameraRayCasterPattern_fx res(::gs_ros_interfaces::msg::DepthCameraRayCasterPattern::_res_type arg)
  {
    msg_.res = std::move(arg);
    return Init_DepthCameraRayCasterPattern_fx(msg_);
  }

private:
  ::gs_ros_interfaces::msg::DepthCameraRayCasterPattern msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::DepthCameraRayCasterPattern>()
{
  return gs_ros_interfaces::msg::builder::Init_DepthCameraRayCasterPattern_res();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__BUILDER_HPP_
