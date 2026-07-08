// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/ImuOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/imu_options__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `options`
#include "gs_ros_interfaces/msg/detail/general_sensor_options__functions.h"
// Member `ros_options`
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__functions.h"
// Member `rigid_options`
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__functions.h"
// Member `noisy_options`
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__functions.h"
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

bool
gs_ros_interfaces__msg__ImuOptions__init(gs_ros_interfaces__msg__ImuOptions * msg)
{
  if (!msg) {
    return false;
  }
  // options
  if (!gs_ros_interfaces__msg__GeneralSensorOptions__init(&msg->options)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // ros_options
  if (!gs_ros_interfaces__msg__RosSensorOptions__init(&msg->ros_options)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // rigid_options
  if (!gs_ros_interfaces__msg__RigidSensorOptions__init(&msg->rigid_options)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // noisy_options
  if (!gs_ros_interfaces__msg__NoisySensorOptions__init(&msg->noisy_options)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // acc_resolution
  // acc_cross_axis_coupling
  if (!rosidl_runtime_c__float__Sequence__init(&msg->acc_cross_axis_coupling, 0)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // acc_bias
  if (!rosidl_runtime_c__float__Sequence__init(&msg->acc_bias, 0)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // acc_noise
  if (!rosidl_runtime_c__float__Sequence__init(&msg->acc_noise, 0)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // acc_random_walk
  if (!rosidl_runtime_c__float__Sequence__init(&msg->acc_random_walk, 0)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // gyro_resolution
  // gyro_cross_axis_coupling
  if (!rosidl_runtime_c__float__Sequence__init(&msg->gyro_cross_axis_coupling, 0)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // gyro_bias
  if (!rosidl_runtime_c__float__Sequence__init(&msg->gyro_bias, 0)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // gyro_noise
  if (!rosidl_runtime_c__float__Sequence__init(&msg->gyro_noise, 0)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // gyro_random_walk
  if (!rosidl_runtime_c__float__Sequence__init(&msg->gyro_random_walk, 0)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // debug_acc_color
  if (!rosidl_runtime_c__float__Sequence__init(&msg->debug_acc_color, 0)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // debug_acc_scale
  // debug_gyro_color
  if (!rosidl_runtime_c__float__Sequence__init(&msg->debug_gyro_color, 0)) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
    return false;
  }
  // debug_gyro_scale
  return true;
}

void
gs_ros_interfaces__msg__ImuOptions__fini(gs_ros_interfaces__msg__ImuOptions * msg)
{
  if (!msg) {
    return;
  }
  // options
  gs_ros_interfaces__msg__GeneralSensorOptions__fini(&msg->options);
  // ros_options
  gs_ros_interfaces__msg__RosSensorOptions__fini(&msg->ros_options);
  // rigid_options
  gs_ros_interfaces__msg__RigidSensorOptions__fini(&msg->rigid_options);
  // noisy_options
  gs_ros_interfaces__msg__NoisySensorOptions__fini(&msg->noisy_options);
  // acc_resolution
  // acc_cross_axis_coupling
  rosidl_runtime_c__float__Sequence__fini(&msg->acc_cross_axis_coupling);
  // acc_bias
  rosidl_runtime_c__float__Sequence__fini(&msg->acc_bias);
  // acc_noise
  rosidl_runtime_c__float__Sequence__fini(&msg->acc_noise);
  // acc_random_walk
  rosidl_runtime_c__float__Sequence__fini(&msg->acc_random_walk);
  // gyro_resolution
  // gyro_cross_axis_coupling
  rosidl_runtime_c__float__Sequence__fini(&msg->gyro_cross_axis_coupling);
  // gyro_bias
  rosidl_runtime_c__float__Sequence__fini(&msg->gyro_bias);
  // gyro_noise
  rosidl_runtime_c__float__Sequence__fini(&msg->gyro_noise);
  // gyro_random_walk
  rosidl_runtime_c__float__Sequence__fini(&msg->gyro_random_walk);
  // debug_acc_color
  rosidl_runtime_c__float__Sequence__fini(&msg->debug_acc_color);
  // debug_acc_scale
  // debug_gyro_color
  rosidl_runtime_c__float__Sequence__fini(&msg->debug_gyro_color);
  // debug_gyro_scale
}

bool
gs_ros_interfaces__msg__ImuOptions__are_equal(const gs_ros_interfaces__msg__ImuOptions * lhs, const gs_ros_interfaces__msg__ImuOptions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // options
  if (!gs_ros_interfaces__msg__GeneralSensorOptions__are_equal(
      &(lhs->options), &(rhs->options)))
  {
    return false;
  }
  // ros_options
  if (!gs_ros_interfaces__msg__RosSensorOptions__are_equal(
      &(lhs->ros_options), &(rhs->ros_options)))
  {
    return false;
  }
  // rigid_options
  if (!gs_ros_interfaces__msg__RigidSensorOptions__are_equal(
      &(lhs->rigid_options), &(rhs->rigid_options)))
  {
    return false;
  }
  // noisy_options
  if (!gs_ros_interfaces__msg__NoisySensorOptions__are_equal(
      &(lhs->noisy_options), &(rhs->noisy_options)))
  {
    return false;
  }
  // acc_resolution
  if (lhs->acc_resolution != rhs->acc_resolution) {
    return false;
  }
  // acc_cross_axis_coupling
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->acc_cross_axis_coupling), &(rhs->acc_cross_axis_coupling)))
  {
    return false;
  }
  // acc_bias
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->acc_bias), &(rhs->acc_bias)))
  {
    return false;
  }
  // acc_noise
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->acc_noise), &(rhs->acc_noise)))
  {
    return false;
  }
  // acc_random_walk
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->acc_random_walk), &(rhs->acc_random_walk)))
  {
    return false;
  }
  // gyro_resolution
  if (lhs->gyro_resolution != rhs->gyro_resolution) {
    return false;
  }
  // gyro_cross_axis_coupling
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->gyro_cross_axis_coupling), &(rhs->gyro_cross_axis_coupling)))
  {
    return false;
  }
  // gyro_bias
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->gyro_bias), &(rhs->gyro_bias)))
  {
    return false;
  }
  // gyro_noise
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->gyro_noise), &(rhs->gyro_noise)))
  {
    return false;
  }
  // gyro_random_walk
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->gyro_random_walk), &(rhs->gyro_random_walk)))
  {
    return false;
  }
  // debug_acc_color
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->debug_acc_color), &(rhs->debug_acc_color)))
  {
    return false;
  }
  // debug_acc_scale
  if (lhs->debug_acc_scale != rhs->debug_acc_scale) {
    return false;
  }
  // debug_gyro_color
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->debug_gyro_color), &(rhs->debug_gyro_color)))
  {
    return false;
  }
  // debug_gyro_scale
  if (lhs->debug_gyro_scale != rhs->debug_gyro_scale) {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__msg__ImuOptions__copy(
  const gs_ros_interfaces__msg__ImuOptions * input,
  gs_ros_interfaces__msg__ImuOptions * output)
{
  if (!input || !output) {
    return false;
  }
  // options
  if (!gs_ros_interfaces__msg__GeneralSensorOptions__copy(
      &(input->options), &(output->options)))
  {
    return false;
  }
  // ros_options
  if (!gs_ros_interfaces__msg__RosSensorOptions__copy(
      &(input->ros_options), &(output->ros_options)))
  {
    return false;
  }
  // rigid_options
  if (!gs_ros_interfaces__msg__RigidSensorOptions__copy(
      &(input->rigid_options), &(output->rigid_options)))
  {
    return false;
  }
  // noisy_options
  if (!gs_ros_interfaces__msg__NoisySensorOptions__copy(
      &(input->noisy_options), &(output->noisy_options)))
  {
    return false;
  }
  // acc_resolution
  output->acc_resolution = input->acc_resolution;
  // acc_cross_axis_coupling
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->acc_cross_axis_coupling), &(output->acc_cross_axis_coupling)))
  {
    return false;
  }
  // acc_bias
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->acc_bias), &(output->acc_bias)))
  {
    return false;
  }
  // acc_noise
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->acc_noise), &(output->acc_noise)))
  {
    return false;
  }
  // acc_random_walk
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->acc_random_walk), &(output->acc_random_walk)))
  {
    return false;
  }
  // gyro_resolution
  output->gyro_resolution = input->gyro_resolution;
  // gyro_cross_axis_coupling
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->gyro_cross_axis_coupling), &(output->gyro_cross_axis_coupling)))
  {
    return false;
  }
  // gyro_bias
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->gyro_bias), &(output->gyro_bias)))
  {
    return false;
  }
  // gyro_noise
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->gyro_noise), &(output->gyro_noise)))
  {
    return false;
  }
  // gyro_random_walk
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->gyro_random_walk), &(output->gyro_random_walk)))
  {
    return false;
  }
  // debug_acc_color
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->debug_acc_color), &(output->debug_acc_color)))
  {
    return false;
  }
  // debug_acc_scale
  output->debug_acc_scale = input->debug_acc_scale;
  // debug_gyro_color
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->debug_gyro_color), &(output->debug_gyro_color)))
  {
    return false;
  }
  // debug_gyro_scale
  output->debug_gyro_scale = input->debug_gyro_scale;
  return true;
}

