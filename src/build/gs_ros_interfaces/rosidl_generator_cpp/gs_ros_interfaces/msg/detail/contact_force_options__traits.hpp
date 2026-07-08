// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/ContactForceOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/contact_force_options__struct.hpp"
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
  const ContactForceOptions & msg,
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

  // member: min_force
  {
    if (msg.min_force.size() == 0) {
      out << "min_force: []";
    } else {
      out << "min_force: [";
      size_t pending_items = msg.min_force.size();
      for (auto item : msg.min_force) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_force
  {
    if (msg.max_force.size() == 0) {
      out << "max_force: []";
    } else {
      out << "max_force: [";
      size_t pending_items = msg.max_force.size();
      for (auto item : msg.max_force) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: debug_color
  {
    if (msg.debug_color.size() == 0) {
      out << "debug_color: []";
    } else {
      out << "debug_color: [";
      size_t pending_items = msg.debug_color.size();
      for (auto item : msg.debug_color) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: debug_scale
  {
    out << "debug_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_scale, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ContactForceOptions & msg,
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

  // member: min_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.min_force.size() == 0) {
      out << "min_force: []\n";
    } else {
      out << "min_force:\n";
      for (auto item : msg.min_force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_force
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.max_force.size() == 0) {
      out << "max_force: []\n";
    } else {
      out << "max_force:\n";
      for (auto item : msg.max_force) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: debug_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.debug_color.size() == 0) {
      out << "debug_color: []\n";
    } else {
      out << "debug_color:\n";
      for (auto item : msg.debug_color) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: debug_scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "debug_scale: ";
    rosidl_generator_traits::value_to_yaml(msg.debug_scale, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ContactForceOptions & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::ContactForceOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::ContactForceOptions & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::ContactForceOptions>()
{
  return "gs_ros_interfaces::msg::ContactForceOptions";
}

template<>
inline const char * name<gs_ros_interfaces::msg::ContactForceOptions>()
{
  return "gs_ros_interfaces/msg/ContactForceOptions";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::ContactForceOptions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::ContactForceOptions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::ContactForceOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CONTACT_FORCE_OPTIONS__TRAITS_HPP_
