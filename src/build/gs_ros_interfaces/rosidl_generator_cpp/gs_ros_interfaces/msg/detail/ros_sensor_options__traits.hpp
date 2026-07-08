// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/RosSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/ros_sensor_options__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RosSensorOptions & msg,
  std::ostream & out)
{
  out << "{";
  // member: frame_id
  {
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << ", ";
  }

  // member: frequency
  {
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << ", ";
  }

  // member: topic
  {
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << ", ";
  }

  // member: qos_history
  {
    out << "qos_history: ";
    rosidl_generator_traits::value_to_yaml(msg.qos_history, out);
    out << ", ";
  }

  // member: qos_depth
  {
    out << "qos_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.qos_depth, out);
    out << ", ";
  }

  // member: qos_reliability
  {
    out << "qos_reliability: ";
    rosidl_generator_traits::value_to_yaml(msg.qos_reliability, out);
    out << ", ";
  }

  // member: qos_durability
  {
    out << "qos_durability: ";
    rosidl_generator_traits::value_to_yaml(msg.qos_durability, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RosSensorOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: frame_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_id: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_id, out);
    out << "\n";
  }

  // member: frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.frequency, out);
    out << "\n";
  }

  // member: topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << "\n";
  }

  // member: qos_history
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qos_history: ";
    rosidl_generator_traits::value_to_yaml(msg.qos_history, out);
    out << "\n";
  }

  // member: qos_depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qos_depth: ";
    rosidl_generator_traits::value_to_yaml(msg.qos_depth, out);
    out << "\n";
  }

  // member: qos_reliability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qos_reliability: ";
    rosidl_generator_traits::value_to_yaml(msg.qos_reliability, out);
    out << "\n";
  }

  // member: qos_durability
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "qos_durability: ";
    rosidl_generator_traits::value_to_yaml(msg.qos_durability, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RosSensorOptions & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace gs_ros_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gs_ros_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gs_ros_interfaces::msg::RosSensorOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::RosSensorOptions & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::RosSensorOptions>()
{
  return "gs_ros_interfaces::msg::RosSensorOptions";
}

template<>
inline const char * name<gs_ros_interfaces::msg::RosSensorOptions>()
{
  return "gs_ros_interfaces/msg/RosSensorOptions";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::RosSensorOptions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::RosSensorOptions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::RosSensorOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__ROS_SENSOR_OPTIONS__TRAITS_HPP_
