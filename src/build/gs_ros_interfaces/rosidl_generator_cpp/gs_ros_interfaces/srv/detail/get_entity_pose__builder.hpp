// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/GetEntityPose.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__GET_ENTITY_POSE__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__GET_ENTITY_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/get_entity_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEntityPose_Request_entity_name
{
public:
  Init_GetEntityPose_Request_entity_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gs_ros_interfaces::srv::GetEntityPose_Request entity_name(::gs_ros_interfaces::srv::GetEntityPose_Request::_entity_name_type arg)
  {
    msg_.entity_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetEntityPose_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::GetEntityPose_Request>()
{
  return gs_ros_interfaces::srv::builder::Init_GetEntityPose_Request_entity_name();
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetEntityPose_Response_message
{
public:
  explicit Init_GetEntityPose_Response_message(::gs_ros_interfaces::srv::GetEntityPose_Response & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::GetEntityPose_Response message(::gs_ros_interfaces::srv::GetEntityPose_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetEntityPose_Response msg_;
};

class Init_GetEntityPose_Response_success
{
public:
  explicit Init_GetEntityPose_Response_success(::gs_ros_interfaces::srv::GetEntityPose_Response & msg)
  : msg_(msg)
  {}
  Init_GetEntityPose_Response_message success(::gs_ros_interfaces::srv::GetEntityPose_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_GetEntityPose_Response_message(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetEntityPose_Response msg_;
};

class Init_GetEntityPose_Response_pose
{
public:
  Init_GetEntityPose_Response_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetEntityPose_Response_success pose(::gs_ros_interfaces::srv::GetEntityPose_Response::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_GetEntityPose_Response_success(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetEntityPose_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::GetEntityPose_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_GetEntityPose_Response_pose();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__GET_ENTITY_POSE__BUILDER_HPP_
