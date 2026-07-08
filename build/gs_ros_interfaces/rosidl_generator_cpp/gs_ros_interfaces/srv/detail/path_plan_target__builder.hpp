// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/PathPlanTarget.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/path_plan_target__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_PathPlanTarget_Request_tolerance
{
public:
  explicit Init_PathPlanTarget_Request_tolerance(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::PathPlanTarget_Request tolerance(::gs_ros_interfaces::srv::PathPlanTarget_Request::_tolerance_type arg)
  {
    msg_.tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_target_pos
{
public:
  explicit Init_PathPlanTarget_Request_target_pos(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_tolerance target_pos(::gs_ros_interfaces::srv::PathPlanTarget_Request::_target_pos_type arg)
  {
    msg_.target_pos = std::move(arg);
    return Init_PathPlanTarget_Request_tolerance(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_execute
{
public:
  explicit Init_PathPlanTarget_Request_execute(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_target_pos execute(::gs_ros_interfaces::srv::PathPlanTarget_Request::_execute_type arg)
  {
    msg_.execute = std::move(arg);
    return Init_PathPlanTarget_Request_target_pos(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_visualize
{
public:
  explicit Init_PathPlanTarget_Request_visualize(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_execute visualize(::gs_ros_interfaces::srv::PathPlanTarget_Request::_visualize_type arg)
  {
    msg_.visualize = std::move(arg);
    return Init_PathPlanTarget_Request_execute(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_ee_link_name
{
public:
  explicit Init_PathPlanTarget_Request_ee_link_name(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_visualize ee_link_name(::gs_ros_interfaces::srv::PathPlanTarget_Request::_ee_link_name_type arg)
  {
    msg_.ee_link_name = std::move(arg);
    return Init_PathPlanTarget_Request_visualize(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_planner
{
public:
  explicit Init_PathPlanTarget_Request_planner(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_ee_link_name planner(::gs_ros_interfaces::srv::PathPlanTarget_Request::_planner_type arg)
  {
    msg_.planner = std::move(arg);
    return Init_PathPlanTarget_Request_ee_link_name(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_ignore_collision
{
public:
  explicit Init_PathPlanTarget_Request_ignore_collision(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_planner ignore_collision(::gs_ros_interfaces::srv::PathPlanTarget_Request::_ignore_collision_type arg)
  {
    msg_.ignore_collision = std::move(arg);
    return Init_PathPlanTarget_Request_planner(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_num_waypoints
{
public:
  explicit Init_PathPlanTarget_Request_num_waypoints(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_ignore_collision num_waypoints(::gs_ros_interfaces::srv::PathPlanTarget_Request::_num_waypoints_type arg)
  {
    msg_.num_waypoints = std::move(arg);
    return Init_PathPlanTarget_Request_ignore_collision(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_smooth_path
{
public:
  explicit Init_PathPlanTarget_Request_smooth_path(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_num_waypoints smooth_path(::gs_ros_interfaces::srv::PathPlanTarget_Request::_smooth_path_type arg)
  {
    msg_.smooth_path = std::move(arg);
    return Init_PathPlanTarget_Request_num_waypoints(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_max_retries
{
public:
  explicit Init_PathPlanTarget_Request_max_retries(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_smooth_path max_retries(::gs_ros_interfaces::srv::PathPlanTarget_Request::_max_retries_type arg)
  {
    msg_.max_retries = std::move(arg);
    return Init_PathPlanTarget_Request_smooth_path(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_timeout
{
public:
  explicit Init_PathPlanTarget_Request_timeout(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_max_retries timeout(::gs_ros_interfaces::srv::PathPlanTarget_Request::_timeout_type arg)
  {
    msg_.timeout = std::move(arg);
    return Init_PathPlanTarget_Request_max_retries(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_resolution
{
public:
  explicit Init_PathPlanTarget_Request_resolution(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_timeout resolution(::gs_ros_interfaces::srv::PathPlanTarget_Request::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_PathPlanTarget_Request_timeout(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_max_nodes
{
public:
  explicit Init_PathPlanTarget_Request_max_nodes(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_resolution max_nodes(::gs_ros_interfaces::srv::PathPlanTarget_Request::_max_nodes_type arg)
  {
    msg_.max_nodes = std::move(arg);
    return Init_PathPlanTarget_Request_resolution(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_start_state
{
public:
  explicit Init_PathPlanTarget_Request_start_state(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_max_nodes start_state(::gs_ros_interfaces::srv::PathPlanTarget_Request::_start_state_type arg)
  {
    msg_.start_state = std::move(arg);
    return Init_PathPlanTarget_Request_max_nodes(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_goal_state
{
public:
  explicit Init_PathPlanTarget_Request_goal_state(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_start_state goal_state(::gs_ros_interfaces::srv::PathPlanTarget_Request::_goal_state_type arg)
  {
    msg_.goal_state = std::move(arg);
    return Init_PathPlanTarget_Request_start_state(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_target_link_name
{
public:
  explicit Init_PathPlanTarget_Request_target_link_name(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_goal_state target_link_name(::gs_ros_interfaces::srv::PathPlanTarget_Request::_target_link_name_type arg)
  {
    msg_.target_link_name = std::move(arg);
    return Init_PathPlanTarget_Request_goal_state(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_attached_intity
{
public:
  explicit Init_PathPlanTarget_Request_attached_intity(::gs_ros_interfaces::srv::PathPlanTarget_Request & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Request_target_link_name attached_intity(::gs_ros_interfaces::srv::PathPlanTarget_Request::_attached_intity_type arg)
  {
    msg_.attached_intity = std::move(arg);
    return Init_PathPlanTarget_Request_target_link_name(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

class Init_PathPlanTarget_Request_robot_name
{
public:
  Init_PathPlanTarget_Request_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPlanTarget_Request_attached_intity robot_name(::gs_ros_interfaces::srv::PathPlanTarget_Request::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_PathPlanTarget_Request_attached_intity(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::PathPlanTarget_Request>()
{
  return gs_ros_interfaces::srv::builder::Init_PathPlanTarget_Request_robot_name();
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_PathPlanTarget_Response_path
{
public:
  explicit Init_PathPlanTarget_Response_path(::gs_ros_interfaces::srv::PathPlanTarget_Response & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::PathPlanTarget_Response path(::gs_ros_interfaces::srv::PathPlanTarget_Response::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Response msg_;
};

class Init_PathPlanTarget_Response_message
{
public:
  explicit Init_PathPlanTarget_Response_message(::gs_ros_interfaces::srv::PathPlanTarget_Response & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Response_path message(::gs_ros_interfaces::srv::PathPlanTarget_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_PathPlanTarget_Response_path(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Response msg_;
};

class Init_PathPlanTarget_Response_plan_found
{
public:
  explicit Init_PathPlanTarget_Response_plan_found(::gs_ros_interfaces::srv::PathPlanTarget_Response & msg)
  : msg_(msg)
  {}
  Init_PathPlanTarget_Response_message plan_found(::gs_ros_interfaces::srv::PathPlanTarget_Response::_plan_found_type arg)
  {
    msg_.plan_found = std::move(arg);
    return Init_PathPlanTarget_Response_message(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Response msg_;
};

class Init_PathPlanTarget_Response_success
{
public:
  Init_PathPlanTarget_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathPlanTarget_Response_plan_found success(::gs_ros_interfaces::srv::PathPlanTarget_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_PathPlanTarget_Response_plan_found(msg_);
  }

private:
  ::gs_ros_interfaces::srv::PathPlanTarget_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::PathPlanTarget_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_PathPlanTarget_Response_success();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__PATH_PLAN_TARGET__BUILDER_HPP_
