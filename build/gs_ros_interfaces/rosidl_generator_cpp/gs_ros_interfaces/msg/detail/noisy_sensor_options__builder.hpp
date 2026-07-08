// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/NoisySensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_NoisySensorOptions_interpolate
{
public:
  explicit Init_NoisySensorOptions_interpolate(::gs_ros_interfaces::msg::NoisySensorOptions & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::NoisySensorOptions interpolate(::gs_ros_interfaces::msg::NoisySensorOptions::_interpolate_type arg)
  {
    msg_.interpolate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::NoisySensorOptions msg_;
};

class Init_NoisySensorOptions_jitter
{
public:
  explicit Init_NoisySensorOptions_jitter(::gs_ros_interfaces::msg::NoisySensorOptions & msg)
  : msg_(msg)
  {}
  Init_NoisySensorOptions_interpolate jitter(::gs_ros_interfaces::msg::NoisySensorOptions::_jitter_type arg)
  {
    msg_.jitter = std::move(arg);
    return Init_NoisySensorOptions_interpolate(msg_);
  }

private:
  ::gs_ros_interfaces::msg::NoisySensorOptions msg_;
};

class Init_NoisySensorOptions_random_walk
{
public:
  explicit Init_NoisySensorOptions_random_walk(::gs_ros_interfaces::msg::NoisySensorOptions & msg)
  : msg_(msg)
  {}
  Init_NoisySensorOptions_jitter random_walk(::gs_ros_interfaces::msg::NoisySensorOptions::_random_walk_type arg)
  {
    msg_.random_walk = std::move(arg);
    return Init_NoisySensorOptions_jitter(msg_);
  }

private:
  ::gs_ros_interfaces::msg::NoisySensorOptions msg_;
};

class Init_NoisySensorOptions_noise
{
public:
  explicit Init_NoisySensorOptions_noise(::gs_ros_interfaces::msg::NoisySensorOptions & msg)
  : msg_(msg)
  {}
  Init_NoisySensorOptions_random_walk noise(::gs_ros_interfaces::msg::NoisySensorOptions::_noise_type arg)
  {
    msg_.noise = std::move(arg);
    return Init_NoisySensorOptions_random_walk(msg_);
  }

private:
  ::gs_ros_interfaces::msg::NoisySensorOptions msg_;
};

class Init_NoisySensorOptions_bias
{
public:
  explicit Init_NoisySensorOptions_bias(::gs_ros_interfaces::msg::NoisySensorOptions & msg)
  : msg_(msg)
  {}
  Init_NoisySensorOptions_noise bias(::gs_ros_interfaces::msg::NoisySensorOptions::_bias_type arg)
  {
    msg_.bias = std::move(arg);
    return Init_NoisySensorOptions_noise(msg_);
  }

private:
  ::gs_ros_interfaces::msg::NoisySensorOptions msg_;
};

class Init_NoisySensorOptions_resolution
{
public:
  Init_NoisySensorOptions_resolution()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NoisySensorOptions_bias resolution(::gs_ros_interfaces::msg::NoisySensorOptions::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_NoisySensorOptions_bias(msg_);
  }

private:
  ::gs_ros_interfaces::msg::NoisySensorOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::NoisySensorOptions>()
{
  return gs_ros_interfaces::msg::builder::Init_NoisySensorOptions_resolution();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__BUILDER_HPP_
