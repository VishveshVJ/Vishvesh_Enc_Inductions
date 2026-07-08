// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/RobotOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/robot_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_RobotOptions_joint_properties
{
public:
  explicit Init_RobotOptions_joint_properties(::gs_ros_interfaces::msg::RobotOptions & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::RobotOptions joint_properties(::gs_ros_interfaces::msg::RobotOptions::_joint_properties_type arg)
  {
    msg_.joint_properties = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RobotOptions msg_;
};

class Init_RobotOptions_joints_control_topic_frequency
{
public:
  explicit Init_RobotOptions_joints_control_topic_frequency(::gs_ros_interfaces::msg::RobotOptions & msg)
  : msg_(msg)
  {}
  Init_RobotOptions_joint_properties joints_control_topic_frequency(::gs_ros_interfaces::msg::RobotOptions::_joints_control_topic_frequency_type arg)
  {
    msg_.joints_control_topic_frequency = std::move(arg);
    return Init_RobotOptions_joint_properties(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RobotOptions msg_;
};

class Init_RobotOptions_joints_control_topic
{
public:
  explicit Init_RobotOptions_joints_control_topic(::gs_ros_interfaces::msg::RobotOptions & msg)
  : msg_(msg)
  {}
  Init_RobotOptions_joints_control_topic_frequency joints_control_topic(::gs_ros_interfaces::msg::RobotOptions::_joints_control_topic_type arg)
  {
    msg_.joints_control_topic = std::move(arg);
    return Init_RobotOptions_joints_control_topic_frequency(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RobotOptions msg_;
};

class Init_RobotOptions_joint_commands_topic_frequency
{
public:
  explicit Init_RobotOptions_joint_commands_topic_frequency(::gs_ros_interfaces::msg::RobotOptions & msg)
  : msg_(msg)
  {}
  Init_RobotOptions_joints_control_topic joint_commands_topic_frequency(::gs_ros_interfaces::msg::RobotOptions::_joint_commands_topic_frequency_type arg)
  {
    msg_.joint_commands_topic_frequency = std::move(arg);
    return Init_RobotOptions_joints_control_topic(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RobotOptions msg_;
};

class Init_RobotOptions_joint_commands_topic
{
public:
  explicit Init_RobotOptions_joint_commands_topic(::gs_ros_interfaces::msg::RobotOptions & msg)
  : msg_(msg)
  {}
  Init_RobotOptions_joint_commands_topic_frequency joint_commands_topic(::gs_ros_interfaces::msg::RobotOptions::_joint_commands_topic_type arg)
  {
    msg_.joint_commands_topic = std::move(arg);
    return Init_RobotOptions_joint_commands_topic_frequency(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RobotOptions msg_;
};

class Init_RobotOptions_joint_states_topic_frequency
{
public:
  explicit Init_RobotOptions_joint_states_topic_frequency(::gs_ros_interfaces::msg::RobotOptions & msg)
  : msg_(msg)
  {}
  Init_RobotOptions_joint_commands_topic joint_states_topic_frequency(::gs_ros_interfaces::msg::RobotOptions::_joint_states_topic_frequency_type arg)
  {
    msg_.joint_states_topic_frequency = std::move(arg);
    return Init_RobotOptions_joint_commands_topic(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RobotOptions msg_;
};

class Init_RobotOptions_joint_states_topic
{
public:
  Init_RobotOptions_joint_states_topic()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotOptions_joint_states_topic_frequency joint_states_topic(::gs_ros_interfaces::msg::RobotOptions::_joint_states_topic_type arg)
  {
    msg_.joint_states_topic = std::move(arg);
    return Init_RobotOptions_joint_states_topic_frequency(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RobotOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::RobotOptions>()
{
  return gs_ros_interfaces::msg::builder::Init_RobotOptions_joint_states_topic();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__BUILDER_HPP_
