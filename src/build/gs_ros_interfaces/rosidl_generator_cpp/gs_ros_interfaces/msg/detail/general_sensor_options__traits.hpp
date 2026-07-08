// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/GeneralSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/general_sensor_options__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeneralSensorOptions & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: sensor_type
  {
    out << "sensor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_type, out);
    out << ", ";
  }

  // member: delay
  {
    out << "delay: ";
    rosidl_generator_traits::value_to_yaml(msg.delay, out);
    out << ", ";
  }

  // member: update_ground_truth_only
  {
    out << "update_ground_truth_only: ";
    rosidl_generator_traits::value_to_yaml(msg.update_ground_truth_only, out);
    out << ", ";
  }

  // member: draw_debug
  {
    out << "draw_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.draw_debug, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GeneralSensorOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: sensor_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_type: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_type, out);
    out << "\n";
  }

  // member: delay
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delay: ";
    rosidl_generator_traits::value_to_yaml(msg.delay, out);
    out << "\n";
  }

  // member: update_ground_truth_only
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_ground_truth_only: ";
    rosidl_generator_traits::value_to_yaml(msg.update_ground_truth_only, out);
    out << "\n";
  }

  // member: draw_debug
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "draw_debug: ";
    rosidl_generator_traits::value_to_yaml(msg.draw_debug, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeneralSensorOptions & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::GeneralSensorOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::GeneralSensorOptions & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::GeneralSensorOptions>()
{
  return "gs_ros_interfaces::msg::GeneralSensorOptions";
}

template<>
inline const char * name<gs_ros_interfaces::msg::GeneralSensorOptions>()
{
  return "gs_ros_interfaces/msg/GeneralSensorOptions";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::GeneralSensorOptions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::GeneralSensorOptions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::GeneralSensorOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__GENERAL_SENSOR_OPTIONS__TRAITS_HPP_
