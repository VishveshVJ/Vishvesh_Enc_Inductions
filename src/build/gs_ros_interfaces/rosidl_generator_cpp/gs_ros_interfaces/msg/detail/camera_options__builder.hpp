// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/CameraOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/camera_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_CameraOptions_noise_std
{
public:
  explicit Init_CameraOptions_noise_std(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::CameraOptions noise_std(::gs_ros_interfaces::msg::CameraOptions::_noise_std_type arg)
  {
    msg_.noise_std = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_noise_mean
{
public:
  explicit Init_CameraOptions_noise_mean(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_noise_std noise_mean(::gs_ros_interfaces::msg::CameraOptions::_noise_mean_type arg)
  {
    msg_.noise_mean = std::move(arg);
    return Init_CameraOptions_noise_std(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_add_noise
{
public:
  explicit Init_CameraOptions_add_noise(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_noise_mean add_noise(::gs_ros_interfaces::msg::CameraOptions::_add_noise_type arg)
  {
    msg_.add_noise = std::move(arg);
    return Init_CameraOptions_noise_mean(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_gui
{
public:
  explicit Init_CameraOptions_gui(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_add_noise gui(::gs_ros_interfaces::msg::CameraOptions::_gui_type arg)
  {
    msg_.gui = std::move(arg);
    return Init_CameraOptions_add_noise(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_focus_dist
{
public:
  explicit Init_CameraOptions_focus_dist(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_gui focus_dist(::gs_ros_interfaces::msg::CameraOptions::_focus_dist_type arg)
  {
    msg_.focus_dist = std::move(arg);
    return Init_CameraOptions_gui(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_model
{
public:
  explicit Init_CameraOptions_model(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_focus_dist model(::gs_ros_interfaces::msg::CameraOptions::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_CameraOptions_focus_dist(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_spp
{
public:
  explicit Init_CameraOptions_spp(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_model spp(::gs_ros_interfaces::msg::CameraOptions::_spp_type arg)
  {
    msg_.spp = std::move(arg);
    return Init_CameraOptions_model(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_denoise
{
public:
  explicit Init_CameraOptions_denoise(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_spp denoise(::gs_ros_interfaces::msg::CameraOptions::_denoise_type arg)
  {
    msg_.denoise = std::move(arg);
    return Init_CameraOptions_spp(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_aperture
{
public:
  explicit Init_CameraOptions_aperture(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_denoise aperture(::gs_ros_interfaces::msg::CameraOptions::_aperture_type arg)
  {
    msg_.aperture = std::move(arg);
    return Init_CameraOptions_denoise(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_far
{
public:
  explicit Init_CameraOptions_far(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_aperture far(::gs_ros_interfaces::msg::CameraOptions::_far_type arg)
  {
    msg_.far = std::move(arg);
    return Init_CameraOptions_aperture(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_near
{
public:
  explicit Init_CameraOptions_near(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_far near(::gs_ros_interfaces::msg::CameraOptions::_near_type arg)
  {
    msg_.near = std::move(arg);
    return Init_CameraOptions_far(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_fov
{
public:
  explicit Init_CameraOptions_fov(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_near fov(::gs_ros_interfaces::msg::CameraOptions::_fov_type arg)
  {
    msg_.fov = std::move(arg);
    return Init_CameraOptions_near(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_res
{
public:
  explicit Init_CameraOptions_res(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_fov res(::gs_ros_interfaces::msg::CameraOptions::_res_type arg)
  {
    msg_.res = std::move(arg);
    return Init_CameraOptions_fov(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_camera_types
{
public:
  explicit Init_CameraOptions_camera_types(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_res camera_types(::gs_ros_interfaces::msg::CameraOptions::_camera_types_type arg)
  {
    msg_.camera_types = std::move(arg);
    return Init_CameraOptions_res(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_rigid_options
{
public:
  explicit Init_CameraOptions_rigid_options(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_camera_types rigid_options(::gs_ros_interfaces::msg::CameraOptions::_rigid_options_type arg)
  {
    msg_.rigid_options = std::move(arg);
    return Init_CameraOptions_camera_types(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_ros_options
{
public:
  explicit Init_CameraOptions_ros_options(::gs_ros_interfaces::msg::CameraOptions & msg)
  : msg_(msg)
  {}
  Init_CameraOptions_rigid_options ros_options(::gs_ros_interfaces::msg::CameraOptions::_ros_options_type arg)
  {
    msg_.ros_options = std::move(arg);
    return Init_CameraOptions_rigid_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

class Init_CameraOptions_options
{
public:
  Init_CameraOptions_options()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraOptions_ros_options options(::gs_ros_interfaces::msg::CameraOptions::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_CameraOptions_ros_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::CameraOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::CameraOptions>()
{
  return gs_ros_interfaces::msg::builder::Init_CameraOptions_options();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__BUILDER_HPP_
