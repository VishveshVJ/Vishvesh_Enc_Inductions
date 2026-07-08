// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:srv/SetPhysicsAttributes.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/srv/detail/set_physics_attributes__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/srv/detail/set_physics_attributes__functions.h"
#include "gs_ros_interfaces/srv/detail/set_physics_attributes__struct.h"


// Include directives for member types
// Member `attribute`
// Member `names`
// Member `dof_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `value`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__srv__SetPhysicsAttributes_Request__init(message_memory);
}

void gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_fini_function(void * message_memory)
{
  gs_ros_interfaces__srv__SetPhysicsAttributes_Request__fini(message_memory);
}

size_t gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__size_function__SetPhysicsAttributes_Request__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_const_function__SetPhysicsAttributes_Request__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_function__SetPhysicsAttributes_Request__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__fetch_function__SetPhysicsAttributes_Request__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_const_function__SetPhysicsAttributes_Request__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__assign_function__SetPhysicsAttributes_Request__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_function__SetPhysicsAttributes_Request__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__resize_function__SetPhysicsAttributes_Request__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__size_function__SetPhysicsAttributes_Request__dof_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_const_function__SetPhysicsAttributes_Request__dof_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_function__SetPhysicsAttributes_Request__dof_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__fetch_function__SetPhysicsAttributes_Request__dof_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_const_function__SetPhysicsAttributes_Request__dof_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__assign_function__SetPhysicsAttributes_Request__dof_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_function__SetPhysicsAttributes_Request__dof_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__resize_function__SetPhysicsAttributes_Request__dof_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__size_function__SetPhysicsAttributes_Request__value(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_const_function__SetPhysicsAttributes_Request__value(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_function__SetPhysicsAttributes_Request__value(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__fetch_function__SetPhysicsAttributes_Request__value(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_const_function__SetPhysicsAttributes_Request__value(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__assign_function__SetPhysicsAttributes_Request__value(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_function__SetPhysicsAttributes_Request__value(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__resize_function__SetPhysicsAttributes_Request__value(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_message_member_array[4] = {
  {
    "attribute",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__SetPhysicsAttributes_Request, attribute),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__SetPhysicsAttributes_Request, names),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__size_function__SetPhysicsAttributes_Request__names,  // size() function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_const_function__SetPhysicsAttributes_Request__names,  // get_const(index) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_function__SetPhysicsAttributes_Request__names,  // get(index) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__fetch_function__SetPhysicsAttributes_Request__names,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__assign_function__SetPhysicsAttributes_Request__names,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__resize_function__SetPhysicsAttributes_Request__names  // resize(index) function pointer
  },
  {
    "dof_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__SetPhysicsAttributes_Request, dof_names),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__size_function__SetPhysicsAttributes_Request__dof_names,  // size() function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_const_function__SetPhysicsAttributes_Request__dof_names,  // get_const(index) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_function__SetPhysicsAttributes_Request__dof_names,  // get(index) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__fetch_function__SetPhysicsAttributes_Request__dof_names,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__assign_function__SetPhysicsAttributes_Request__dof_names,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__resize_function__SetPhysicsAttributes_Request__dof_names  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__SetPhysicsAttributes_Request, value),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__size_function__SetPhysicsAttributes_Request__value,  // size() function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_const_function__SetPhysicsAttributes_Request__value,  // get_const(index) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__get_function__SetPhysicsAttributes_Request__value,  // get(index) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__fetch_function__SetPhysicsAttributes_Request__value,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__assign_function__SetPhysicsAttributes_Request__value,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__resize_function__SetPhysicsAttributes_Request__value  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_message_members = {
  "gs_ros_interfaces__srv",  // message namespace
  "SetPhysicsAttributes_Request",  // message name
  4,  // number of fields
  sizeof(gs_ros_interfaces__srv__SetPhysicsAttributes_Request),
  gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_message_member_array,  // message members
  gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_message_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetPhysicsAttributes_Request)() {
  if (!gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__srv__SetPhysicsAttributes_Request__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gs_ros_interfaces/srv/detail/set_physics_attributes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/set_physics_attributes__functions.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/set_physics_attributes__struct.h"


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__srv__SetPhysicsAttributes_Response__init(message_memory);
}

void gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_fini_function(void * message_memory)
{
  gs_ros_interfaces__srv__SetPhysicsAttributes_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__SetPhysicsAttributes_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__SetPhysicsAttributes_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_message_members = {
  "gs_ros_interfaces__srv",  // message namespace
  "SetPhysicsAttributes_Response",  // message name
  2,  // number of fields
  sizeof(gs_ros_interfaces__srv__SetPhysicsAttributes_Response),
  gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_message_member_array,  // message members
  gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_message_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetPhysicsAttributes_Response)() {
  if (!gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__srv__SetPhysicsAttributes_Response__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/set_physics_attributes__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gs_ros_interfaces__srv__detail__set_physics_attributes__rosidl_typesupport_introspection_c__SetPhysicsAttributes_service_members = {
  "gs_ros_interfaces__srv",  // service namespace
  "SetPhysicsAttributes",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gs_ros_interfaces__srv__detail__set_physics_attributes__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Request_message_type_support_handle,
  NULL  // response message
  // gs_ros_interfaces__srv__detail__set_physics_attributes__rosidl_typesupport_introspection_c__SetPhysicsAttributes_Response_message_type_support_handle
};

static rosidl_service_type_support_t gs_ros_interfaces__srv__detail__set_physics_attributes__rosidl_typesupport_introspection_c__SetPhysicsAttributes_service_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__detail__set_physics_attributes__rosidl_typesupport_introspection_c__SetPhysicsAttributes_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetPhysicsAttributes_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetPhysicsAttributes_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetPhysicsAttributes)() {
  if (!gs_ros_interfaces__srv__detail__set_physics_attributes__rosidl_typesupport_introspection_c__SetPhysicsAttributes_service_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__detail__set_physics_attributes__rosidl_typesupport_introspection_c__SetPhysicsAttributes_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gs_ros_interfaces__srv__detail__set_physics_attributes__rosidl_typesupport_introspection_c__SetPhysicsAttributes_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetPhysicsAttributes_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, SetPhysicsAttributes_Response)()->data;
  }

  return &gs_ros_interfaces__srv__detail__set_physics_attributes__rosidl_typesupport_introspection_c__SetPhysicsAttributes_service_type_support_handle;
}
