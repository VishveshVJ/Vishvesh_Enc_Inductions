// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:msg/CameraOptions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/msg/detail/camera_options__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/msg/detail/camera_options__functions.h"
#include "gs_ros_interfaces/msg/detail/camera_options__struct.h"


// Include directives for member types
// Member `options`
#include "gs_ros_interfaces/msg/general_sensor_options.h"
// Member `options`
#include "gs_ros_interfaces/msg/detail/general_sensor_options__rosidl_typesupport_introspection_c.h"
// Member `ros_options`
#include "gs_ros_interfaces/msg/ros_sensor_options.h"
// Member `ros_options`
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__rosidl_typesupport_introspection_c.h"
// Member `rigid_options`
#include "gs_ros_interfaces/msg/rigid_sensor_options.h"
// Member `rigid_options`
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__rosidl_typesupport_introspection_c.h"
// Member `camera_types`
// Member `model`
#include "rosidl_runtime_c/string_functions.h"
// Member `res`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__msg__CameraOptions__init(message_memory);
}

void gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_fini_function(void * message_memory)
{
  gs_ros_interfaces__msg__CameraOptions__fini(message_memory);
}

size_t gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__size_function__CameraOptions__camera_types(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_const_function__CameraOptions__camera_types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_function__CameraOptions__camera_types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__fetch_function__CameraOptions__camera_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_const_function__CameraOptions__camera_types(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__assign_function__CameraOptions__camera_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_function__CameraOptions__camera_types(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__resize_function__CameraOptions__camera_types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__size_function__CameraOptions__res(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_const_function__CameraOptions__res(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_function__CameraOptions__res(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__fetch_function__CameraOptions__res(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_const_function__CameraOptions__res(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__assign_function__CameraOptions__res(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_function__CameraOptions__res(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__resize_function__CameraOptions__res(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_message_member_array[17] = {
  {
    "options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ros_options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, ros_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rigid_options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, rigid_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, camera_types),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__size_function__CameraOptions__camera_types,  // size() function pointer
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_const_function__CameraOptions__camera_types,  // get_const(index) function pointer
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_function__CameraOptions__camera_types,  // get(index) function pointer
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__fetch_function__CameraOptions__camera_types,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__assign_function__CameraOptions__camera_types,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__resize_function__CameraOptions__camera_types  // resize(index) function pointer
  },
  {
    "res",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, res),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__size_function__CameraOptions__res,  // size() function pointer
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_const_function__CameraOptions__res,  // get_const(index) function pointer
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__get_function__CameraOptions__res,  // get(index) function pointer
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__fetch_function__CameraOptions__res,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__assign_function__CameraOptions__res,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__resize_function__CameraOptions__res  // resize(index) function pointer
  },
  {
    "fov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, fov),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "near",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, near),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "far",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, far),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aperture",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, aperture),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "denoise",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, denoise),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, spp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "focus_dist",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, focus_dist),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gui",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, gui),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "add_noise",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, add_noise),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "noise_mean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, noise_mean),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "noise_std",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__CameraOptions, noise_std),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_message_members = {
  "gs_ros_interfaces__msg",  // message namespace
  "CameraOptions",  // message name
  17,  // number of fields
  sizeof(gs_ros_interfaces__msg__CameraOptions),
  gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_message_member_array,  // message members
  gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_message_type_support_handle = {
  0,
  &gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, CameraOptions)() {
  gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, GeneralSensorOptions)();
  gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, RosSensorOptions)();
  gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, RigidSensorOptions)();
  if (!gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__msg__CameraOptions__rosidl_typesupport_introspection_c__CameraOptions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
