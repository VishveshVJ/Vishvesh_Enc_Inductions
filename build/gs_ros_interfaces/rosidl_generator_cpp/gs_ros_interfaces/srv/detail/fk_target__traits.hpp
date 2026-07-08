// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:srv/FKTarget.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__FK_TARGET__TRAITS_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__FK_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/srv/detail/fk_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FKTarget_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: qpos
  {
    if (msg.qpos.size() == 0) {
      out << "qpos: []";
    } else {
      out << "qpos: [";
      size_t pending_items = msg.qpos.size();
      for (auto item : msg.qpos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dof_names
  {
    if (msg.dof_names.size() == 0) {
      out << "dof_names: []";
    } else {
      out << "dof_names: [";
      size_t pending_items = msg.dof_names.size();
      for (auto item : msg.dof_names) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_names
  {
    if (msg.link_names.size() == 0) {
      out << "link_names: []";
    } else {
      out << "link_names: [";
      size_t pending_items = msg.link_names.size();
      for (auto item : msg.link_names) {
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
  const FKTarget_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: qpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.qpos.size() == 0) {
      out << "qpos: []\n";
    } else {
      out << "qpos:\n";
      for (auto item : msg.qpos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dof_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dof_names.size() == 0) {
      out << "dof_names: []\n";
    } else {
      out << "dof_names:\n";
      for (auto item : msg.dof_names) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_names
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_names.size() == 0) {
      out << "link_names: []\n";
    } else {
      out << "link_names:\n";
      for (auto item : msg.link_names) {
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

inline std::string to_yaml(const FKTarget_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gs_ros_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gs_ros_interfaces::srv::FKTarget_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::FKTarget_Request & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::FKTarget_Request>()
{
  return "gs_ros_interfaces::srv::FKTarget_Request";
}

template<>
inline const char * name<gs_ros_interfaces::srv::FKTarget_Request>()
{
  return "gs_ros_interfaces/srv/FKTarget_Request";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::FKTarget_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::FKTarget_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::FKTarget_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'link_pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'link_quat'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const FKTarget_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: link_pos
  {
    if (msg.link_pos.size() == 0) {
      out << "link_pos: []";
    } else {
      out << "link_pos: [";
      size_t pending_items = msg.link_pos.size();
      for (auto item : msg.link_pos) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_quat
  {
    if (msg.link_quat.size() == 0) {
      out << "link_quat: []";
    } else {
      out << "link_quat: [";
      size_t pending_items = msg.link_quat.size();
      for (auto item : msg.link_quat) {
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
  const FKTarget_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }

  // member: link_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_pos.size() == 0) {
      out << "link_pos: []\n";
    } else {
      out << "link_pos:\n";
      for (auto item : msg.link_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: link_quat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.link_quat.size() == 0) {
      out << "link_quat: []\n";
    } else {
      out << "link_quat:\n";
      for (auto item : msg.link_quat) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FKTarget_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace gs_ros_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use gs_ros_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gs_ros_interfaces::srv::FKTarget_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::FKTarget_Response & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::FKTarget_Response>()
{
  return "gs_ros_interfaces::srv::FKTarget_Response";
}

template<>
inline const char * name<gs_ros_interfaces::srv::FKTarget_Response>()
{
  return "gs_ros_interfaces/srv/FKTarget_Response";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::FKTarget_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::FKTarget_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::FKTarget_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gs_ros_interfaces::srv::FKTarget>()
{
  return "gs_ros_interfaces::srv::FKTarget";
}

template<>
inline const char * name<gs_ros_interfaces::srv::FKTarget>()
{
  return "gs_ros_interfaces/srv/FKTarget";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::FKTarget>
  : std::integral_constant<
    bool,
    has_fixed_size<gs_ros_interfaces::srv::FKTarget_Request>::value &&
    has_fixed_size<gs_ros_interfaces::srv::FKTarget_Response>::value
  >
{
};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::FKTarget>
  : std::integral_constant<
    bool,
    has_bounded_size<gs_ros_interfaces::srv::FKTarget_Request>::value &&
    has_bounded_size<gs_ros_interfaces::srv::FKTarget_Response>::value
  >
{
};

template<>
struct is_service<gs_ros_interfaces::srv::FKTarget>
  : std::true_type
{
};

template<>
struct is_service_request<gs_ros_interfaces::srv::FKTarget_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gs_ros_interfaces::srv::FKTarget_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__FK_TARGET__TRAITS_HPP_
