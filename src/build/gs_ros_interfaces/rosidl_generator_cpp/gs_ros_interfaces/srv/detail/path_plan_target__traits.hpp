// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gs_ros_interfaces:srv/PathPlanTarget.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__TRAITS_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gs_ros_interfaces/srv/detail/path_plan_target__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'target_pos'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PathPlanTarget_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: attached_intity
  {
    out << "attached_intity: ";
    rosidl_generator_traits::value_to_yaml(msg.attached_intity, out);
    out << ", ";
  }

  // member: target_link_name
  {
    out << "target_link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.target_link_name, out);
    out << ", ";
  }

  // member: goal_state
  {
    if (msg.goal_state.size() == 0) {
      out << "goal_state: []";
    } else {
      out << "goal_state: [";
      size_t pending_items = msg.goal_state.size();
      for (auto item : msg.goal_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: start_state
  {
    if (msg.start_state.size() == 0) {
      out << "start_state: []";
    } else {
      out << "start_state: [";
      size_t pending_items = msg.start_state.size();
      for (auto item : msg.start_state) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: max_nodes
  {
    out << "max_nodes: ";
    rosidl_generator_traits::value_to_yaml(msg.max_nodes, out);
    out << ", ";
  }

  // member: resolution
  {
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << ", ";
  }

  // member: timeout
  {
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << ", ";
  }

  // member: max_retries
  {
    out << "max_retries: ";
    rosidl_generator_traits::value_to_yaml(msg.max_retries, out);
    out << ", ";
  }

  // member: smooth_path
  {
    out << "smooth_path: ";
    rosidl_generator_traits::value_to_yaml(msg.smooth_path, out);
    out << ", ";
  }

  // member: num_waypoints
  {
    out << "num_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.num_waypoints, out);
    out << ", ";
  }

  // member: ignore_collision
  {
    out << "ignore_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_collision, out);
    out << ", ";
  }

  // member: planner
  {
    out << "planner: ";
    rosidl_generator_traits::value_to_yaml(msg.planner, out);
    out << ", ";
  }

  // member: ee_link_name
  {
    out << "ee_link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.ee_link_name, out);
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
    out << ", ";
  }

  // member: target_pos
  {
    out << "target_pos: ";
    to_flow_style_yaml(msg.target_pos, out);
    out << ", ";
  }

  // member: tolerance
  {
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PathPlanTarget_Request & msg,
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

  // member: attached_intity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attached_intity: ";
    rosidl_generator_traits::value_to_yaml(msg.attached_intity, out);
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

  // member: goal_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.goal_state.size() == 0) {
      out << "goal_state: []\n";
    } else {
      out << "goal_state:\n";
      for (auto item : msg.goal_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: start_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.start_state.size() == 0) {
      out << "start_state: []\n";
    } else {
      out << "start_state:\n";
      for (auto item : msg.start_state) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: max_nodes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_nodes: ";
    rosidl_generator_traits::value_to_yaml(msg.max_nodes, out);
    out << "\n";
  }

  // member: resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution, out);
    out << "\n";
  }

  // member: timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.timeout, out);
    out << "\n";
  }

  // member: max_retries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_retries: ";
    rosidl_generator_traits::value_to_yaml(msg.max_retries, out);
    out << "\n";
  }

  // member: smooth_path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "smooth_path: ";
    rosidl_generator_traits::value_to_yaml(msg.smooth_path, out);
    out << "\n";
  }

  // member: num_waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_waypoints: ";
    rosidl_generator_traits::value_to_yaml(msg.num_waypoints, out);
    out << "\n";
  }

  // member: ignore_collision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ignore_collision: ";
    rosidl_generator_traits::value_to_yaml(msg.ignore_collision, out);
    out << "\n";
  }

  // member: planner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "planner: ";
    rosidl_generator_traits::value_to_yaml(msg.planner, out);
    out << "\n";
  }

  // member: ee_link_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ee_link_name: ";
    rosidl_generator_traits::value_to_yaml(msg.ee_link_name, out);
    out << "\n";
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

  // member: target_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_pos:\n";
    to_block_style_yaml(msg.target_pos, out, indentation + 2);
  }

  // member: tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.tolerance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PathPlanTarget_Request & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::srv::PathPlanTarget_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::PathPlanTarget_Request>()
{
  return "gs_ros_interfaces::srv::PathPlanTarget_Request";
}

template<>
inline const char * name<gs_ros_interfaces::srv::PathPlanTarget_Request>()
{
  return "gs_ros_interfaces/srv/PathPlanTarget_Request";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::PathPlanTarget_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::PathPlanTarget_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::PathPlanTarget_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace gs_ros_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const PathPlanTarget_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: plan_found
  {
    out << "plan_found: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_found, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << ", ";
  }

  // member: path
  {
    if (msg.path.size() == 0) {
      out << "path: []";
    } else {
      out << "path: [";
      size_t pending_items = msg.path.size();
      for (auto item : msg.path) {
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
  const PathPlanTarget_Response & msg,
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

  // member: plan_found
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_found: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_found, out);
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

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path.size() == 0) {
      out << "path: []\n";
    } else {
      out << "path:\n";
      for (auto item : msg.path) {
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

inline std::string to_yaml(const PathPlanTarget_Response & msg, bool use_flow_style = false)
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
  const gs_ros_interfaces::srv::PathPlanTarget_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  gs_ros_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gs_ros_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const gs_ros_interfaces::srv::PathPlanTarget_Response & msg)
{
  return gs_ros_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<gs_ros_interfaces::srv::PathPlanTarget_Response>()
{
  return "gs_ros_interfaces::srv::PathPlanTarget_Response";
}

template<>
inline const char * name<gs_ros_interfaces::srv::PathPlanTarget_Response>()
{
  return "gs_ros_interfaces/srv/PathPlanTarget_Response";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::PathPlanTarget_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::PathPlanTarget_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gs_ros_interfaces::srv::PathPlanTarget_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<gs_ros_interfaces::srv::PathPlanTarget>()
{
  return "gs_ros_interfaces::srv::PathPlanTarget";
}

template<>
inline const char * name<gs_ros_interfaces::srv::PathPlanTarget>()
{
  return "gs_ros_interfaces/srv/PathPlanTarget";
}

template<>
struct has_fixed_size<gs_ros_interfaces::srv::PathPlanTarget>
  : std::integral_constant<
    bool,
    has_fixed_size<gs_ros_interfaces::srv::PathPlanTarget_Request>::value &&
    has_fixed_size<gs_ros_interfaces::srv::PathPlanTarget_Response>::value
  >
{
};

template<>
struct has_bounded_size<gs_ros_interfaces::srv::PathPlanTarget>
  : std::integral_constant<
    bool,
    has_bounded_size<gs_ros_interfaces::srv::PathPlanTarget_Request>::value &&
    has_bounded_size<gs_ros_interfaces::srv::PathPlanTarget_Response>::value
  >
{
};

template<>
struct is_service<gs_ros_interfaces::srv::PathPlanTarget>
  : std::true_type
{
};

template<>
struct is_service_request<gs_ros_interfaces::srv::PathPlanTarget_Request>
  : std::true_type
{
};

template<>
struct is_service_response<gs_ros_interfaces::srv::PathPlanTarget_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__TRAITS_HPP_
