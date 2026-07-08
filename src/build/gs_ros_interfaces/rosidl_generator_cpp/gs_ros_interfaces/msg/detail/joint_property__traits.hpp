// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/JointProperty.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/joint_property__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const JointProperty & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: kp
  {
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << ", ";
  }

  // member: kv
  {
    out << "kv: ";
    rosidl_generator_traits::value_to_yaml(msg.kv, out);
    out << ", ";
  }

  // member: stiffness
  {
    out << "stiffness: ";
    rosidl_generator_traits::value_to_yaml(msg.stiffness, out);
    out << ", ";
  }

  // member: armature
  {
    out << "armature: ";
    rosidl_generator_traits::value_to_yaml(msg.armature, out);
    out << ", ";
  }

  // member: damping
  {
    out << "damping: ";
    rosidl_generator_traits::value_to_yaml(msg.damping, out);
    out << ", ";
  }

  // member: force_range
  {
    if (msg.force_range.size() == 0) {
      out << "force_range: []";
    } else {
      out << "force_range: [";
      size_t pending_items = msg.force_range.size();
      for (auto item : msg.force_range) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JointProperty & msg,
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

  // member: kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kp: ";
    rosidl_generator_traits::value_to_yaml(msg.kp, out);
    out << "\n";
  }

  // member: kv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kv: ";
    rosidl_generator_traits::value_to_yaml(msg.kv, out);
    out << "\n";
  }

  // member: stiffness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "stiffness: ";
    rosidl_generator_traits::value_to_yaml(msg.stiffness, out);
    out << "\n";
  }

  // member: armature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "armature: ";
    rosidl_generator_traits::value_to_yaml(msg.armature, out);
    out << "\n";
  }

  // member: damping
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "damping: ";
    rosidl_generator_traits::value_to_yaml(msg.damping, out);
    out << "\n";
  }

  // member: force_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.force_range.size() == 0) {
      out << "force_range: []\n";
    } else {
      out << "force_range:\n";
      for (auto item : msg.force_range) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JointProperty & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::JointProperty & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::JointProperty & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::JointProperty>()
{
  return "gs_ros_interfaces::msg::JointProperty";
}

template<>
inline const char * name<gs_ros_interfaces::msg::JointProperty>()
{
  return "gs_ros_interfaces/msg/JointProperty";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::JointProperty>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::JointProperty>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::JointProperty>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__JOINT_PROPERTY__TRAITS_HPP_
