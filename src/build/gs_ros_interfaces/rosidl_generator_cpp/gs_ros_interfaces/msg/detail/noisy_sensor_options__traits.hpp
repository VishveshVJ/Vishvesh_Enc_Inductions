// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/NoisySensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const NoisySensorOptions & msg,
  std::ostream & out)
{
  out << "{";
  // member: resolution
  {
    if (msg.resolution.size() == 0) {
      out << "resolution: []";
    } else {
      out << "resolution: [";
      size_t pending_items = msg.resolution.size();
      for (auto item : msg.resolution) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bias
  {
    if (msg.bias.size() == 0) {
      out << "bias: []";
    } else {
      out << "bias: [";
      size_t pending_items = msg.bias.size();
      for (auto item : msg.bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: noise
  {
    if (msg.noise.size() == 0) {
      out << "noise: []";
    } else {
      out << "noise: [";
      size_t pending_items = msg.noise.size();
      for (auto item : msg.noise) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: random_walk
  {
    if (msg.random_walk.size() == 0) {
      out << "random_walk: []";
    } else {
      out << "random_walk: [";
      size_t pending_items = msg.random_walk.size();
      for (auto item : msg.random_walk) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: jitter
  {
    out << "jitter: ";
    rosidl_generator_traits::value_to_yaml(msg.jitter, out);
    out << ", ";
  }

  // member: interpolate
  {
    out << "interpolate: ";
    rosidl_generator_traits::value_to_yaml(msg.interpolate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NoisySensorOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.resolution.size() == 0) {
      out << "resolution: []\n";
    } else {
      out << "resolution:\n";
      for (auto item : msg.resolution) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias.size() == 0) {
      out << "bias: []\n";
    } else {
      out << "bias:\n";
      for (auto item : msg.bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: noise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.noise.size() == 0) {
      out << "noise: []\n";
    } else {
      out << "noise:\n";
      for (auto item : msg.noise) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: random_walk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.random_walk.size() == 0) {
      out << "random_walk: []\n";
    } else {
      out << "random_walk:\n";
      for (auto item : msg.random_walk) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: jitter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jitter: ";
    rosidl_generator_traits::value_to_yaml(msg.jitter, out);
    out << "\n";
  }

  // member: interpolate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interpolate: ";
    rosidl_generator_traits::value_to_yaml(msg.interpolate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NoisySensorOptions & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::NoisySensorOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::NoisySensorOptions & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::NoisySensorOptions>()
{
  return "gs_ros_interfaces::msg::NoisySensorOptions";
}

template<>
inline const char * name<gs_ros_interfaces::msg::NoisySensorOptions>()
{
  return "gs_ros_interfaces/msg/NoisySensorOptions";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::NoisySensorOptions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::NoisySensorOptions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::NoisySensorOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__NOISY_SENSOR_OPTIONS__TRAITS_HPP_
