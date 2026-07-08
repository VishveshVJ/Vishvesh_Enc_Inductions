// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/RigidSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_RigidSensorOptions_euler_offset
{
public:
  explicit Init_RigidSensorOptions_euler_offset(::gs_ros_interfaces::msg::RigidSensorOptions & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::RigidSensorOptions euler_offset(::gs_ros_interfaces::msg::RigidSensorOptions::_euler_offset_type arg)
  {
    msg_.euler_offset = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RigidSensorOptions msg_;
};

class Init_RigidSensorOptions_pos_offset
{
public:
  explicit Init_RigidSensorOptions_pos_offset(::gs_ros_interfaces::msg::RigidSensorOptions & msg)
  : msg_(msg)
  {}
  Init_RigidSensorOptions_euler_offset pos_offset(::gs_ros_interfaces::msg::RigidSensorOptions::_pos_offset_type arg)
  {
    msg_.pos_offset = std::move(arg);
    return Init_RigidSensorOptions_euler_offset(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RigidSensorOptions msg_;
};

class Init_RigidSensorOptions_link
{
public:
  Init_RigidSensorOptions_link()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RigidSensorOptions_pos_offset link(::gs_ros_interfaces::msg::RigidSensorOptions::_link_type arg)
  {
    msg_.link = std::move(arg);
    return Init_RigidSensorOptions_pos_offset(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RigidSensorOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::RigidSensorOptions>()
{
  return gs_ros_interfaces::msg::builder::Init_RigidSensorOptions_link();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__BUILDER_HPP_
