// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:msg/JointProperty.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/msg/detail/joint_property__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/msg/detail/joint_property__functions.h"
#include "gs_ros_interfaces/msg/detail/joint_property__struct.h"


// Include directives for member types
// Member `name`
// Member `command`
#include "rosidl_runtime_c/string_functions.h"
// Member `force_range`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__msg__JointProperty__init(message_memory);
}

void gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_fini_function(void * message_memory)
{
  gs_ros_interfaces__msg__JointProperty__fini(message_memory);
}

size_t gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__size_function__JointProperty__force_range(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__get_const_function__JointProperty__force_range(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__get_function__JointProperty__force_range(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__fetch_function__JointProperty__force_range(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__get_const_function__JointProperty__force_range(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__assign_function__JointProperty__force_range(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__get_function__JointProperty__force_range(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__resize_function__JointProperty__force_range(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_message_member_array[8] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__JointProperty, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__JointProperty, kp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "kv",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__JointProperty, kv),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stiffness",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__JointProperty, stiffness),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "armature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__JointProperty, armature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "damping",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__JointProperty, damping),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "force_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__JointProperty, force_range),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__size_function__JointProperty__force_range,  // size() function pointer
    gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__get_const_function__JointProperty__force_range,  // get_const(index) function pointer
    gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__get_function__JointProperty__force_range,  // get(index) function pointer
    gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__fetch_function__JointProperty__force_range,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__assign_function__JointProperty__force_range,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__resize_function__JointProperty__force_range  // resize(index) function pointer
  },
  {
    "command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__JointProperty, command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_message_members = {
  "gs_ros_interfaces__msg",  // message namespace
  "JointProperty",  // message name
  8,  // number of fields
  sizeof(gs_ros_interfaces__msg__JointProperty),
  gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_message_member_array,  // message members
  gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_message_type_support_handle = {
  0,
  &gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, JointProperty)() {
  if (!gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__msg__JointProperty__rosidl_typesupport_introspection_c__JointProperty_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
