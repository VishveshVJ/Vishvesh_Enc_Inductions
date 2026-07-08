// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/GeneralSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/general_sensor_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_GeneralSensorOptions_draw_debug
{
public:
  explicit Init_GeneralSensorOptions_draw_debug(::gs_ros_interfaces::msg::GeneralSensorOptions & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::GeneralSensorOptions draw_debug(::gs_ros_interfaces::msg::GeneralSensorOptions::_draw_debug_type arg)
  {
    msg_.draw_debug = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::GeneralSensorOptions msg_;
};

class Init_GeneralSensorOptions_update_ground_truth_only
{
public:
  explicit Init_GeneralSensorOptions_update_ground_truth_only(::gs_ros_interfaces::msg::GeneralSensorOptions & msg)
  : msg_(msg)
  {}
  Init_GeneralSensorOptions_draw_debug update_ground_truth_only(::gs_ros_interfaces::msg::GeneralSensorOptions::_update_ground_truth_only_type arg)
  {
    msg_.update_ground_truth_only = std::move(arg);
    return Init_GeneralSensorOptions_draw_debug(msg_);
  }

private:
  ::gs_ros_interfaces::msg::GeneralSensorOptions msg_;
};

class Init_GeneralSensorOptions_delay
{
public:
  explicit Init_GeneralSensorOptions_delay(::gs_ros_interfaces::msg::GeneralSensorOptions & msg)
  : msg_(msg)
  {}
  Init_GeneralSensorOptions_update_ground_truth_only delay(::gs_ros_interfaces::msg::GeneralSensorOptions::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return Init_GeneralSensorOptions_update_ground_truth_only(msg_);
  }

private:
  ::gs_ros_interfaces::msg::GeneralSensorOptions msg_;
};

class Init_GeneralSensorOptions_sensor_type
{
public:
  explicit Init_GeneralSensorOptions_sensor_type(::gs_ros_interfaces::msg::GeneralSensorOptions & msg)
  : msg_(msg)
  {}
  Init_GeneralSensorOptions_delay sensor_type(::gs_ros_interfaces::msg::GeneralSensorOptions::_sensor_type_type arg)
  {
    msg_.sensor_type = std::move(arg);
    return Init_GeneralSensorOptions_delay(msg_);
  }

private:
  ::gs_ros_interfaces::msg::GeneralSensorOptions msg_;
};

class Init_GeneralSensorOptions_name
{
public:
  Init_GeneralSensorOptions_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeneralSensorOptions_sensor_type name(::gs_ros_interfaces::msg::GeneralSensorOptions::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GeneralSensorOptions_sensor_type(msg_);
  }

private:
  ::gs_ros_interfaces::msg::GeneralSensorOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::GeneralSensorOptions>()
{
  return gs_ros_interfaces::msg::builder::Init_GeneralSensorOptions_name();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__BUILDER_HPP_
