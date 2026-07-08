// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:msg/GeneralSensorOptions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/msg/detail/general_sensor_options__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/msg/detail/general_sensor_options__functions.h"
#include "gs_ros_interfaces/msg/detail/general_sensor_options__struct.h"


// Include directives for member types
// Member `name`
// Member `sensor_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__msg__GeneralSensorOptions__init(message_memory);
}

void gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_fini_function(void * message_memory)
{
  gs_ros_interfaces__msg__GeneralSensorOptions__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__GeneralSensorOptions, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__GeneralSensorOptions, sensor_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delay",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__GeneralSensorOptions, delay),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "update_ground_truth_only",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__GeneralSensorOptions, update_ground_truth_only),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "draw_debug",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__GeneralSensorOptions, draw_debug),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_message_members = {
  "gs_ros_interfaces__msg",  // message namespace
  "GeneralSensorOptions",  // message name
  5,  // number of fields
  sizeof(gs_ros_interfaces__msg__GeneralSensorOptions),
  gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_message_member_array,  // message members
  gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_message_type_support_handle = {
  0,
  &gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, GeneralSensorOptions)() {
  if (!gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__msg__GeneralSensorOptions__rosidl_typesupport_introspection_c__GeneralSensorOptions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
