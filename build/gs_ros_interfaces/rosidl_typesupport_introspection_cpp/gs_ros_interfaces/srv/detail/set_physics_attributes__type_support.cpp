// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:srv/SetPhysicsAttributes.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gs_ros_interfaces/srv/detail/set_physics_attributes__struct.hpp"
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

void SetPhysicsAttributes_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gs_ros_interfaces::srv::SetPhysicsAttributes_Request(_init);
}

void SetPhysicsAttributes_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gs_ros_interfaces::srv::SetPhysicsAttributes_Request *>(message_memory);
  typed_message->~SetPhysicsAttributes_Request();
}

size_t size_function__SetPhysicsAttributes_Request__names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetPhysicsAttributes_Request__names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SetPhysicsAttributes_Request__names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetPhysicsAttributes_Request__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SetPhysicsAttributes_Request__names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SetPhysicsAttributes_Request__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SetPhysicsAttributes_Request__names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SetPhysicsAttributes_Request__names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetPhysicsAttributes_Request__dof_names(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetPhysicsAttributes_Request__dof_names(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__SetPhysicsAttributes_Request__dof_names(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetPhysicsAttributes_Request__dof_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__SetPhysicsAttributes_Request__dof_names(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__SetPhysicsAttributes_Request__dof_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__SetPhysicsAttributes_Request__dof_names(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__SetPhysicsAttributes_Request__dof_names(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SetPhysicsAttributes_Request__value(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SetPhysicsAttributes_Request__value(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__SetPhysicsAttributes_Request__value(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__SetPhysicsAttributes_Request__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__SetPhysicsAttributes_Request__value(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__SetPhysicsAttributes_Request__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__SetPhysicsAttributes_Request__value(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__SetPhysicsAttributes_Request__value(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetPhysicsAttributes_Request_message_member_array[4] = {
  {
    "attribute",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::SetPhysicsAttributes_Request, attribute),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces::srv::SetPhysicsAttributes_Request, names),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetPhysicsAttributes_Request__names,  // size() function pointer
    get_const_function__SetPhysicsAttributes_Request__names,  // get_const(index) function pointer
    get_function__SetPhysicsAttributes_Request__names,  // get(index) function pointer
    fetch_function__SetPhysicsAttributes_Request__names,  // fetch(index, &value) function pointer
    assign_function__SetPhysicsAttributes_Request__names,  // assign(index, value) function pointer
    resize_function__SetPhysicsAttributes_Request__names  // resize(index) function pointer
  },
  {
    "dof_names",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::SetPhysicsAttributes_Request, dof_names),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetPhysicsAttributes_Request__dof_names,  // size() function pointer
    get_const_function__SetPhysicsAttributes_Request__dof_names,  // get_const(index) function pointer
    get_function__SetPhysicsAttributes_Request__dof_names,  // get(index) function pointer
    fetch_function__SetPhysicsAttributes_Request__dof_names,  // fetch(index, &value) function pointer
    assign_function__SetPhysicsAttributes_Request__dof_names,  // assign(index, value) function pointer
    resize_function__SetPhysicsAttributes_Request__dof_names  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::SetPhysicsAttributes_Request, value),  // bytes offset in struct
    nullptr,  // default value
    size_function__SetPhysicsAttributes_Request__value,  // size() function pointer
    get_const_function__SetPhysicsAttributes_Request__value,  // get_const(index) function pointer
    get_function__SetPhysicsAttributes_Request__value,  // get(index) function pointer
    fetch_function__SetPhysicsAttributes_Request__value,  // fetch(index, &value) function pointer
    assign_function__SetPhysicsAttributes_Request__value,  // assign(index, value) function pointer
    resize_function__SetPhysicsAttributes_Request__value  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetPhysicsAttributes_Request_message_members = {
  "gs_ros_interfaces::srv",  // message namespace
  "SetPhysicsAttributes_Request",  // message name
  4,  // number of fields
  sizeof(gs_ros_interfaces::srv::SetPhysicsAttributes_Request),
  SetPhysicsAttributes_Request_message_member_array,  // message members
  SetPhysicsAttributes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  SetPhysicsAttributes_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetPhysicsAttributes_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetPhysicsAttributes_Request_message_members,
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
get_message_type_support_handle<gs_ros_interfaces::srv::SetPhysicsAttributes_Request>()
{
  return &::gs_ros_interfaces::srv::rosidl_typesupport_introspection_cpp::SetPhysicsAttributes_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, srv, SetPhysicsAttributes_Request)() {
  return &::gs_ros_interfaces::srv::rosidl_typesupport_introspection_cpp::SetPhysicsAttributes_Request_message_type_support_handle;
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
// #include "gs_ros_interfaces/srv/detail/set_physics_attributes__struct.hpp"
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

void SetPhysicsAttributes_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gs_ros_interfaces::srv::SetPhysicsAttributes_Response(_init);
}

void SetPhysicsAttributes_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gs_ros_interfaces::srv::SetPhysicsAttributes_Response *>(message_memory);
  typed_message->~SetPhysicsAttributes_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SetPhysicsAttributes_Response_message_member_array[2] = {
  {
    "success",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::SetPhysicsAttributes_Response, success),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "message",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces::srv::SetPhysicsAttributes_Response, message),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SetPhysicsAttributes_Response_message_members = {
  "gs_ros_interfaces::srv",  // message namespace
  "SetPhysicsAttributes_Response",  // message name
  2,  // number of fields
  sizeof(gs_ros_interfaces::srv::SetPhysicsAttributes_Response),
  SetPhysicsAttributes_Response_message_member_array,  // message members
  SetPhysicsAttributes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  SetPhysicsAttributes_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SetPhysicsAttributes_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetPhysicsAttributes_Response_message_members,
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
get_message_type_support_handle<gs_ros_interfaces::srv::SetPhysicsAttributes_Response>()
{
  return &::gs_ros_interfaces::srv::rosidl_typesupport_introspection_cpp::SetPhysicsAttributes_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, srv, SetPhysicsAttributes_Response)() {
  return &::gs_ros_interfaces::srv::rosidl_typesupport_introspection_cpp::SetPhysicsAttributes_Response_message_type_support_handle;
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
// #include "gs_ros_interfaces/srv/detail/set_physics_attributes__struct.hpp"
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
static ::rosidl_typesupport_introspection_cpp::ServiceMembers SetPhysicsAttributes_service_members = {
  "gs_ros_interfaces::srv",  // service namespace
  "SetPhysicsAttributes",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<gs_ros_interfaces::srv::SetPhysicsAttributes>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t SetPhysicsAttributes_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SetPhysicsAttributes_service_members,
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
get_service_type_support_handle<gs_ros_interfaces::srv::SetPhysicsAttributes>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::gs_ros_interfaces::srv::rosidl_typesupport_introspection_cpp::SetPhysicsAttributes_service_type_support_handle;
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
        ::gs_ros_interfaces::srv::SetPhysicsAttributes_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::gs_ros_interfaces::srv::SetPhysicsAttributes_Response
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
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gs_ros_interfaces, srv, SetPhysicsAttributes)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<gs_ros_interfaces::srv::SetPhysicsAttributes>();
}

#ifdef __cplusplus
}
#endif
