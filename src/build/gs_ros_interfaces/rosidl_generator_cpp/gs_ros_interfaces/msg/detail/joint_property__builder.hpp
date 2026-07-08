// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/JointProperty.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/joint_property__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_JointProperty_command
{
public:
  explicit Init_JointProperty_command(::gs_ros_interfaces::msg::JointProperty & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::JointProperty command(::gs_ros_interfaces::msg::JointProperty::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::JointProperty msg_;
};

class Init_JointProperty_force_range
{
public:
  explicit Init_JointProperty_force_range(::gs_ros_interfaces::msg::JointProperty & msg)
  : msg_(msg)
  {}
  Init_JointProperty_command force_range(::gs_ros_interfaces::msg::JointProperty::_force_range_type arg)
  {
    msg_.force_range = std::move(arg);
    return Init_JointProperty_command(msg_);
  }

private:
  ::gs_ros_interfaces::msg::JointProperty msg_;
};

class Init_JointProperty_damping
{
public:
  explicit Init_JointProperty_damping(::gs_ros_interfaces::msg::JointProperty & msg)
  : msg_(msg)
  {}
  Init_JointProperty_force_range damping(::gs_ros_interfaces::msg::JointProperty::_damping_type arg)
  {
    msg_.damping = std::move(arg);
    return Init_JointProperty_force_range(msg_);
  }

private:
  ::gs_ros_interfaces::msg::JointProperty msg_;
};

class Init_JointProperty_armature
{
public:
  explicit Init_JointProperty_armature(::gs_ros_interfaces::msg::JointProperty & msg)
  : msg_(msg)
  {}
  Init_JointProperty_damping armature(::gs_ros_interfaces::msg::JointProperty::_armature_type arg)
  {
    msg_.armature = std::move(arg);
    return Init_JointProperty_damping(msg_);
  }

private:
  ::gs_ros_interfaces::msg::JointProperty msg_;
};

class Init_JointProperty_stiffness
{
public:
  explicit Init_JointProperty_stiffness(::gs_ros_interfaces::msg::JointProperty & msg)
  : msg_(msg)
  {}
  Init_JointProperty_armature stiffness(::gs_ros_interfaces::msg::JointProperty::_stiffness_type arg)
  {
    msg_.stiffness = std::move(arg);
    return Init_JointProperty_armature(msg_);
  }

private:
  ::gs_ros_interfaces::msg::JointProperty msg_;
};

class Init_JointProperty_kv
{
public:
  explicit Init_JointProperty_kv(::gs_ros_interfaces::msg::JointProperty & msg)
  : msg_(msg)
  {}
  Init_JointProperty_stiffness kv(::gs_ros_interfaces::msg::JointProperty::_kv_type arg)
  {
    msg_.kv = std::move(arg);
    return Init_JointProperty_stiffness(msg_);
  }

private:
  ::gs_ros_interfaces::msg::JointProperty msg_;
};

class Init_JointProperty_kp
{
public:
  explicit Init_JointProperty_kp(::gs_ros_interfaces::msg::JointProperty & msg)
  : msg_(msg)
  {}
  Init_JointProperty_kv kp(::gs_ros_interfaces::msg::JointProperty::_kp_type arg)
  {
    msg_.kp = std::move(arg);
    return Init_JointProperty_kv(msg_);
  }

private:
  ::gs_ros_interfaces::msg::JointProperty msg_;
};

class Init_JointProperty_name
{
public:
  Init_JointProperty_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointProperty_kp name(::gs_ros_interfaces::msg::JointProperty::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_JointProperty_kp(msg_);
  }

private:
  ::gs_ros_interfaces::msg::JointProperty msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::JointProperty>()
{
  return gs_ros_interfaces::msg::builder::Init_JointProperty_name();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__BUILDER_HPP_
