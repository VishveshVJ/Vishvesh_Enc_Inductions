// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/RosSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/ros_sensor_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_RosSensorOptions_qos_durability
{
public:
  explicit Init_RosSensorOptions_qos_durability(::gs_ros_interfaces::msg::RosSensorOptions & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::RosSensorOptions qos_durability(::gs_ros_interfaces::msg::RosSensorOptions::_qos_durability_type arg)
  {
    msg_.qos_durability = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RosSensorOptions msg_;
};

class Init_RosSensorOptions_qos_reliability
{
public:
  explicit Init_RosSensorOptions_qos_reliability(::gs_ros_interfaces::msg::RosSensorOptions & msg)
  : msg_(msg)
  {}
  Init_RosSensorOptions_qos_durability qos_reliability(::gs_ros_interfaces::msg::RosSensorOptions::_qos_reliability_type arg)
  {
    msg_.qos_reliability = std::move(arg);
    return Init_RosSensorOptions_qos_durability(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RosSensorOptions msg_;
};

class Init_RosSensorOptions_qos_depth
{
public:
  explicit Init_RosSensorOptions_qos_depth(::gs_ros_interfaces::msg::RosSensorOptions & msg)
  : msg_(msg)
  {}
  Init_RosSensorOptions_qos_reliability qos_depth(::gs_ros_interfaces::msg::RosSensorOptions::_qos_depth_type arg)
  {
    msg_.qos_depth = std::move(arg);
    return Init_RosSensorOptions_qos_reliability(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RosSensorOptions msg_;
};

class Init_RosSensorOptions_qos_history
{
public:
  explicit Init_RosSensorOptions_qos_history(::gs_ros_interfaces::msg::RosSensorOptions & msg)
  : msg_(msg)
  {}
  Init_RosSensorOptions_qos_depth qos_history(::gs_ros_interfaces::msg::RosSensorOptions::_qos_history_type arg)
  {
    msg_.qos_history = std::move(arg);
    return Init_RosSensorOptions_qos_depth(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RosSensorOptions msg_;
};

class Init_RosSensorOptions_topic
{
public:
  explicit Init_RosSensorOptions_topic(::gs_ros_interfaces::msg::RosSensorOptions & msg)
  : msg_(msg)
  {}
  Init_RosSensorOptions_qos_history topic(::gs_ros_interfaces::msg::RosSensorOptions::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_RosSensorOptions_qos_history(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RosSensorOptions msg_;
};

class Init_RosSensorOptions_frequency
{
public:
  explicit Init_RosSensorOptions_frequency(::gs_ros_interfaces::msg::RosSensorOptions & msg)
  : msg_(msg)
  {}
  Init_RosSensorOptions_topic frequency(::gs_ros_interfaces::msg::RosSensorOptions::_frequency_type arg)
  {
    msg_.frequency = std::move(arg);
    return Init_RosSensorOptions_topic(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RosSensorOptions msg_;
};

class Init_RosSensorOptions_frame_id
{
public:
  Init_RosSensorOptions_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RosSensorOptions_frequency frame_id(::gs_ros_interfaces::msg::RosSensorOptions::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_RosSensorOptions_frequency(msg_);
  }

private:
  ::gs_ros_interfaces::msg::RosSensorOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::RosSensorOptions>()
{
  return gs_ros_interfaces::msg::builder::Init_RosSensorOptions_frame_id();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__BUILDER_HPP_