gs_ros_interfaces__msg__ImuOptions *
gs_ros_interfaces__msg__ImuOptions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__ImuOptions * msg = (gs_ros_interfaces__msg__ImuOptions *)allocator.allocate(sizeof(gs_ros_interfaces__msg__ImuOptions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__ImuOptions));
  bool success = gs_ros_interfaces__msg__ImuOptions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__ImuOptions__destroy(gs_ros_interfaces__msg__ImuOptions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__ImuOptions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__ImuOptions__Sequence__init(gs_ros_interfaces__msg__ImuOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__ImuOptions * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__ImuOptions *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__ImuOptions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__ImuOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__ImuOptions__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
gs_ros_interfaces__msg__ImuOptions__Sequence__fini(gs_ros_interfaces__msg__ImuOptions__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      gs_ros_interfaces__msg__ImuOptions__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

gs_ros_interfaces__msg__ImuOptions__Sequence *
gs_ros_interfaces__msg__ImuOptions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__ImuOptions__Sequence * array = (gs_ros_interfaces__msg__ImuOptions__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__ImuOptions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__ImuOptions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__ImuOptions__Sequence__destroy(gs_ros_interfaces__msg__ImuOptions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__ImuOptions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__ImuOptions__Sequence__are_equal(const gs_ros_interfaces__msg__ImuOptions__Sequence * lhs, const gs_ros_interfaces__msg__ImuOptions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__ImuOptions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__ImuOptions__Sequence__copy(
  const gs_ros_interfaces__msg__ImuOptions__Sequence * input,
  gs_ros_interfaces__msg__ImuOptions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__ImuOptions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__ImuOptions * data =
      (gs_ros_interfaces__msg__ImuOptions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__ImuOptions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__ImuOptions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__ImuOptions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
