// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/JoinEntities.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__JOIN_ENTITIES__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__JOIN_ENTITIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/join_entities__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_JoinEntities_Request_entity_two_type
{
public:
  explicit Init_JoinEntities_Request_entity_two_type(::gs_ros_interfaces::srv::JoinEntities_Request & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::JoinEntities_Request entity_two_type(::gs_ros_interfaces::srv::JoinEntities_Request::_entity_two_type_type arg)
  {
    msg_.entity_two_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::JoinEntities_Request msg_;
};

class Init_JoinEntities_Request_link_two
{
public:
  explicit Init_JoinEntities_Request_link_two(::gs_ros_interfaces::srv::JoinEntities_Request & msg)
  : msg_(msg)
  {}
  Init_JoinEntities_Request_entity_two_type link_two(::gs_ros_interfaces::srv::JoinEntities_Request::_link_two_type arg)
  {
    msg_.link_two = std::move(arg);
    return Init_JoinEntities_Request_entity_two_type(msg_);
  }

private:
  ::gs_ros_interfaces::srv::JoinEntities_Request msg_;
};

class Init_JoinEntities_Request_entity_two
{
public:
  explicit Init_JoinEntities_Request_entity_two(::gs_ros_interfaces::srv::JoinEntities_Request & msg)
  : msg_(msg)
  {}
  Init_JoinEntities_Request_link_two entity_two(::gs_ros_interfaces::srv::JoinEntities_Request::_entity_two_type arg)
  {
    msg_.entity_two = std::move(arg);
    return Init_JoinEntities_Request_link_two(msg_);
  }

private:
  ::gs_ros_interfaces::srv::JoinEntities_Request msg_;
};

class Init_JoinEntities_Request_entity_one_type
{
public:
  explicit Init_JoinEntities_Request_entity_one_type(::gs_ros_interfaces::srv::JoinEntities_Request & msg)
  : msg_(msg)
  {}
  Init_JoinEntities_Request_entity_two entity_one_type(::gs_ros_interfaces::srv::JoinEntities_Request::_entity_one_type_type arg)
  {
    msg_.entity_one_type = std::move(arg);
    return Init_JoinEntities_Request_entity_two(msg_);
  }

private:
  ::gs_ros_interfaces::srv::JoinEntities_Request msg_;
};

class Init_JoinEntities_Request_link_one
{
public:
  explicit Init_JoinEntities_Request_link_one(::gs_ros_interfaces::srv::JoinEntities_Request & msg)
  : msg_(msg)
  {}
  Init_JoinEntities_Request_entity_one_type link_one(::gs_ros_interfaces::srv::JoinEntities_Request::_link_one_type arg)
  {
    msg_.link_one = std::move(arg);
    return Init_JoinEntities_Request_entity_one_type(msg_);
  }

private:
  ::gs_ros_interfaces::srv::JoinEntities_Request msg_;
};

class Init_JoinEntities_Request_entity_one
{
public:
  Init_JoinEntities_Request_entity_one()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoinEntities_Request_link_one entity_one(::gs_ros_interfaces::srv::JoinEntities_Request::_entity_one_type arg)
  {
    msg_.entity_one = std::move(arg);
    return Init_JoinEntities_Request_link_one(msg_);
  }

private:
  ::gs_ros_interfaces::srv::JoinEntities_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::JoinEntities_Request>()
{
  return gs_ros_interfaces::srv::builder::Init_JoinEntities_Request_entity_one();
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_JoinEntities_Response_message
{
public:
  explicit Init_JoinEntities_Response_message(::gs_ros_interfaces::srv::JoinEntities_Response & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::JoinEntities_Response message(::gs_ros_interfaces::srv::JoinEntities_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::JoinEntities_Response msg_;
};

class Init_JoinEntities_Response_success
{
public:
  Init_JoinEntities_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JoinEntities_Response_message success(::gs_ros_interfaces::srv::JoinEntities_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_JoinEntities_Response_message(msg_);
  }

private:
  ::gs_ros_interfaces::srv::JoinEntities_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::JoinEntities_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_JoinEntities_Response_success();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__JOIN_ENTITIES__BUILDER_HPP_
