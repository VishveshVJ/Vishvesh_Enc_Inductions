// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:srv/GetSensorOptions.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gs_ros_interfaces/srv/detail/get_sensor_options__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gs_ros_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetSensorOptions_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gs_ros_interfaces::srv::GetSensorOptions_Request(_init);
}

void GetSensorOptions_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gs_ros_interfaces::srv::GetSensorOptions_Request *>(message_memory);
  typed_message->~GetSensorOptions_Request();
}

size_t size_function__GetSensorOptions_Request__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetSensorOptions_Request__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetSensorOptions_Request__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetSensorOptions_Request__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetSensorOptions_Request__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetSensorOptions_Request__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetSensorOptions_Request__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetSensorOptions_Request__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetSensorOptions_Request__sensor_types(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetSensorOptions_Request__sensor_types(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__GetSensorOptions_Request__sensor_types(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetSensorOptions_Request__sensor_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__GetSensorOptions_Request__sensor_types(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__GetSensorOptions_Request__sensor_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__GetSensorOptions_Request__sensor_types(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__GetSensorOptions_Request__sensor_types(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetSensorOptions_Request_message_member_array[3] = {
  {
    "entity",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::GetSensorOptions_Request, entity),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::GetSensorOptions_Request, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetSensorOptions_Request__names,  // size() function pointer
    get_const_function__GetSensorOptions_Request__names,  // get_const(index) function pointer
    get_function__GetSensorOptions_Request__names,  // get(index) function pointer
    fetch_function__GetSensorOptions_Request__names,  // fetch(index, &value) function pointer
    assign_function__GetSensorOptions_Request__names,  // assign(index, value) function pointer
    resize_function__GetSensorOptions_Request__names  // resize(index) function pointer
  },
  {
    "sensor_types",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::GetSensorOptions_Request, sensor_types),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetSensorOptions_Request__sensor_types,  // size() function pointer
    get_const_function__GetSensorOptions_Request__sensor_types,  // get_const(index) function pointer
    get_function__GetSensorOptions_Request__sensor_types,  // get(index) function pointer
    fetch_function__GetSensorOptions_Request__sensor_types,  // fetch(index, &value) function pointer
    assign_function__GetSensorOptions_Request__sensor_types,  // assign(index, value) function pointer
    resize_function__GetSensorOptions_Request__sensor_types  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetSensorOptions_Request_message_members = {
  "gs_ros_interfaces::srv",  // message namespace
  "GetSensorOptions_Request",  // message name
  3,  // number of fields
  sizeof(gs_ros_interfaces::srv::GetSensorOptions_Request),
  GetSensorOptions_Request_message_member_array,  // message members
  GetSensorOptions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  GetSensorOptions_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetSensorOptions_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSensorOptions_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace gs_ros_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gs_ros_interfaces::srv::GetSensorOptions_Request>()
{
  return &::gs_ros_interfaces::srv::rosidl_typesupport_introspection_cpp::GetSensorOptions_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, srv, GetSensorOptions_Request)() {
  return &::gs_ros_interfaces::srv::rosidl_typesupport_introspection_cpp::GetSensorOptions_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/get_sensor_options__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gs_ros_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

void GetSensorOptions_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gs_ros_interfaces::srv::GetSensorOptions_Response(_init);
}

void GetSensorOptions_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gs_ros_interfaces::srv::GetSensorOptions_Response *>(message_memory);
  typed_message->~GetSensorOptions_Response();
}

size_t size_function__GetSensorOptions_Response__cameras(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<gs_ros_interfaces::msg::CameraOptions> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetSensorOptions_Response__cameras(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<gs_ros_interfaces::msg::CameraOptions> *>(untyped_member);
  return &member[index];
}

void * get_function__GetSensorOptions_Response__cameras(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<gs_ros_interfaces::msg::CameraOptions> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetSensorOptions_Response__cameras(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const gs_ros_interfaces::msg::CameraOptions *>(
    get_const_function__GetSensorOptions_Response__cameras(untyped_member, index));
  auto & value = *reinterpret_cast<gs_ros_interfaces::msg::CameraOptions *>(untyped_value);
  value = item;
}

void assign_function__GetSensorOptions_Response__cameras(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<gs_ros_interfaces::msg::CameraOptions *>(
    get_function__GetSensorOptions_Response__cameras(untyped_member, index));
  const auto & value = *reinterpret_cast<const gs_ros_interfaces::msg::CameraOptions *>(untyped_value);
  item = value;
}

void resize_function__GetSensorOptions_Response__cameras(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<gs_ros_interfaces::msg::CameraOptions> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetSensorOptions_Response__lidars(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<gs_ros_interfaces::msg::LidarOptions> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetSensorOptions_Response__lidars(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<gs_ros_interfaces::msg::LidarOptions> *>(untyped_member);
  return &member[index];
}

void * get_function__GetSensorOptions_Response__lidars(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<gs_ros_interfaces::msg::LidarOptions> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetSensorOptions_Response__lidars(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const gs_ros_interfaces::msg::LidarOptions *>(
    get_const_function__GetSensorOptions_Response__lidars(untyped_member, index));
  auto & value = *reinterpret_cast<gs_ros_interfaces::msg::LidarOptions *>(untyped_value);
  value = item;
}

void assign_function__GetSensorOptions_Response__lidars(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<gs_ros_interfaces::msg::LidarOptions *>(
    get_function__GetSensorOptions_Response__lidars(untyped_member, index));
  const auto & value = *reinterpret_cast<const gs_ros_interfaces::msg::LidarOptions *>(untyped_value);
  item = value;
}

void resize_function__GetSensorOptions_Response__lidars(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<gs_ros_interfaces::msg::LidarOptions> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetSensorOptions_Response__imus(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<gs_ros_interfaces::msg::ImuOptions> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetSensorOptions_Response__imus(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<gs_ros_interfaces::msg::ImuOptions> *>(untyped_member);
  return &member[index];
}

void * get_function__GetSensorOptions_Response__imus(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<gs_ros_interfaces::msg::ImuOptions> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetSensorOptions_Response__imus(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const gs_ros_interfaces::msg::ImuOptions *>(
    get_const_function__GetSensorOptions_Response__imus(untyped_member, index));
  auto & value = *reinterpret_cast<gs_ros_interfaces::msg::ImuOptions *>(untyped_value);
  value = item;
}

void assign_function__GetSensorOptions_Response__imus(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<gs_ros_interfaces::msg::ImuOptions *>(
    get_function__GetSensorOptions_Response__imus(untyped_member, index));
  const auto & value = *reinterpret_cast<const gs_ros_interfaces::msg::ImuOptions *>(untyped_value);
  item = value;
}

void resize_function__GetSensorOptions_Response__imus(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<gs_ros_interfaces::msg::ImuOptions> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetSensorOptions_Response__contacts(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<gs_ros_interfaces::msg::ContactOptions> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetSensorOptions_Response__contacts(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<gs_ros_interfaces::msg::ContactOptions> *>(untyped_member);
  return &member[index];
}

void * get_function__GetSensorOptions_Response__contacts(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<gs_ros_interfaces::msg::ContactOptions> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetSensorOptions_Response__contacts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const gs_ros_interfaces::msg::ContactOptions *>(
    get_const_function__GetSensorOptions_Response__contacts(untyped_member, index));
  auto & value = *reinterpret_cast<gs_ros_interfaces::msg::ContactOptions *>(untyped_value);
  value = item;
}

void assign_function__GetSensorOptions_Response__contacts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<gs_ros_interfaces::msg::ContactOptions *>(
    get_function__GetSensorOptions_Response__contacts(untyped_member, index));
  const auto & value = *reinterpret_cast<const gs_ros_interfaces::msg::ContactOptions *>(untyped_value);
  item = value;
}

void resize_function__GetSensorOptions_Response__contacts(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<gs_ros_interfaces::msg::ContactOptions> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetSensorOptions_Response__contact_forces(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<gs_ros_interfaces::msg::ContactForceOptions> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetSensorOptions_Response__contact_forces(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<gs_ros_interfaces::msg::ContactForceOptions> *>(untyped_member);
  return &member[index];
}

void * get_function__GetSensorOptions_Response__contact_forces(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<gs_ros_interfaces::msg::ContactForceOptions> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetSensorOptions_Response__contact_forces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const gs_ros_interfaces::msg::ContactForceOptions *>(
    get_const_function__GetSensorOptions_Response__contact_forces(untyped_member, index));
  auto & value = *reinterpret_cast<gs_ros_interfaces::msg::ContactForceOptions *>(untyped_value);
  value = item;
}

void assign_function__GetSensorOptions_Response__contact_forces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<gs_ros_interfaces::msg::ContactForceOptions *>(
    get_function__GetSensorOptions_Response__contact_forces(untyped_member, index));
  const auto & value = *reinterpret_cast<const gs_ros_interfaces::msg::ContactForceOptions *>(untyped_value);
  item = value;
}

void resize_function__GetSensorOptions_Response__contact_forces(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<gs_ros_interfaces::msg::ContactForceOptions> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetSensorOptions_Response_message_member_array[6] = {
  {
    "cameras",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gs_ros_interfaces::msg::CameraOptions>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::GetSensorOptions_Response, cameras),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetSensorOptions_Response__cameras,  // size() function pointer
    get_const_function__GetSensorOptions_Response__cameras,  // get_const(index) function pointer
    get_function__GetSensorOptions_Response__cameras,  // get(index) function pointer
    fetch_function__GetSensorOptions_Response__cameras,  // fetch(index, &value) function pointer
    assign_function__GetSensorOptions_Response__cameras,  // assign(index, value) function pointer
    resize_function__GetSensorOptions_Response__cameras  // resize(index) function pointer
  },
  {
    "lidars",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gs_ros_interfaces::msg::LidarOptions>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::GetSensorOptions_Response, lidars),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetSensorOptions_Response__lidars,  // size() function pointer
    get_const_function__GetSensorOptions_Response__lidars,  // get_const(index) function pointer
    get_function__GetSensorOptions_Response__lidars,  // get(index) function pointer
    fetch_function__GetSensorOptions_Response__lidars,  // fetch(index, &value) function pointer
    assign_function__GetSensorOptions_Response__lidars,  // assign(index, value) function pointer
    resize_function__GetSensorOptions_Response__lidars  // resize(index) function pointer
  },
  {
    "imus",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gs_ros_interfaces::msg::ImuOptions>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::GetSensorOptions_Response, imus),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetSensorOptions_Response__imus,  // size() function pointer
    get_const_function__GetSensorOptions_Response__imus,  // get_const(index) function pointer
    get_function__GetSensorOptions_Response__imus,  // get(index) function pointer
    fetch_function__GetSensorOptions_Response__imus,  // fetch(index, &value) function pointer
    assign_function__GetSensorOptions_Response__imus,  // assign(index, value) function pointer
    resize_function__GetSensorOptions_Response__imus  // resize(index) function pointer
  },
  {
    "contacts",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gs_ros_interfaces::msg::ContactOptions>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::GetSensorOptions_Response, contacts),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetSensorOptions_Response__contacts,  // size() function pointer
    get_const_function__GetSensorOptions_Response__contacts,  // get_const(index) function pointer
    get_function__GetSensorOptions_Response__contacts,  // get(index) function pointer
    fetch_function__GetSensorOptions_Response__contacts,  // fetch(index, &value) function pointer
    assign_function__GetSensorOptions_Response__contacts,  // assign(index, value) function pointer
    resize_function__GetSensorOptions_Response__contacts  // resize(index) function pointer
  },
  {
    "contact_forces",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<gs_ros_interfaces::msg::ContactForceOptions>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::GetSensorOptions_Response, contact_forces),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetSensorOptions_Response__contact_forces,  // size() function pointer
    get_const_function__GetSensorOptions_Response__contact_forces,  // get_const(index) function pointer
    get_function__GetSensorOptions_Response__contact_forces,  // get(index) function pointer
    fetch_function__GetSensorOptions_Response__contact_forces,  // fetch(index, &value) function pointer
    assign_function__GetSensorOptions_Response__contact_forces,  // assign(index, value) function pointer
    resize_function__GetSensorOptions_Response__contact_forces  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<simulation_interfaces::msg::Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::GetSensorOptions_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetSensorOptions_Response_message_members = {
  "gs_ros_interfaces::srv",  // message namespace
  "GetSensorOptions_Response",  // message name
  6,  // number of fields
  sizeof(gs_ros_interfaces::srv::GetSensorOptions_Response),
  GetSensorOptions_Response_message_member_array,  // message members
  GetSensorOptions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  GetSensorOptions_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetSensorOptions_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSensorOptions_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace gs_ros_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gs_ros_interfaces::srv::GetSensorOptions_Response>()
{
  return &::gs_ros_interfaces::srv::rosidl_typesupport_introspection_cpp::GetSensorOptions_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, srv, GetSensorOptions_Response)() {
  return &::gs_ros_interfaces::srv::rosidl_typesupport_introspection_cpp::GetSensorOptions_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/get_sensor_options__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace gs_ros_interfaces
{

namespace srv
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers GetSensorOptions_service_members = {
  "gs_ros_interfaces::srv",  // service namespace
  "GetSensorOptions",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<gs_ros_interfaces::srv::GetSensorOptions>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t GetSensorOptions_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetSensorOptions_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace srv

}  // namespace gs_ros_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<gs_ros_interfaces::srv::GetSensorOptions>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::gs_ros_interfaces::srv::rosidl_typesupport_introspection_cpp::GetSensorOptions_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::gs_ros_interfaces::srv::GetSensorOptions_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::gs_ros_interfaces::srv::GetSensorOptions_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, srv, GetSensorOptions)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<gs_ros_interfaces::srv::GetSensorOptions>();
}

#ifdef __cplusplus
}
#endif
