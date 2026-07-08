// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:srv/GetSensorOptions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/srv/detail/get_sensor_options__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/srv/detail/get_sensor_options__functions.h"
#include "gs_ros_interfaces/srv/detail/get_sensor_options__struct.h"


// Include directives for member types
// Member `entity`
// Member `names`
// Member `sensor_types`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__srv__GetSensorOptions_Request__init(message_memory);
}

void gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_fini_function(void * message_memory)
{
  gs_ros_interfaces__srv__GetSensorOptions_Request__fini(message_memory);
}

size_t gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Request__names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Request__names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Request__names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Request__names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Request__names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Request__names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Request__names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Request__names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Request__sensor_types(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Request__sensor_types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Request__sensor_types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Request__sensor_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Request__sensor_types(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Request__sensor_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Request__sensor_types(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Request__sensor_types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_message_member_array[3] = {
  {
    "entity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__GetSensorOptions_Request, entity),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces__srv__GetSensorOptions_Request, names),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Request__names,  // size() function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Request__names,  // get_const(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Request__names,  // get(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Request__names,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Request__names,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Request__names  // resize(index) function pointer
  },
  {
    "sensor_types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__GetSensorOptions_Request, sensor_types),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Request__sensor_types,  // size() function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Request__sensor_types,  // get_const(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Request__sensor_types,  // get(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Request__sensor_types,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Request__sensor_types,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Request__sensor_types  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_message_members = {
  "gs_ros_interfaces__srv",  // message namespace
  "GetSensorOptions_Request",  // message name
  3,  // number of fields
  sizeof(gs_ros_interfaces__srv__GetSensorOptions_Request),
  gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_message_member_array,  // message members
  gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_message_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, GetSensorOptions_Request)() {
  if (!gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__srv__GetSensorOptions_Request__rosidl_typesupport_introspection_c__GetSensorOptions_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "gs_ros_interfaces/srv/detail/get_sensor_options__rosidl_typesupport_introspection_c.h"
// already included above
// #include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/get_sensor_options__functions.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/get_sensor_options__struct.h"


// Include directives for member types
// Member `cameras`
#include "gs_ros_interfaces/msg/camera_options.h"
// Member `cameras`
#include "gs_ros_interfaces/msg/detail/camera_options__rosidl_typesupport_introspection_c.h"
// Member `lidars`
#include "gs_ros_interfaces/msg/lidar_options.h"
// Member `lidars`
#include "gs_ros_interfaces/msg/detail/lidar_options__rosidl_typesupport_introspection_c.h"
// Member `imus`
#include "gs_ros_interfaces/msg/imu_options.h"
// Member `imus`
#include "gs_ros_interfaces/msg/detail/imu_options__rosidl_typesupport_introspection_c.h"
// Member `contacts`
#include "gs_ros_interfaces/msg/contact_options.h"
// Member `contacts`
#include "gs_ros_interfaces/msg/detail/contact_options__rosidl_typesupport_introspection_c.h"
// Member `contact_forces`
#include "gs_ros_interfaces/msg/contact_force_options.h"
// Member `contact_forces`
#include "gs_ros_interfaces/msg/detail/contact_force_options__rosidl_typesupport_introspection_c.h"
// Member `result`
#include "simulation_interfaces/msg/result.h"
// Member `result`
#include "simulation_interfaces/msg/detail/result__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__srv__GetSensorOptions_Response__init(message_memory);
}

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_fini_function(void * message_memory)
{
  gs_ros_interfaces__srv__GetSensorOptions_Response__fini(message_memory);
}

size_t gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Response__cameras(
  const void * untyped_member)
{
  const gs_ros_interfaces__msg__CameraOptions__Sequence * member =
    (const gs_ros_interfaces__msg__CameraOptions__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__cameras(
  const void * untyped_member, size_t index)
{
  const gs_ros_interfaces__msg__CameraOptions__Sequence * member =
    (const gs_ros_interfaces__msg__CameraOptions__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__cameras(
  void * untyped_member, size_t index)
{
  gs_ros_interfaces__msg__CameraOptions__Sequence * member =
    (gs_ros_interfaces__msg__CameraOptions__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Response__cameras(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const gs_ros_interfaces__msg__CameraOptions * item =
    ((const gs_ros_interfaces__msg__CameraOptions *)
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__cameras(untyped_member, index));
  gs_ros_interfaces__msg__CameraOptions * value =
    (gs_ros_interfaces__msg__CameraOptions *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Response__cameras(
  void * untyped_member, size_t index, const void * untyped_value)
{
  gs_ros_interfaces__msg__CameraOptions * item =
    ((gs_ros_interfaces__msg__CameraOptions *)
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__cameras(untyped_member, index));
  const gs_ros_interfaces__msg__CameraOptions * value =
    (const gs_ros_interfaces__msg__CameraOptions *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Response__cameras(
  void * untyped_member, size_t size)
{
  gs_ros_interfaces__msg__CameraOptions__Sequence * member =
    (gs_ros_interfaces__msg__CameraOptions__Sequence *)(untyped_member);
  gs_ros_interfaces__msg__CameraOptions__Sequence__fini(member);
  return gs_ros_interfaces__msg__CameraOptions__Sequence__init(member, size);
}

size_t gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Response__lidars(
  const void * untyped_member)
{
  const gs_ros_interfaces__msg__LidarOptions__Sequence * member =
    (const gs_ros_interfaces__msg__LidarOptions__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__lidars(
  const void * untyped_member, size_t index)
{
  const gs_ros_interfaces__msg__LidarOptions__Sequence * member =
    (const gs_ros_interfaces__msg__LidarOptions__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__lidars(
  void * untyped_member, size_t index)
{
  gs_ros_interfaces__msg__LidarOptions__Sequence * member =
    (gs_ros_interfaces__msg__LidarOptions__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Response__lidars(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const gs_ros_interfaces__msg__LidarOptions * item =
    ((const gs_ros_interfaces__msg__LidarOptions *)
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__lidars(untyped_member, index));
  gs_ros_interfaces__msg__LidarOptions * value =
    (gs_ros_interfaces__msg__LidarOptions *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Response__lidars(
  void * untyped_member, size_t index, const void * untyped_value)
{
  gs_ros_interfaces__msg__LidarOptions * item =
    ((gs_ros_interfaces__msg__LidarOptions *)
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__lidars(untyped_member, index));
  const gs_ros_interfaces__msg__LidarOptions * value =
    (const gs_ros_interfaces__msg__LidarOptions *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Response__lidars(
  void * untyped_member, size_t size)
{
  gs_ros_interfaces__msg__LidarOptions__Sequence * member =
    (gs_ros_interfaces__msg__LidarOptions__Sequence *)(untyped_member);
  gs_ros_interfaces__msg__LidarOptions__Sequence__fini(member);
  return gs_ros_interfaces__msg__LidarOptions__Sequence__init(member, size);
}

size_t gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Response__imus(
  const void * untyped_member)
{
  const gs_ros_interfaces__msg__ImuOptions__Sequence * member =
    (const gs_ros_interfaces__msg__ImuOptions__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__imus(
  const void * untyped_member, size_t index)
{
  const gs_ros_interfaces__msg__ImuOptions__Sequence * member =
    (const gs_ros_interfaces__msg__ImuOptions__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__imus(
  void * untyped_member, size_t index)
{
  gs_ros_interfaces__msg__ImuOptions__Sequence * member =
    (gs_ros_interfaces__msg__ImuOptions__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Response__imus(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const gs_ros_interfaces__msg__ImuOptions * item =
    ((const gs_ros_interfaces__msg__ImuOptions *)
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__imus(untyped_member, index));
  gs_ros_interfaces__msg__ImuOptions * value =
    (gs_ros_interfaces__msg__ImuOptions *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Response__imus(
  void * untyped_member, size_t index, const void * untyped_value)
{
  gs_ros_interfaces__msg__ImuOptions * item =
    ((gs_ros_interfaces__msg__ImuOptions *)
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__imus(untyped_member, index));
  const gs_ros_interfaces__msg__ImuOptions * value =
    (const gs_ros_interfaces__msg__ImuOptions *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Response__imus(
  void * untyped_member, size_t size)
{
  gs_ros_interfaces__msg__ImuOptions__Sequence * member =
    (gs_ros_interfaces__msg__ImuOptions__Sequence *)(untyped_member);
  gs_ros_interfaces__msg__ImuOptions__Sequence__fini(member);
  return gs_ros_interfaces__msg__ImuOptions__Sequence__init(member, size);
}

size_t gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Response__contacts(
  const void * untyped_member)
{
  const gs_ros_interfaces__msg__ContactOptions__Sequence * member =
    (const gs_ros_interfaces__msg__ContactOptions__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__contacts(
  const void * untyped_member, size_t index)
{
  const gs_ros_interfaces__msg__ContactOptions__Sequence * member =
    (const gs_ros_interfaces__msg__ContactOptions__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__contacts(
  void * untyped_member, size_t index)
{
  gs_ros_interfaces__msg__ContactOptions__Sequence * member =
    (gs_ros_interfaces__msg__ContactOptions__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Response__contacts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const gs_ros_interfaces__msg__ContactOptions * item =
    ((const gs_ros_interfaces__msg__ContactOptions *)
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__contacts(untyped_member, index));
  gs_ros_interfaces__msg__ContactOptions * value =
    (gs_ros_interfaces__msg__ContactOptions *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Response__contacts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  gs_ros_interfaces__msg__ContactOptions * item =
    ((gs_ros_interfaces__msg__ContactOptions *)
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__contacts(untyped_member, index));
  const gs_ros_interfaces__msg__ContactOptions * value =
    (const gs_ros_interfaces__msg__ContactOptions *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Response__contacts(
  void * untyped_member, size_t size)
{
  gs_ros_interfaces__msg__ContactOptions__Sequence * member =
    (gs_ros_interfaces__msg__ContactOptions__Sequence *)(untyped_member);
  gs_ros_interfaces__msg__ContactOptions__Sequence__fini(member);
  return gs_ros_interfaces__msg__ContactOptions__Sequence__init(member, size);
}

size_t gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Response__contact_forces(
  const void * untyped_member)
{
  const gs_ros_interfaces__msg__ContactForceOptions__Sequence * member =
    (const gs_ros_interfaces__msg__ContactForceOptions__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__contact_forces(
  const void * untyped_member, size_t index)
{
  const gs_ros_interfaces__msg__ContactForceOptions__Sequence * member =
    (const gs_ros_interfaces__msg__ContactForceOptions__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__contact_forces(
  void * untyped_member, size_t index)
{
  gs_ros_interfaces__msg__ContactForceOptions__Sequence * member =
    (gs_ros_interfaces__msg__ContactForceOptions__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Response__contact_forces(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const gs_ros_interfaces__msg__ContactForceOptions * item =
    ((const gs_ros_interfaces__msg__ContactForceOptions *)
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__contact_forces(untyped_member, index));
  gs_ros_interfaces__msg__ContactForceOptions * value =
    (gs_ros_interfaces__msg__ContactForceOptions *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Response__contact_forces(
  void * untyped_member, size_t index, const void * untyped_value)
{
  gs_ros_interfaces__msg__ContactForceOptions * item =
    ((gs_ros_interfaces__msg__ContactForceOptions *)
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__contact_forces(untyped_member, index));
  const gs_ros_interfaces__msg__ContactForceOptions * value =
    (const gs_ros_interfaces__msg__ContactForceOptions *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Response__contact_forces(
  void * untyped_member, size_t size)
{
  gs_ros_interfaces__msg__ContactForceOptions__Sequence * member =
    (gs_ros_interfaces__msg__ContactForceOptions__Sequence *)(untyped_member);
  gs_ros_interfaces__msg__ContactForceOptions__Sequence__fini(member);
  return gs_ros_interfaces__msg__ContactForceOptions__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_member_array[6] = {
  {
    "cameras",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__GetSensorOptions_Response, cameras),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Response__cameras,  // size() function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__cameras,  // get_const(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__cameras,  // get(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Response__cameras,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Response__cameras,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Response__cameras  // resize(index) function pointer
  },
  {
    "lidars",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__GetSensorOptions_Response, lidars),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Response__lidars,  // size() function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__lidars,  // get_const(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__lidars,  // get(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Response__lidars,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Response__lidars,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Response__lidars  // resize(index) function pointer
  },
  {
    "imus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__GetSensorOptions_Response, imus),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Response__imus,  // size() function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__imus,  // get_const(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__imus,  // get(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Response__imus,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Response__imus,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Response__imus  // resize(index) function pointer
  },
  {
    "contacts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__GetSensorOptions_Response, contacts),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Response__contacts,  // size() function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__contacts,  // get_const(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__contacts,  // get(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Response__contacts,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Response__contacts,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Response__contacts  // resize(index) function pointer
  },
  {
    "contact_forces",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__GetSensorOptions_Response, contact_forces),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__size_function__GetSensorOptions_Response__contact_forces,  // size() function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_const_function__GetSensorOptions_Response__contact_forces,  // get_const(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__get_function__GetSensorOptions_Response__contact_forces,  // get(index) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__fetch_function__GetSensorOptions_Response__contact_forces,  // fetch(index, &value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__assign_function__GetSensorOptions_Response__contact_forces,  // assign(index, value) function pointer
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__resize_function__GetSensorOptions_Response__contact_forces  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__srv__GetSensorOptions_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_members = {
  "gs_ros_interfaces__srv",  // message namespace
  "GetSensorOptions_Response",  // message name
  6,  // number of fields
  sizeof(gs_ros_interfaces__srv__GetSensorOptions_Response),
  gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_member_array,  // message members
  gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, GetSensorOptions_Response)() {
  gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, CameraOptions)();
  gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, LidarOptions)();
  gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, ImuOptions)();
  gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, ContactOptions)();
  gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, ContactForceOptions)();
  gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, simulation_interfaces, msg, Result)();
  if (!gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__srv__GetSensorOptions_Response__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/get_sensor_options__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers gs_ros_interfaces__srv__detail__get_sensor_options__rosidl_typesupport_introspection_c__GetSensorOptions_service_members = {
  "gs_ros_interfaces__srv",  // service namespace
  "GetSensorOptions",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // gs_ros_interfaces__srv__detail__get_sensor_options__rosidl_typesupport_introspection_c__GetSensorOptions_Request_message_type_support_handle,
  NULL  // response message
  // gs_ros_interfaces__srv__detail__get_sensor_options__rosidl_typesupport_introspection_c__GetSensorOptions_Response_message_type_support_handle
};

static rosidl_service_type_support_t gs_ros_interfaces__srv__detail__get_sensor_options__rosidl_typesupport_introspection_c__GetSensorOptions_service_type_support_handle = {
  0,
  &gs_ros_interfaces__srv__detail__get_sensor_options__rosidl_typesupport_introspection_c__GetSensorOptions_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, GetSensorOptions_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, GetSensorOptions_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, GetSensorOptions)() {
  if (!gs_ros_interfaces__srv__detail__get_sensor_options__rosidl_typesupport_introspection_c__GetSensorOptions_service_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__srv__detail__get_sensor_options__rosidl_typesupport_introspection_c__GetSensorOptions_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)gs_ros_interfaces__srv__detail__get_sensor_options__rosidl_typesupport_introspection_c__GetSensorOptions_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, GetSensorOptions_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, srv, GetSensorOptions_Response)()->data;
  }

  return &gs_ros_interfaces__srv__detail__get_sensor_options__rosidl_typesupport_introspection_c__GetSensorOptions_service_type_support_handle;
}
