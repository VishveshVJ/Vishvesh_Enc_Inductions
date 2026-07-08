// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/CameraOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/camera_options__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'options'
#include "gs_ros_interfaces/msg/detail/general_sensor_options__traits.hpp"
// Member 'ros_options'
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__traits.hpp"
// Member 'rigid_options'
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const CameraOptions & msg,
  std::ostream & out)
{
  out << "{";
  // member: options
  {
    out << "options: ";
    to_flow_style_yaml(msg.options, out);
    out << ", ";
  }

  // member: ros_options
  {
    out << "ros_options: ";
    to_flow_style_yaml(msg.ros_options, out);
    out << ", ";
  }

  // member: rigid_options
  {
    out << "rigid_options: ";
    to_flow_style_yaml(msg.rigid_options, out);
    out << ", ";
  }

  // member: camera_types
  {
    if (msg.camera_types.size() == 0) {
      out << "camera_types: []";
    } else {
      out << "camera_types: [";
      size_t pending_items = msg.camera_types.size();
      for (auto item : msg.camera_types) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

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

  // member: fov
  {
    out << "fov: ";
    rosidl_generator_traits::value_to_yaml(msg.fov, out);
    out << ", ";
  }

  // member: near
  {
    out << "near: ";
    rosidl_generator_traits::value_to_yaml(msg.near, out);
    out << ", ";
  }

  // member: far
  {
    out << "far: ";
    rosidl_generator_traits::value_to_yaml(msg.far, out);
    out << ", ";
  }

  // member: aperture
  {
    out << "aperture: ";
    rosidl_generator_traits::value_to_yaml(msg.aperture, out);
    out << ", ";
  }

  // member: denoise
  {
    out << "denoise: ";
    rosidl_generator_traits::value_to_yaml(msg.denoise, out);
    out << ", ";
  }

  // member: spp
  {
    out << "spp: ";
    rosidl_generator_traits::value_to_yaml(msg.spp, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: focus_dist
  {
    out << "focus_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_dist, out);
    out << ", ";
  }

  // member: gui
  {
    out << "gui: ";
    rosidl_generator_traits::value_to_yaml(msg.gui, out);
    out << ", ";
  }

  // member: add_noise
  {
    out << "add_noise: ";
    rosidl_generator_traits::value_to_yaml(msg.add_noise, out);
    out << ", ";
  }

  // member: noise_mean
  {
    out << "noise_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_mean, out);
    out << ", ";
  }

  // member: noise_std
  {
    out << "noise_std: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_std, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CameraOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "options:\n";
    to_block_style_yaml(msg.options, out, indentation + 2);
  }

  // member: ros_options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ros_options:\n";
    to_block_style_yaml(msg.ros_options, out, indentation + 2);
  }

  // member: rigid_options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rigid_options:\n";
    to_block_style_yaml(msg.rigid_options, out, indentation + 2);
  }

  // member: camera_types
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.camera_types.size() == 0) {
      out << "camera_types: []\n";
    } else {
      out << "camera_types:\n";
      for (auto item : msg.camera_types) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

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

  // member: fov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fov: ";
    rosidl_generator_traits::value_to_yaml(msg.fov, out);
    out << "\n";
  }

  // member: near
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "near: ";
    rosidl_generator_traits::value_to_yaml(msg.near, out);
    out << "\n";
  }

  // member: far
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "far: ";
    rosidl_generator_traits::value_to_yaml(msg.far, out);
    out << "\n";
  }

  // member: aperture
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aperture: ";
    rosidl_generator_traits::value_to_yaml(msg.aperture, out);
    out << "\n";
  }

  // member: denoise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "denoise: ";
    rosidl_generator_traits::value_to_yaml(msg.denoise, out);
    out << "\n";
  }

  // member: spp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spp: ";
    rosidl_generator_traits::value_to_yaml(msg.spp, out);
    out << "\n";
  }

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: focus_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "focus_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.focus_dist, out);
    out << "\n";
  }

  // member: gui
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gui: ";
    rosidl_generator_traits::value_to_yaml(msg.gui, out);
    out << "\n";
  }

  // member: add_noise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "add_noise: ";
    rosidl_generator_traits::value_to_yaml(msg.add_noise, out);
    out << "\n";
  }

  // member: noise_mean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noise_mean: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_mean, out);
    out << "\n";
  }

  // member: noise_std
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noise_std: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_std, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CameraOptions & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::CameraOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::CameraOptions & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::CameraOptions>()
{
  return "gs_ros_interfaces::msg::CameraOptions";
}

template<>
inline const char * name<gs_ros_interfaces::msg::CameraOptions>()
{
  return "gs_ros_interfaces/msg/CameraOptions";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::CameraOptions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::CameraOptions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::CameraOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__TRAITS_HPP_
