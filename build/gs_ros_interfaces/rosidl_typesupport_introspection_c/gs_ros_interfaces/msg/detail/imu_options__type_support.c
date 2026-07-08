// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from gs_ros_interfaces:msg/ImuOptions.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "gs_ros_interfaces/msg/detail/imu_options__rosidl_typesupport_introspection_c.h"
#include "gs_ros_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "gs_ros_interfaces/msg/detail/imu_options__functions.h"
#include "gs_ros_interfaces/msg/detail/imu_options__struct.h"


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
// Member `noisy_options`
#include "gs_ros_interfaces/msg/noisy_sensor_options.h"
// Member `noisy_options`
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__rosidl_typesupport_introspection_c.h"
// Member `acc_cross_axis_coupling`
// Member `acc_bias`
// Member `acc_noise`
// Member `acc_random_walk`
// Member `gyro_cross_axis_coupling`
// Member `gyro_bias`
// Member `gyro_noise`
// Member `gyro_random_walk`
// Member `debug_acc_color`
// Member `debug_gyro_color`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  gs_ros_interfaces__msg__ImuOptions__init(message_memory);
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_fini_function(void * message_memory)
{
  gs_ros_interfaces__msg__ImuOptions__fini(message_memory);
}

size_t gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__acc_cross_axis_coupling(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_cross_axis_coupling(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_cross_axis_coupling(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__acc_cross_axis_coupling(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_cross_axis_coupling(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__acc_cross_axis_coupling(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_cross_axis_coupling(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__acc_cross_axis_coupling(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__acc_bias(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_bias(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_bias(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__acc_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_bias(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__acc_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_bias(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__acc_bias(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__acc_noise(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_noise(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_noise(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__acc_noise(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_noise(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__acc_noise(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_noise(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__acc_noise(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__acc_random_walk(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_random_walk(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_random_walk(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__acc_random_walk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_random_walk(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__acc_random_walk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_random_walk(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__acc_random_walk(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__gyro_cross_axis_coupling(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_cross_axis_coupling(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_cross_axis_coupling(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__gyro_cross_axis_coupling(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_cross_axis_coupling(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__gyro_cross_axis_coupling(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_cross_axis_coupling(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__gyro_cross_axis_coupling(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__gyro_bias(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_bias(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_bias(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__gyro_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_bias(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__gyro_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_bias(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__gyro_bias(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__gyro_noise(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_noise(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_noise(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__gyro_noise(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_noise(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__gyro_noise(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_noise(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__gyro_noise(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__gyro_random_walk(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_random_walk(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_random_walk(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__gyro_random_walk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_random_walk(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__gyro_random_walk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_random_walk(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__gyro_random_walk(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__debug_acc_color(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__debug_acc_color(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__debug_acc_color(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__debug_acc_color(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__debug_acc_color(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__debug_acc_color(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__debug_acc_color(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__debug_acc_color(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

size_t gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__debug_gyro_color(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__debug_gyro_color(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__debug_gyro_color(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__debug_gyro_color(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__debug_gyro_color(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__debug_gyro_color(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__debug_gyro_color(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__debug_gyro_color(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_member_array[18] = {
  {
    "options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, options),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces__msg__ImuOptions, ros_options),  // bytes offset in struct
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
    offsetof(gs_ros_interfaces__msg__ImuOptions, rigid_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "noisy_options",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, noisy_options),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, acc_resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acc_cross_axis_coupling",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, acc_cross_axis_coupling),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__acc_cross_axis_coupling,  // size() function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_cross_axis_coupling,  // get_const(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_cross_axis_coupling,  // get(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__acc_cross_axis_coupling,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__acc_cross_axis_coupling,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__acc_cross_axis_coupling  // resize(index) function pointer
  },
  {
    "acc_bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, acc_bias),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__acc_bias,  // size() function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_bias,  // get_const(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_bias,  // get(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__acc_bias,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__acc_bias,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__acc_bias  // resize(index) function pointer
  },
  {
    "acc_noise",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, acc_noise),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__acc_noise,  // size() function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_noise,  // get_const(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_noise,  // get(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__acc_noise,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__acc_noise,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__acc_noise  // resize(index) function pointer
  },
  {
    "acc_random_walk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, acc_random_walk),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__acc_random_walk,  // size() function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__acc_random_walk,  // get_const(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__acc_random_walk,  // get(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__acc_random_walk,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__acc_random_walk,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__acc_random_walk  // resize(index) function pointer
  },
  {
    "gyro_resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, gyro_resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_cross_axis_coupling",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, gyro_cross_axis_coupling),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__gyro_cross_axis_coupling,  // size() function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_cross_axis_coupling,  // get_const(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_cross_axis_coupling,  // get(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__gyro_cross_axis_coupling,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__gyro_cross_axis_coupling,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__gyro_cross_axis_coupling  // resize(index) function pointer
  },
  {
    "gyro_bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, gyro_bias),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__gyro_bias,  // size() function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_bias,  // get_const(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_bias,  // get(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__gyro_bias,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__gyro_bias,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__gyro_bias  // resize(index) function pointer
  },
  {
    "gyro_noise",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, gyro_noise),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__gyro_noise,  // size() function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_noise,  // get_const(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_noise,  // get(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__gyro_noise,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__gyro_noise,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__gyro_noise  // resize(index) function pointer
  },
  {
    "gyro_random_walk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, gyro_random_walk),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__gyro_random_walk,  // size() function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__gyro_random_walk,  // get_const(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__gyro_random_walk,  // get(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__gyro_random_walk,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__gyro_random_walk,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__gyro_random_walk  // resize(index) function pointer
  },
  {
    "debug_acc_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, debug_acc_color),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__debug_acc_color,  // size() function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__debug_acc_color,  // get_const(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__debug_acc_color,  // get(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__debug_acc_color,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__debug_acc_color,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__debug_acc_color  // resize(index) function pointer
  },
  {
    "debug_acc_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, debug_acc_scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "debug_gyro_color",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, debug_gyro_color),  // bytes offset in struct
    NULL,  // default value
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__size_function__ImuOptions__debug_gyro_color,  // size() function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_const_function__ImuOptions__debug_gyro_color,  // get_const(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__get_function__ImuOptions__debug_gyro_color,  // get(index) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__fetch_function__ImuOptions__debug_gyro_color,  // fetch(index, &value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__assign_function__ImuOptions__debug_gyro_color,  // assign(index, value) function pointer
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__resize_function__ImuOptions__debug_gyro_color  // resize(index) function pointer
  },
  {
    "debug_gyro_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gs_ros_interfaces__msg__ImuOptions, debug_gyro_scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_members = {
  "gs_ros_interfaces__msg",  // message namespace
  "ImuOptions",  // message name
  18,  // number of fields
  sizeof(gs_ros_interfaces__msg__ImuOptions),
  gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_member_array,  // message members
  gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_init_function,  // function to initialize message memory (memory has to be allocated)
  gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_type_support_handle = {
  0,
  &gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, ImuOptions)() {
  gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, GeneralSensorOptions)();
  gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, RosSensorOptions)();
  gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, RigidSensorOptions)();
  gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, gs_ros_interfaces, msg, NoisySensorOptions)();
  if (!gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_type_support_handle.typesupport_identifier) {
    gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &gs_ros_interfaces__msg__ImuOptions__rosidl_typesupport_introspection_c__ImuOptions_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
