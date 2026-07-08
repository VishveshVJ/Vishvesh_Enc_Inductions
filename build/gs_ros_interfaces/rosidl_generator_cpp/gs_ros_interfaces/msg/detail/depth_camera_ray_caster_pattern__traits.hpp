// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/DepthCameraRayCasterPattern.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const DepthCameraRayCasterPattern & msg,
  std::ostream & out)
{
  out << "{";
  // member: res
  {
    if (msg.res.size() == 0) {
      out << "res: []";
    } else {
      out << "res: [";
      size_t pending_items = msg.res.size();
      for (auto item : msg.res) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fx
  {
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << ", ";
  }

  // member: fy
  {
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << ", ";
  }

  // member: cx
  {
    out << "cx: ";
    rosidl_generator_traits::value_to_yaml(msg.cx, out);
    out << ", ";
  }

  // member: cy
  {
    out << "cy: ";
    rosidl_generator_traits::value_to_yaml(msg.cy, out);
    out << ", ";
  }

  // member: fov_horizontal
  {
    out << "fov_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.fov_horizontal, out);
    out << ", ";
  }

  // member: fov_vertical
  {
    out << "fov_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.fov_vertical, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DepthCameraRayCasterPattern & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: res
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.res.size() == 0) {
      out << "res: []\n";
    } else {
      out << "res:\n";
      for (auto item : msg.res) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fx: ";
    rosidl_generator_traits::value_to_yaml(msg.fx, out);
    out << "\n";
  }

  // member: fy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fy: ";
    rosidl_generator_traits::value_to_yaml(msg.fy, out);
    out << "\n";
  }

  // member: cx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cx: ";
    rosidl_generator_traits::value_to_yaml(msg.cx, out);
    out << "\n";
  }

  // member: cy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cy: ";
    rosidl_generator_traits::value_to_yaml(msg.cy, out);
    out << "\n";
  }

  // member: fov_horizontal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fov_horizontal: ";
    rosidl_generator_traits::value_to_yaml(msg.fov_horizontal, out);
    out << "\n";
  }

  // member: fov_vertical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fov_vertical: ";
    rosidl_generator_traits::value_to_yaml(msg.fov_vertical, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DepthCameraRayCasterPattern & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::DepthCameraRayCasterPattern & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::DepthCameraRayCasterPattern & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::DepthCameraRayCasterPattern>()
{
  return "gs_ros_interfaces::msg::DepthCameraRayCasterPattern";
}

template<>
inline const char * name<gs_ros_interfaces::msg::DepthCameraRayCasterPattern>()
{
  return "gs_ros_interfaces/msg/DepthCameraRayCasterPattern";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::DepthCameraRayCasterPattern>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::DepthCameraRayCasterPattern>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::DepthCameraRayCasterPattern>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__TRAITS_HPP_
