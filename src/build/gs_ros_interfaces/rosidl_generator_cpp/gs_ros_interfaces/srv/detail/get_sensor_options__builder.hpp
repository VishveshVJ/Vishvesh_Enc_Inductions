// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/GetSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__GET_SENSOR_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__GET_SENSOR_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/get_sensor_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSensorOptions_Request_sensor_types
{
public:
  explicit Init_GetSensorOptions_Request_sensor_types(::gs_ros_interfaces::srv::GetSensorOptions_Request & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::GetSensorOptions_Request sensor_types(::gs_ros_interfaces::srv::GetSensorOptions_Request::_sensor_types_type arg)
  {
    msg_.sensor_types = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetSensorOptions_Request msg_;
};

class Init_GetSensorOptions_Request_names
{
public:
  explicit Init_GetSensorOptions_Request_names(::gs_ros_interfaces::srv::GetSensorOptions_Request & msg)
  : msg_(msg)
  {}
  Init_GetSensorOptions_Request_sensor_types names(::gs_ros_interfaces::srv::GetSensorOptions_Request::_names_type arg)
  {
    msg_.names = std::move(arg);
    return Init_GetSensorOptions_Request_sensor_types(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetSensorOptions_Request msg_;
};

class Init_GetSensorOptions_Request_entity
{
public:
  Init_GetSensorOptions_Request_entity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSensorOptions_Request_names entity(::gs_ros_interfaces::srv::GetSensorOptions_Request::_entity_type arg)
  {
    msg_.entity = std::move(arg);
    return Init_GetSensorOptions_Request_names(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetSensorOptions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::GetSensorOptions_Request>()
{
  return gs_ros_interfaces::srv::builder::Init_GetSensorOptions_Request_entity();
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetSensorOptions_Response_result
{
public:
  explicit Init_GetSensorOptions_Response_result(::gs_ros_interfaces::srv::GetSensorOptions_Response & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::GetSensorOptions_Response result(::gs_ros_interfaces::srv::GetSensorOptions_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetSensorOptions_Response msg_;
};

class Init_GetSensorOptions_Response_contact_forces
{
public:
  explicit Init_GetSensorOptions_Response_contact_forces(::gs_ros_interfaces::srv::GetSensorOptions_Response & msg)
  : msg_(msg)
  {}
  Init_GetSensorOptions_Response_result contact_forces(::gs_ros_interfaces::srv::GetSensorOptions_Response::_contact_forces_type arg)
  {
    msg_.contact_forces = std::move(arg);
    return Init_GetSensorOptions_Response_result(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetSensorOptions_Response msg_;
};

class Init_GetSensorOptions_Response_contacts
{
public:
  explicit Init_GetSensorOptions_Response_contacts(::gs_ros_interfaces::srv::GetSensorOptions_Response & msg)
  : msg_(msg)
  {}
  Init_GetSensorOptions_Response_contact_forces contacts(::gs_ros_interfaces::srv::GetSensorOptions_Response::_contacts_type arg)
  {
    msg_.contacts = std::move(arg);
    return Init_GetSensorOptions_Response_contact_forces(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetSensorOptions_Response msg_;
};

class Init_GetSensorOptions_Response_imus
{
public:
  explicit Init_GetSensorOptions_Response_imus(::gs_ros_interfaces::srv::GetSensorOptions_Response & msg)
  : msg_(msg)
  {}
  Init_GetSensorOptions_Response_contacts imus(::gs_ros_interfaces::srv::GetSensorOptions_Response::_imus_type arg)
  {
    msg_.imus = std::move(arg);
    return Init_GetSensorOptions_Response_contacts(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetSensorOptions_Response msg_;
};

class Init_GetSensorOptions_Response_lidars
{
public:
  explicit Init_GetSensorOptions_Response_lidars(::gs_ros_interfaces::srv::GetSensorOptions_Response & msg)
  : msg_(msg)
  {}
  Init_GetSensorOptions_Response_imus lidars(::gs_ros_interfaces::srv::GetSensorOptions_Response::_lidars_type arg)
  {
    msg_.lidars = std::move(arg);
    return Init_GetSensorOptions_Response_imus(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetSensorOptions_Response msg_;
};

class Init_GetSensorOptions_Response_cameras
{
public:
  Init_GetSensorOptions_Response_cameras()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSensorOptions_Response_lidars cameras(::gs_ros_interfaces::srv::GetSensorOptions_Response::_cameras_type arg)
  {
    msg_.cameras = std::move(arg);
    return Init_GetSensorOptions_Response_lidars(msg_);
  }

private:
  ::gs_ros_interfaces::srv::GetSensorOptions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::GetSensorOptions_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_GetSensorOptions_Response_cameras();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__GET_SENSOR_OPTIONS__BUILDER_HPP_
