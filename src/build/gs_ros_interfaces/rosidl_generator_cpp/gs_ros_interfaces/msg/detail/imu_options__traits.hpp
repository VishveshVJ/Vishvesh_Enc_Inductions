// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/ImuOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/imu_options__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'options'
#include "gs_ros_interfaces/msg/detail/general_sensor_options__traits.hpp"
// Member 'ros_options'
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__traits.hpp"
// Member 'rigid_options'
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__traits.hpp"
// Member 'noisy_options'
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ImuOptions & msg,
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

  // member: noisy_options
  {
    out << "noisy_options: ";
    to_flow_style_yaml(msg.noisy_options, out);
    out << ", ";
  }

  // member: acc_resolution
  {
    out << "acc_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_resolution, out);
    out << ", ";
  }

  // member: acc_cross_axis_coupling
  {
    if (msg.acc_cross_axis_coupling.size() == 0) {
      out << "acc_cross_axis_coupling: []";
    } else {
      out << "acc_cross_axis_coupling: [";
      size_t pending_items = msg.acc_cross_axis_coupling.size();
      for (auto item : msg.acc_cross_axis_coupling) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acc_bias
  {
    if (msg.acc_bias.size() == 0) {
      out << "acc_bias: []";
    } else {
      out << "acc_bias: [";
      size_t pending_items = msg.acc_bias.size();
      for (auto item : msg.acc_bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acc_noise
  {
    if (msg.acc_noise.size() == 0) {
      out << "acc_noise: []";
    } else {
      out << "acc_noise: [";
      size_t pending_items = msg.acc_noise.size();
      for (auto item : msg.acc_noise) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: acc_random_walk
  {
    if (msg.acc_random_walk.size() == 0) {
      out << "acc_random_walk: []";
    } else {
      out << "acc_random_walk: [";
      size_t pending_items = msg.acc_random_walk.size();
      for (auto item : msg.acc_random_walk) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_resolution
  {
    out << "gyro_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_resolution, out);
    out << ", ";
  }

  // member: gyro_cross_axis_coupling
  {
    if (msg.gyro_cross_axis_coupling.size() == 0) {
      out << "gyro_cross_axis_coupling: []";
    } else {
      out << "gyro_cross_axis_coupling: [";
      size_t pending_items = msg.gyro_cross_axis_coupling.size();
      for (auto item : msg.gyro_cross_axis_coupling) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_bias
  {
    if (msg.gyro_bias.size() == 0) {
      out << "gyro_bias: []";
    } else {
      out << "gyro_bias: [";
      size_t pending_items = msg.gyro_bias.size();
      for (auto item : msg.gyro_bias) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_noise
  {
    if (msg.gyro_noise.size() == 0) {
      out << "gyro_noise: []";
    } else {
      out << "gyro_noise: [";
      size_t pending_items = msg.gyro_noise.size();
      for (auto item : msg.gyro_noise) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gyro_random_walk
  {
    if (msg.gyro_random_walk.size() == 0) {
      out << "gyro_random_walk: []";
    } else {
      out << "gyro_random_walk: [";
      size_t pending_items = msg.gyro_random_walk.size();
      for (auto item : msg.gyro_random_walk) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: debug_acc_color
  {
    if (msg.debug_acc_color.size() == 0) {
      out << "debug_acc_color: []";
    } else {
      out << "debug_acc_color: [";
      size_t pending_items = msg.debug_acc_color.size();
      for (auto item : msg.debug_acc_color) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: debug_acc_scale
  {
    out << "debug_acc_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_acc_scale, out);
    out << ", ";
  }

  // member: debug_gyro_color
  {
    if (msg.debug_gyro_color.size() == 0) {
      out << "debug_gyro_color: []";
    } else {
      out << "debug_gyro_color: [";
      size_t pending_items = msg.debug_gyro_color.size();
      for (auto item : msg.debug_gyro_color) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: debug_gyro_scale
  {
    out << "debug_gyro_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_gyro_scale, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ImuOptions & msg,
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

  // member: noisy_options
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noisy_options:\n";
    to_block_style_yaml(msg.noisy_options, out, indentation + 2);
  }

  // member: acc_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acc_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.acc_resolution, out);
    out << "\n";
  }

  // member: acc_cross_axis_coupling
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_cross_axis_coupling.size() == 0) {
      out << "acc_cross_axis_coupling: []\n";
    } else {
      out << "acc_cross_axis_coupling:\n";
      for (auto item : msg.acc_cross_axis_coupling) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_bias.size() == 0) {
      out << "acc_bias: []\n";
    } else {
      out << "acc_bias:\n";
      for (auto item : msg.acc_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc_noise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_noise.size() == 0) {
      out << "acc_noise: []\n";
    } else {
      out << "acc_noise:\n";
      for (auto item : msg.acc_noise) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: acc_random_walk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.acc_random_walk.size() == 0) {
      out << "acc_random_walk: []\n";
    } else {
      out << "acc_random_walk:\n";
      for (auto item : msg.acc_random_walk) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gyro_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.gyro_resolution, out);
    out << "\n";
  }

  // member: gyro_cross_axis_coupling
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_cross_axis_coupling.size() == 0) {
      out << "gyro_cross_axis_coupling: []\n";
    } else {
      out << "gyro_cross_axis_coupling:\n";
      for (auto item : msg.gyro_cross_axis_coupling) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_bias
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_bias.size() == 0) {
      out << "gyro_bias: []\n";
    } else {
      out << "gyro_bias:\n";
      for (auto item : msg.gyro_bias) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_noise
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_noise.size() == 0) {
      out << "gyro_noise: []\n";
    } else {
      out << "gyro_noise:\n";
      for (auto item : msg.gyro_noise) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gyro_random_walk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gyro_random_walk.size() == 0) {
      out << "gyro_random_walk: []\n";
    } else {
      out << "gyro_random_walk:\n";
      for (auto item : msg.gyro_random_walk) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: debug_acc_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.debug_acc_color.size() == 0) {
      out << "debug_acc_color: []\n";
    } else {
      out << "debug_acc_color:\n";
      for (auto item : msg.debug_acc_color) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: debug_acc_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_acc_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_acc_scale, out);
    out << "\n";
  }

  // member: debug_gyro_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.debug_gyro_color.size() == 0) {
      out << "debug_gyro_color: []\n";
    } else {
      out << "debug_gyro_color:\n";
      for (auto item : msg.debug_gyro_color) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: debug_gyro_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_gyro_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_gyro_scale, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ImuOptions & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::ImuOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::ImuOptions & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::ImuOptions>()
{
  return "gs_ros_interfaces::msg::ImuOptions";
}

template<>
inline const char * name<gs_ros_interfaces::msg::ImuOptions>()
{
  return "gs_ros_interfaces/msg/ImuOptions";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::ImuOptions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::ImuOptions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::ImuOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__TRAITS_HPP_
