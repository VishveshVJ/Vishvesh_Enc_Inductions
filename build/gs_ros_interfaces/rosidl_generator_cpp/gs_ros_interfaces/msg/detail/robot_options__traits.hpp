// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:msg/RobotOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__TRAITS_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/msg/detail/robot_options__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'joint_properties'
#include "gs_ros_interfaces/msg/detail/joint_property__traits.hpp"

namespace gs_ros_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotOptions & msg,
  std::ostream & out)
{
  out << "{";
  // member: joint_states_topic
  {
    out << "joint_states_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_states_topic, out);
    out << ", ";
  }

  // member: joint_states_topic_frequency
  {
    out << "joint_states_topic_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_states_topic_frequency, out);
    out << ", ";
  }

  // member: joint_commands_topic
  {
    out << "joint_commands_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_commands_topic, out);
    out << ", ";
  }

  // member: joint_commands_topic_frequency
  {
    out << "joint_commands_topic_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_commands_topic_frequency, out);
    out << ", ";
  }

  // member: joints_control_topic
  {
    out << "joints_control_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.joints_control_topic, out);
    out << ", ";
  }

  // member: joints_control_topic_frequency
  {
    out << "joints_control_topic_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.joints_control_topic_frequency, out);
    out << ", ";
  }

  // member: joint_properties
  {
    if (msg.joint_properties.size() == 0) {
      out << "joint_properties: []";
    } else {
      out << "joint_properties: [";
      size_t pending_items = msg.joint_properties.size();
      for (auto item : msg.joint_properties) {
        to_flow_style_yaml(item, out);
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
  const RobotOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joint_states_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_states_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_states_topic, out);
    out << "\n";
  }

  // member: joint_states_topic_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_states_topic_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_states_topic_frequency, out);
    out << "\n";
  }

  // member: joint_commands_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_commands_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_commands_topic, out);
    out << "\n";
  }

  // member: joint_commands_topic_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joint_commands_topic_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.joint_commands_topic_frequency, out);
    out << "\n";
  }

  // member: joints_control_topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joints_control_topic: ";
    rosidl_generator_traits::value_to_yaml(msg.joints_control_topic, out);
    out << "\n";
  }

  // member: joints_control_topic_frequency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "joints_control_topic_frequency: ";
    rosidl_generator_traits::value_to_yaml(msg.joints_control_topic_frequency, out);
    out << "\n";
  }

  // member: joint_properties
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_properties.size() == 0) {
      out << "joint_properties: []\n";
    } else {
      out << "joint_properties:\n";
      for (auto item : msg.joint_properties) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotOptions & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::msg::RobotOptions & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::msg::RobotOptions & msg)
{
  return gs_ros_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::msg::RobotOptions>()
{
  return "gs_ros_interfaces::msg::RobotOptions";
}

template<>
inline const char * name<gs_ros_interfaces::msg::RobotOptions>()
{
  return "gs_ros_interfaces/msg/RobotOptions";
}

template<>
struct has_fixed_size<gs_ros_interfaces::msg::RobotOptions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::msg::RobotOptions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::msg::RobotOptions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__ROBOT_OPTIONS__TRAITS_HPP_
