// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:msg/LidarOptions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/msg/detail/lidar_options__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/msg/detail/lidar_options__functions.h"
#include "gs_ros_interfaces/msg/detail/lidar_options__struct.h"


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
// Member `grid_pattern_options`
#include "gs_ros_interfaces/msg/grid_ray_caster_pattern.h"
// Member `grid_pattern_options`
#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__rosidl_typesupport_introspection_c.h"
// Member `spherical_pattern_options`
#include "gs_ros_interfaces/msg/spherical_ray_caster_pattern.h"
// Member `spherical_pattern_options`
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__rosidl_typesupport_introspection_c.h"
// Member `depth_camera_pattern_options`
#include "gs_ros_interfaces/msg/depth_camera_ray_caster_pattern.h"
// Member `depth_camera_pattern_options`
#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__rosidl_typesupport_introspection_c.h"
// Member `ray_start_color`
// Member `ray_hit_color`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__msg__LidarOptions__init(message_memory);
}

void gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_fini_function(void * message_memory)
{
  gs_ros_interfaces__msg__LidarOptions__fini(message_memory);
}

size_t gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__size_function__LidarOptions__ray_start_color(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_const_function__LidarOptions__ray_start_color(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_function__LidarOptions__ray_start_color(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__fetch_function__LidarOptions__ray_start_color(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_const_function__LidarOptions__ray_start_color(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__assign_function__LidarOptions__ray_start_color(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_function__LidarOptions__ray_start_color(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__resize_function__LidarOptions__ray_start_color(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__size_function__LidarOptions__ray_hit_color(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_const_function__LidarOptions__ray_hit_color(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_function__LidarOptions__ray_hit_color(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__fetch_function__LidarOptions__ray_hit_color(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_const_function__LidarOptions__ray_hit_color(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__assign_function__LidarOptions__ray_hit_color(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_function__LidarOptions__ray_hit_color(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__resize_function__LidarOptions__ray_hit_color(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_member_array[16] = {
  {
    "options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, options),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces__msg__LidarOptions, ros_options),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces__msg__LidarOptions, rigid_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grid_pattern_options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, grid_pattern_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spherical_pattern_options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, spherical_pattern_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth_camera_pattern_options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, depth_camera_pattern_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, min_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, max_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "no_hit_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, no_hit_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "return_points_in_world_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, return_points_in_world_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "draw_point_radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, draw_point_radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ray_start_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, ray_start_color),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__size_function__LidarOptions__ray_start_color,  // size() function pointer
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_const_function__LidarOptions__ray_start_color,  // get_const(index) function pointer
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_function__LidarOptions__ray_start_color,  // get(index) function pointer
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__fetch_function__LidarOptions__ray_start_color,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__assign_function__LidarOptions__ray_start_color,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__resize_function__LidarOptions__ray_start_color  // resize(index) function pointer
  },
  {
    "ray_hit_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, ray_hit_color),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__size_function__LidarOptions__ray_hit_color,  // size() function pointer
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_const_function__LidarOptions__ray_hit_color,  // get_const(index) function pointer
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__get_function__LidarOptions__ray_hit_color,  // get(index) function pointer
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__fetch_function__LidarOptions__ray_hit_color,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__assign_function__LidarOptions__ray_hit_color,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__resize_function__LidarOptions__ray_hit_color  // resize(index) function pointer
  },
  {
    "add_noise",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__LidarOptions, add_noise),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces__msg__LidarOptions, noise_mean),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces__msg__LidarOptions, noise_std),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_members = {
  "gs_ros_interfaces__msg",  // message namespace
  "LidarOptions",  // message name
  16,  // number of fields
  sizeof(gs_ros_interfaces__msg__LidarOptions),
  gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_member_array,  // message members
  gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_type_support_handle = {
  0,
  &gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, LidarOptions)() {
  gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, GeneralSensorOptions)();
  gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, RosSensorOptions)();
  gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, RigidSensorOptions)();
  gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, GridRayCasterPattern)();
  gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, SphericalRayCasterPattern)();
  gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, DepthCameraRayCasterPattern)();
  if (!gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__msg__LidarOptions__rosidl_typesupport_introspection_c__LidarOptions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
