// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/RigidSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RigidSensorOptions & msg,
  std::ostream & out)
{
  out << "{";
  // member: link
  {
    out << "link: ";
    rosidl_generator_traits::value_to_yaml(msg.link, out);
    out << ", ";
  }

  // member: pos_offset
  {
    if (msg.pos_offset.size() == 0) {
      out << "pos_offset: []";
    } else {
      out << "pos_offset: [";
      size_t pending_items = msg.pos_offset.size();
      for (auto item : msg.pos_offset) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: euler_offset
  {
    if (msg.euler_offset.size() == 0) {
      out << "euler_offset: []";
    } else {
      out << "euler_offset: [";
      size_t pending_items = msg.euler_offset.size();
      for (auto item : msg.euler_offset) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RigidSensorOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: link
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link: ";
    rosidl_generator_traits::value_to_yaml(msg.link, out);
    out << "\n";
  }

  // member: pos_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_offset.size() == 0) {
      out << "pos_offset: []\n";
    } else {
      out << "pos_offset:\n";
      for (auto item : msg.pos_offset) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: euler_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.euler_offset.size() == 0) {
      out << "euler_offset: []\n";
    } else {
      out << "euler_offset:\n";
      for (auto item : msg.euler_offset) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RigidSensorOptions & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::RigidSensorOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::RigidSensorOptions & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::RigidSensorOptions>()
{
  return "gs_ros_interfaces::msg::RigidSensorOptions";
}

template<>
inline const char * name<gs_ros_interfaces::msg::RigidSensorOptions>()
{
  return "gs_ros_interfaces/msg/RigidSensorOptions";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::RigidSensorOptions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::RigidSensorOptions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::RigidSensorOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__TRAITS_HPP_
