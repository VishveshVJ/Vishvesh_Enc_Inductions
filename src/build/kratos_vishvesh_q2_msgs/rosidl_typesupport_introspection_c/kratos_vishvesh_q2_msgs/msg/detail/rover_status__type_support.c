// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from kratos_vishvesh_q2_msgs:msg/RoverStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "kratos_vishvesh_q2_msgs/msg/detail/rover_status__rosidl_typesupport_introspection_c.h"
#include "kratos_vishvesh_q2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "kratos_vishvesh_q2_msgs/msg/detail/rover_status__functions.h"
#include "kratos_vishvesh_q2_msgs/msg/detail/rover_status__struct.h"


// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  kratos_vishvesh_q2_msgs__msg__RoverStatus__init(message_memory);
}

void kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_fini_function(void * message_memory)
{
  kratos_vishvesh_q2_msgs__msg__RoverStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_message_member_array[4] = {
  {
    "battery_percentage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kratos_vishvesh_q2_msgs__msg__RoverStatus, battery_percentage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kratos_vishvesh_q2_msgs__msg__RoverStatus, velocity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "emergency_stop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kratos_vishvesh_q2_msgs__msg__RoverStatus, emergency_stop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(kratos_vishvesh_q2_msgs__msg__RoverStatus, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_message_members = {
  "kratos_vishvesh_q2_msgs__msg",  // message namespace
  "RoverStatus",  // message name
  4,  // number of fields
  sizeof(kratos_vishvesh_q2_msgs__msg__RoverStatus),
  kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_message_member_array,  // message members
  kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_message_type_support_handle = {
  0,
  &kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_kratos_vishvesh_q2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kratos_vishvesh_q2_msgs, msg, RoverStatus)() {
  if (!kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_message_type_support_handle.typesupport_identifier) {
    kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &kratos_vishvesh_q2_msgs__msg__RoverStatus__rosidl_typesupport_introspection_c__RoverStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
