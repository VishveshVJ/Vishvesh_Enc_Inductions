// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/ImuOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/imu_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_ImuOptions_debug_gyro_scale
{
public:
  explicit Init_ImuOptions_debug_gyro_scale(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::ImuOptions debug_gyro_scale(::gs_ros_interfaces::msg::ImuOptions::_debug_gyro_scale_type arg)
  {
    msg_.debug_gyro_scale = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_debug_gyro_color
{
public:
  explicit Init_ImuOptions_debug_gyro_color(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_debug_gyro_scale debug_gyro_color(::gs_ros_interfaces::msg::ImuOptions::_debug_gyro_color_type arg)
  {
    msg_.debug_gyro_color = std::move(arg);
    return Init_ImuOptions_debug_gyro_scale(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_debug_acc_scale
{
public:
  explicit Init_ImuOptions_debug_acc_scale(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_debug_gyro_color debug_acc_scale(::gs_ros_interfaces::msg::ImuOptions::_debug_acc_scale_type arg)
  {
    msg_.debug_acc_scale = std::move(arg);
    return Init_ImuOptions_debug_gyro_color(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_debug_acc_color
{
public:
  explicit Init_ImuOptions_debug_acc_color(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_debug_acc_scale debug_acc_color(::gs_ros_interfaces::msg::ImuOptions::_debug_acc_color_type arg)
  {
    msg_.debug_acc_color = std::move(arg);
    return Init_ImuOptions_debug_acc_scale(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_gyro_random_walk
{
public:
  explicit Init_ImuOptions_gyro_random_walk(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_debug_acc_color gyro_random_walk(::gs_ros_interfaces::msg::ImuOptions::_gyro_random_walk_type arg)
  {
    msg_.gyro_random_walk = std::move(arg);
    return Init_ImuOptions_debug_acc_color(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_gyro_noise
{
public:
  explicit Init_ImuOptions_gyro_noise(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_gyro_random_walk gyro_noise(::gs_ros_interfaces::msg::ImuOptions::_gyro_noise_type arg)
  {
    msg_.gyro_noise = std::move(arg);
    return Init_ImuOptions_gyro_random_walk(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_gyro_bias
{
public:
  explicit Init_ImuOptions_gyro_bias(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_gyro_noise gyro_bias(::gs_ros_interfaces::msg::ImuOptions::_gyro_bias_type arg)
  {
    msg_.gyro_bias = std::move(arg);
    return Init_ImuOptions_gyro_noise(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_gyro_cross_axis_coupling
{
public:
  explicit Init_ImuOptions_gyro_cross_axis_coupling(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_gyro_bias gyro_cross_axis_coupling(::gs_ros_interfaces::msg::ImuOptions::_gyro_cross_axis_coupling_type arg)
  {
    msg_.gyro_cross_axis_coupling = std::move(arg);
    return Init_ImuOptions_gyro_bias(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_gyro_resolution
{
public:
  explicit Init_ImuOptions_gyro_resolution(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_gyro_cross_axis_coupling gyro_resolution(::gs_ros_interfaces::msg::ImuOptions::_gyro_resolution_type arg)
  {
    msg_.gyro_resolution = std::move(arg);
    return Init_ImuOptions_gyro_cross_axis_coupling(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_acc_random_walk
{
public:
  explicit Init_ImuOptions_acc_random_walk(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_gyro_resolution acc_random_walk(::gs_ros_interfaces::msg::ImuOptions::_acc_random_walk_type arg)
  {
    msg_.acc_random_walk = std::move(arg);
    return Init_ImuOptions_gyro_resolution(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_acc_noise
{
public:
  explicit Init_ImuOptions_acc_noise(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_acc_random_walk acc_noise(::gs_ros_interfaces::msg::ImuOptions::_acc_noise_type arg)
  {
    msg_.acc_noise = std::move(arg);
    return Init_ImuOptions_acc_random_walk(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_acc_bias
{
public:
  explicit Init_ImuOptions_acc_bias(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_acc_noise acc_bias(::gs_ros_interfaces::msg::ImuOptions::_acc_bias_type arg)
  {
    msg_.acc_bias = std::move(arg);
    return Init_ImuOptions_acc_noise(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_acc_cross_axis_coupling
{
public:
  explicit Init_ImuOptions_acc_cross_axis_coupling(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_acc_bias acc_cross_axis_coupling(::gs_ros_interfaces::msg::ImuOptions::_acc_cross_axis_coupling_type arg)
  {
    msg_.acc_cross_axis_coupling = std::move(arg);
    return Init_ImuOptions_acc_bias(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_acc_resolution
{
public:
  explicit Init_ImuOptions_acc_resolution(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_acc_cross_axis_coupling acc_resolution(::gs_ros_interfaces::msg::ImuOptions::_acc_resolution_type arg)
  {
    msg_.acc_resolution = std::move(arg);
    return Init_ImuOptions_acc_cross_axis_coupling(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_noisy_options
{
public:
  explicit Init_ImuOptions_noisy_options(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_acc_resolution noisy_options(::gs_ros_interfaces::msg::ImuOptions::_noisy_options_type arg)
  {
    msg_.noisy_options = std::move(arg);
    return Init_ImuOptions_acc_resolution(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_rigid_options
{
public:
  explicit Init_ImuOptions_rigid_options(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_noisy_options rigid_options(::gs_ros_interfaces::msg::ImuOptions::_rigid_options_type arg)
  {
    msg_.rigid_options = std::move(arg);
    return Init_ImuOptions_noisy_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_ros_options
{
public:
  explicit Init_ImuOptions_ros_options(::gs_ros_interfaces::msg::ImuOptions & msg)
  : msg_(msg)
  {}
  Init_ImuOptions_rigid_options ros_options(::gs_ros_interfaces::msg::ImuOptions::_ros_options_type arg)
  {
    msg_.ros_options = std::move(arg);
    return Init_ImuOptions_rigid_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

class Init_ImuOptions_options
{
public:
  Init_ImuOptions_options()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ImuOptions_ros_options options(::gs_ros_interfaces::msg::ImuOptions::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_ImuOptions_ros_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::ImuOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::ImuOptions>()
{
  return gs_ros_interfaces::msg::builder::Init_ImuOptions_options();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__BUILDER_HPP_
