// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:srv/IKTarget.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__TRAITS_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/srv/detail/ik_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const IKTarget_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: target_link_name
  {
    out << "target_link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_link_name, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    to_flow_style_yaml(msg.position, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    to_flow_style_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: init_robot_pos
  {
    if (msg.init_robot_pos.size() == 0) {
      out << "init_robot_pos: []";
    } else {
      out << "init_robot_pos: [";
      size_t pending_items = msg.init_robot_pos.size();
      for (auto item : msg.init_robot_pos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: request_joint_limit
  {
    out << "request_joint_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.request_joint_limit, out);
    out << ", ";
  }

  // member: max_samples
  {
    out << "max_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.max_samples, out);
    out << ", ";
  }

  // member: max_solver_iterartions
  {
    out << "max_solver_iterartions: ";
    rosidl_generator_traits::value_to_yaml(msg.max_solver_iterartions, out);
    out << ", ";
  }

  // member: damping
  {
    out << "damping: ";
    rosidl_generator_traits::value_to_yaml(msg.damping, out);
    out << ", ";
  }

  // member: pos_tol
  {
    out << "pos_tol: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_tol, out);
    out << ", ";
  }

  // member: rot_tol
  {
    out << "rot_tol: ";
    rosidl_generator_traits::value_to_yaml(msg.rot_tol, out);
    out << ", ";
  }

  // member: pos_mask
  {
    if (msg.pos_mask.size() == 0) {
      out << "pos_mask: []";
    } else {
      out << "pos_mask: [";
      size_t pending_items = msg.pos_mask.size();
      for (auto item : msg.pos_mask) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rot_mask
  {
    if (msg.rot_mask.size() == 0) {
      out << "rot_mask: []";
    } else {
      out << "rot_mask: [";
      size_t pending_items = msg.rot_mask.size();
      for (auto item : msg.rot_mask) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_step_size
  {
    out << "max_step_size: ";
    rosidl_generator_traits::value_to_yaml(msg.max_step_size, out);
    out << ", ";
  }

  // member: dofs_idx_local
  {
    if (msg.dofs_idx_local.size() == 0) {
      out << "dofs_idx_local: []";
    } else {
      out << "dofs_idx_local: [";
      size_t pending_items = msg.dofs_idx_local.size();
      for (auto item : msg.dofs_idx_local) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: visualize
  {
    out << "visualize: ";
    rosidl_generator_traits::value_to_yaml(msg.visualize, out);
    out << ", ";
  }

  // member: execute
  {
    out << "execute: ";
    rosidl_generator_traits::value_to_yaml(msg.execute, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IKTarget_Request & msg,
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

  // member: target_link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_link_name, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position:\n";
    to_block_style_yaml(msg.position, out, indentation + 2);
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation:\n";
    to_block_style_yaml(msg.orientation, out, indentation + 2);
  }

  // member: init_robot_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.init_robot_pos.size() == 0) {
      out << "init_robot_pos: []\n";
    } else {
      out << "init_robot_pos:\n";
      for (auto item : msg.init_robot_pos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: request_joint_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_joint_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.request_joint_limit, out);
    out << "\n";
  }

  // member: max_samples
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_samples: ";
    rosidl_generator_traits::value_to_yaml(msg.max_samples, out);
    out << "\n";
  }

  // member: max_solver_iterartions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_solver_iterartions: ";
    rosidl_generator_traits::value_to_yaml(msg.max_solver_iterartions, out);
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

  // member: pos_tol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos_tol: ";
    rosidl_generator_traits::value_to_yaml(msg.pos_tol, out);
    out << "\n";
  }

  // member: rot_tol
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rot_tol: ";
    rosidl_generator_traits::value_to_yaml(msg.rot_tol, out);
    out << "\n";
  }

  // member: pos_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.pos_mask.size() == 0) {
      out << "pos_mask: []\n";
    } else {
      out << "pos_mask:\n";
      for (auto item : msg.pos_mask) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: rot_mask
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.rot_mask.size() == 0) {
      out << "rot_mask: []\n";
    } else {
      out << "rot_mask:\n";
      for (auto item : msg.rot_mask) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_step_size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_step_size: ";
    rosidl_generator_traits::value_to_yaml(msg.max_step_size, out);
    out << "\n";
  }

  // member: dofs_idx_local
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dofs_idx_local.size() == 0) {
      out << "dofs_idx_local: []\n";
    } else {
      out << "dofs_idx_local:\n";
      for (auto item : msg.dofs_idx_local) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: visualize
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visualize: ";
    rosidl_generator_traits::value_to_yaml(msg.visualize, out);
    out << "\n";
  }

  // member: execute
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "execute: ";
    rosidl_generator_traits::value_to_yaml(msg.execute, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IKTarget_Request & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::srv::IKTarget_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::IKTarget_Request & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::IKTarget_Request>()
{
  return "gs_ros_interfaces::srv::IKTarget_Request";
}

template<>
inline const char * name<gs_ros_interfaces::srv::IKTarget_Request>()
{
  return "gs_ros_interfaces/srv/IKTarget_Request";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::IKTarget_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::IKTarget_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::IKTarget_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const IKTarget_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: solution_found
  {
    out << "solution_found: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_found, out);
    out << ", ";
  }

  // member: joint_angles
  {
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []";
    } else {
      out << "joint_angles: [";
      size_t pending_items = msg.joint_angles.size();
      for (auto item : msg.joint_angles) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: target_pos_error
  {
    out << "target_pos_error: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pos_error, out);
    out << ", ";
  }

  // member: target_quat_error
  {
    out << "target_quat_error: ";
    rosidl_generator_traits::value_to_yaml(msg.target_quat_error, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IKTarget_Response & msg,
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

  // member: solution_found
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solution_found: ";
    rosidl_generator_traits::value_to_yaml(msg.solution_found, out);
    out << "\n";
  }

  // member: joint_angles
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joint_angles.size() == 0) {
      out << "joint_angles: []\n";
    } else {
      out << "joint_angles:\n";
      for (auto item : msg.joint_angles) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: target_pos_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pos_error: ";
    rosidl_generator_traits::value_to_yaml(msg.target_pos_error, out);
    out << "\n";
  }

  // member: target_quat_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_quat_error: ";
    rosidl_generator_traits::value_to_yaml(msg.target_quat_error, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IKTarget_Response & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::srv::IKTarget_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::IKTarget_Response & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::IKTarget_Response>()
{
  return "gs_ros_interfaces::srv::IKTarget_Response";
}

template<>
inline const char * name<gs_ros_interfaces::srv::IKTarget_Response>()
{
  return "gs_ros_interfaces/srv/IKTarget_Response";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::IKTarget_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::IKTarget_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::IKTarget_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gs_ros_interfaces::srv::IKTarget>()
{
  return "gs_ros_interfaces::srv::IKTarget";
}

template<>
inline const char * name<gs_ros_interfaces::srv::IKTarget>()
{
  return "gs_ros_interfaces/srv/IKTarget";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::IKTarget>
  : std::integral_constant<
    bool,
    has_fixed_size<gs_ros_interfaces::srv::IKTarget_Request>::value &&
    has_fixed_size<gs_ros_interfaces::srv::IKTarget_Response>::value
  >
{
};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::IKTarget>
  : std::integral_constant<
    bool,
    has_bounded_size<gs_ros_interfaces::srv::IKTarget_Request>::value &&
    has_bounded_size<gs_ros_interfaces::srv::IKTarget_Response>::value
  >
{
};

template<>
struct is_service<gs_ros_interfaces::srv::IKTarget>
  : std::true_type
{
};

template<>
struct is_service_request<gs_ros_interfaces::srv::IKTarget_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gs_ros_interfaces::srv::IKTarget_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__IK_TARGET__TRAITS_HPP_
