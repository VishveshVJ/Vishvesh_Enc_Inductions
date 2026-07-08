// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:srv/SetSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__SET_SENSOR_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__SRV__DETAIL__SET_SENSOR_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/srv/detail/set_sensor_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetSensorOptions_Request_contact_forces
{
public:
  explicit Init_SetSensorOptions_Request_contact_forces(::gs_ros_interfaces::srv::SetSensorOptions_Request & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::srv::SetSensorOptions_Request contact_forces(::gs_ros_interfaces::srv::SetSensorOptions_Request::_contact_forces_type arg)
  {
    msg_.contact_forces = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetSensorOptions_Request msg_;
};

class Init_SetSensorOptions_Request_contacts
{
public:
  explicit Init_SetSensorOptions_Request_contacts(::gs_ros_interfaces::srv::SetSensorOptions_Request & msg)
  : msg_(msg)
  {}
  Init_SetSensorOptions_Request_contact_forces contacts(::gs_ros_interfaces::srv::SetSensorOptions_Request::_contacts_type arg)
  {
    msg_.contacts = std::move(arg);
    return Init_SetSensorOptions_Request_contact_forces(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetSensorOptions_Request msg_;
};

class Init_SetSensorOptions_Request_imus
{
public:
  explicit Init_SetSensorOptions_Request_imus(::gs_ros_interfaces::srv::SetSensorOptions_Request & msg)
  : msg_(msg)
  {}
  Init_SetSensorOptions_Request_contacts imus(::gs_ros_interfaces::srv::SetSensorOptions_Request::_imus_type arg)
  {
    msg_.imus = std::move(arg);
    return Init_SetSensorOptions_Request_contacts(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetSensorOptions_Request msg_;
};

class Init_SetSensorOptions_Request_lidars
{
public:
  explicit Init_SetSensorOptions_Request_lidars(::gs_ros_interfaces::srv::SetSensorOptions_Request & msg)
  : msg_(msg)
  {}
  Init_SetSensorOptions_Request_imus lidars(::gs_ros_interfaces::srv::SetSensorOptions_Request::_lidars_type arg)
  {
    msg_.lidars = std::move(arg);
    return Init_SetSensorOptions_Request_imus(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetSensorOptions_Request msg_;
};

class Init_SetSensorOptions_Request_cameras
{
public:
  explicit Init_SetSensorOptions_Request_cameras(::gs_ros_interfaces::srv::SetSensorOptions_Request & msg)
  : msg_(msg)
  {}
  Init_SetSensorOptions_Request_lidars cameras(::gs_ros_interfaces::srv::SetSensorOptions_Request::_cameras_type arg)
  {
    msg_.cameras = std::move(arg);
    return Init_SetSensorOptions_Request_lidars(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetSensorOptions_Request msg_;
};

class Init_SetSensorOptions_Request_entity
{
public:
  Init_SetSensorOptions_Request_entity()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetSensorOptions_Request_cameras entity(::gs_ros_interfaces::srv::SetSensorOptions_Request::_entity_type arg)
  {
    msg_.entity = std::move(arg);
    return Init_SetSensorOptions_Request_cameras(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetSensorOptions_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::SetSensorOptions_Request>()
{
  return gs_ros_interfaces::srv::builder::Init_SetSensorOptions_Request_entity();
}

}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetSensorOptions_Response_result
{
public:
  Init_SetSensorOptions_Response_result()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::gs_ros_interfaces::srv::SetSensorOptions_Response result(::gs_ros_interfaces::srv::SetSensorOptions_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::srv::SetSensorOptions_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::srv::SetSensorOptions_Response>()
{
  return gs_ros_interfaces::srv::builder::Init_SetSensorOptions_Response_result();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__SET_SENSOR_OPTIONS__BUILDER_HPP_
