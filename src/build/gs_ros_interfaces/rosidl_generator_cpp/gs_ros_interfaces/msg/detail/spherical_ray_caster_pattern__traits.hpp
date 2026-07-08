// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/SphericalRayCasterPattern.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const SphericalRayCasterPattern & msg,
  std::ostream & out)
{
  out << "{";
  // member: fov
  {
    if (msg.fov.size() == 0) {
      out << "fov: []";
    } else {
      out << "fov: [";
      size_t pending_items = msg.fov.size();
      for (auto item : msg.fov) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: n_points
  {
    if (msg.n_points.size() == 0) {
      out << "n_points: []";
    } else {
      out << "n_points: [";
      size_t pending_items = msg.n_points.size();
      for (auto item : msg.n_points) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angular_resolution
  {
    if (msg.angular_resolution.size() == 0) {
      out << "angular_resolution: []";
    } else {
      out << "angular_resolution: [";
      size_t pending_items = msg.angular_resolution.size();
      for (auto item : msg.angular_resolution) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: angles
  {
    if (msg.angles.size() == 0) {
      out << "angles: []";
    } else {
      out << "angles: [";
      size_t pending_items = msg.angles.size();
      for (auto item : msg.angles) {
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
  const SphericalRayCasterPattern & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fov
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.fov.size() == 0) {
      out << "fov: []\n";
    } else {
      out << "fov:\n";
      for (auto item : msg.fov) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: n_points
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.n_points.size() == 0) {
      out << "n_points: []\n";
    } else {
      out << "n_points:\n";
      for (auto item : msg.n_points) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angular_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angular_resolution.size() == 0) {
      out << "angular_resolution: []\n";
    } else {
      out << "angular_resolution:\n";
      for (auto item : msg.angular_resolution) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.angles.size() == 0) {
      out << "angles: []\n";
    } else {
      out << "angles:\n";
      for (auto item : msg.angles) {
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

inline std::string to_yaml(const SphericalRayCasterPattern & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::SphericalRayCasterPattern & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::SphericalRayCasterPattern & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::SphericalRayCasterPattern>()
{
  return "gs_ros_interfaces::msg::SphericalRayCasterPattern";
}

template<>
inline const char * name<gs_ros_interfaces::msg::SphericalRayCasterPattern>()
{
  return "gs_ros_interfaces/msg/SphericalRayCasterPattern";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::SphericalRayCasterPattern>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::SphericalRayCasterPattern>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::SphericalRayCasterPattern>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__TRAITS_HPP_
