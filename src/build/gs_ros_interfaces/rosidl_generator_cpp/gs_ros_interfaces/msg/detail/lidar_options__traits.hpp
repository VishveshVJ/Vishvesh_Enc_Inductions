// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/LidarOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/lidar_options__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'options'
#include "gs_ros_interfaces/msg/detail/general_sensor_options__traits.hpp"
// Member 'ros_options'
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__traits.hpp"
// Member 'rigid_options'
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__traits.hpp"
// Member 'grid_pattern_options'
#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__traits.hpp"
// Member 'spherical_pattern_options'
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__traits.hpp"
// Member 'depth_camera_pattern_options'
#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const LidarOptions & msg,
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

  // member: grid_pattern_options
  {
    out << "grid_pattern_options: ";
    to_flow_style_yaml(msg.grid_pattern_options, out);
    out << ", ";
  }

  // member: spherical_pattern_options
  {
    out << "spherical_pattern_options: ";
    to_flow_style_yaml(msg.spherical_pattern_options, out);
    out << ", ";
  }

  // member: depth_camera_pattern_options
  {
    out << "depth_camera_pattern_options: ";
    to_flow_style_yaml(msg.depth_camera_pattern_options, out);
    out << ", ";
  }

  // member: min_range
  {
    out << "min_range: ";
    rosidl_generator_traits::value_to_yaml(msg.min_range, out);
    out << ", ";
  }

  // member: max_range
  {
    out << "max_range: ";
    rosidl_generator_traits::value_to_yaml(msg.max_range, out);
    out << ", ";
  }

  // member: no_hit_value
  {
    out << "no_hit_value: ";
    rosidl_generator_traits::value_to_yaml(msg.no_hit_value, out);
    out << ", ";
  }

  // member: return_points_in_world_frame
  {
    out << "return_points_in_world_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.return_points_in_world_frame, out);
    out << ", ";
  }

  // member: draw_point_radius
  {
    out << "draw_point_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.draw_point_radius, out);
    out << ", ";
  }

  // member: ray_start_color
  {
    if (msg.ray_start_color.size() == 0) {
      out << "ray_start_color: []";
    } else {
      out << "ray_start_color: [";
      size_t pending_items = msg.ray_start_color.size();
      for (auto item : msg.ray_start_color) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ray_hit_color
  {
    if (msg.ray_hit_color.size() == 0) {
      out << "ray_hit_color: []";
    } else {
      out << "ray_hit_color: [";
      size_t pending_items = msg.ray_hit_color.size();
      for (auto item : msg.ray_hit_color) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const LidarOptions & msg,
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

  // member: grid_pattern_options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "grid_pattern_options:\n";
    to_block_style_yaml(msg.grid_pattern_options, out, indentation + 2);
  }

  // member: spherical_pattern_options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spherical_pattern_options:\n";
    to_block_style_yaml(msg.spherical_pattern_options, out, indentation + 2);
  }

  // member: depth_camera_pattern_options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth_camera_pattern_options:\n";
    to_block_style_yaml(msg.depth_camera_pattern_options, out, indentation + 2);
  }

  // member: min_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_range: ";
    rosidl_generator_traits::value_to_yaml(msg.min_range, out);
    out << "\n";
  }

  // member: max_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_range: ";
    rosidl_generator_traits::value_to_yaml(msg.max_range, out);
    out << "\n";
  }

  // member: no_hit_value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "no_hit_value: ";
    rosidl_generator_traits::value_to_yaml(msg.no_hit_value, out);
    out << "\n";
  }

  // member: return_points_in_world_frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "return_points_in_world_frame: ";
    rosidl_generator_traits::value_to_yaml(msg.return_points_in_world_frame, out);
    out << "\n";
  }

  // member: draw_point_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "draw_point_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.draw_point_radius, out);
    out << "\n";
  }

  // member: ray_start_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ray_start_color.size() == 0) {
      out << "ray_start_color: []\n";
    } else {
      out << "ray_start_color:\n";
      for (auto item : msg.ray_start_color) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ray_hit_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ray_hit_color.size() == 0) {
      out << "ray_hit_color: []\n";
    } else {
      out << "ray_hit_color:\n";
      for (auto item : msg.ray_hit_color) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const LidarOptions & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::LidarOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::LidarOptions & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::LidarOptions>()
{
  return "gs_ros_interfaces::msg::LidarOptions";
}

template<>
inline const char * name<gs_ros_interfaces::msg::LidarOptions>()
{
  return "gs_ros_interfaces/msg/LidarOptions";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::LidarOptions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::LidarOptions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::LidarOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__TRAITS_HPP_
