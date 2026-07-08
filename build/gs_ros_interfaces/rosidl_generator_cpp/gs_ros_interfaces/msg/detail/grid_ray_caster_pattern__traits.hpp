// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/GridRayCasterPattern.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__GRID_RAY_CASTER_PATTERN__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__GRID_RAY_CASTER_PATTERN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const GridRayCasterPattern & msg,
  std::ostream & out)
{
  out << "{";
  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << ", ";
  }

  // member: size
  {
    if (msg.size.size() == 0) {
      out << "size: []";
    } else {
      out << "size: [";
      size_t pending_items = msg.size.size();
      for (auto item : msg.size) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: direction
  {
    if (msg.direction.size() == 0) {
      out << "direction: []";
    } else {
      out << "direction: [";
      size_t pending_items = msg.direction.size();
      for (auto item : msg.direction) {
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
  const GridRayCasterPattern & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.size.size() == 0) {
      out << "size: []\n";
    } else {
      out << "size:\n";
      for (auto item : msg.size) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.direction.size() == 0) {
      out << "direction: []\n";
    } else {
      out << "direction:\n";
      for (auto item : msg.direction) {
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

inline std::string to_yaml(const GridRayCasterPattern & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::GridRayCasterPattern & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::GridRayCasterPattern & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::GridRayCasterPattern>()
{
  return "gs_ros_interfaces::msg::GridRayCasterPattern";
}

template<>
inline const char * name<gs_ros_interfaces::msg::GridRayCasterPattern>()
{
  return "gs_ros_interfaces/msg/GridRayCasterPattern";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::GridRayCasterPattern>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::GridRayCasterPattern>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::GridRayCasterPattern>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__GRID_RAY_CASTER_PATTERN__TRAITS_HPP_
