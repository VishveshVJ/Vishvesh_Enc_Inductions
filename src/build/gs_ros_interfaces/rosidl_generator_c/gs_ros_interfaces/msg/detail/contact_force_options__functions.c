// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/ContactForceOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/contact_force_options__functions.h"

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
// Member `min_force`
// Member `max_force`
// Member `debug_color`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gs_ros_interfaces__msg__ContactForceOptions__init(gs_ros_interfaces__msg__ContactForceOptions * msg)
{
  if (!msg) {
    return false;
  }
  // options
  if (!gs_ros_interfaces__msg__GeneralSensorOptions__init(&msg->options)) {
    gs_ros_interfaces__msg__ContactForceOptions__fini(msg);
    return false;
  }
  // ros_options
  if (!gs_ros_interfaces__msg__RosSensorOptions__init(&msg->ros_options)) {
    gs_ros_interfaces__msg__ContactForceOptions__fini(msg);
    return false;
  }
  // rigid_options
  if (!gs_ros_interfaces__msg__RigidSensorOptions__init(&msg->rigid_options)) {
    gs_ros_interfaces__msg__ContactForceOptions__fini(msg);
    return false;
  }
  // noisy_options
  if (!gs_ros_interfaces__msg__NoisySensorOptions__init(&msg->noisy_options)) {
    gs_ros_interfaces__msg__ContactForceOptions__fini(msg);
    return false;
  }
  // min_force
  if (!rosidl_runtime_c__float__Sequence__init(&msg->min_force, 0)) {
    gs_ros_interfaces__msg__ContactForceOptions__fini(msg);
    return false;
  }
  // max_force
  if (!rosidl_runtime_c__float__Sequence__init(&msg->max_force, 0)) {
    gs_ros_interfaces__msg__ContactForceOptions__fini(msg);
    return false;
  }
  // debug_color
  if (!rosidl_runtime_c__float__Sequence__init(&msg->debug_color, 0)) {
    gs_ros_interfaces__msg__ContactForceOptions__fini(msg);
    return false;
  }
  // debug_scale
  return true;
}

void
gs_ros_interfaces__msg__ContactForceOptions__fini(gs_ros_interfaces__msg__ContactForceOptions * msg)
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
  // min_force
  rosidl_runtime_c__float__Sequence__fini(&msg->min_force);
  // max_force
  rosidl_runtime_c__float__Sequence__fini(&msg->max_force);
  // debug_color
  rosidl_runtime_c__float__Sequence__fini(&msg->debug_color);
  // debug_scale
}

bool
gs_ros_interfaces__msg__ContactForceOptions__are_equal(const gs_ros_interfaces__msg__ContactForceOptions * lhs, const gs_ros_interfaces__msg__ContactForceOptions * rhs)
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
  // min_force
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->min_force), &(rhs->min_force)))
  {
    return false;
  }
  // max_force
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->max_force), &(rhs->max_force)))
  {
    return false;
  }
  // debug_color
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->debug_color), &(rhs->debug_color)))
  {
    return false;
  }
  // debug_scale
  if (lhs->debug_scale != rhs->debug_scale) {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__msg__ContactForceOptions__copy(
  const gs_ros_interfaces__msg__ContactForceOptions * input,
  gs_ros_interfaces__msg__ContactForceOptions * output)
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
  // min_force
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->min_force), &(output->min_force)))
  {
    return false;
  }
  // max_force
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->max_force), &(output->max_force)))
  {
    return false;
  }
  // debug_color
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->debug_color), &(output->debug_color)))
  {
    return false;
  }
  // debug_scale
  output->debug_scale = input->debug_scale;
  return true;
}

gs_ros_interfaces__msg__ContactForceOptions *
gs_ros_interfaces__msg__ContactForceOptions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__ContactForceOptions * msg = (gs_ros_interfaces__msg__ContactForceOptions *)allocator.allocate(sizeof(gs_ros_interfaces__msg__ContactForceOptions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__ContactForceOptions));
  bool success = gs_ros_interfaces__msg__ContactForceOptions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__ContactForceOptions__destroy(gs_ros_interfaces__msg__ContactForceOptions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__ContactForceOptions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__ContactForceOptions__Sequence__init(gs_ros_interfaces__msg__ContactForceOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__ContactForceOptions * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__ContactForceOptions *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__ContactForceOptions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__ContactForceOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__ContactForceOptions__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__ContactForceOptions__Sequence__fini(gs_ros_interfaces__msg__ContactForceOptions__Sequence * array)
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
      gs_ros_interfaces__msg__ContactForceOptions__fini(&array->data[i]);
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

gs_ros_interfaces__msg__ContactForceOptions__Sequence *
gs_ros_interfaces__msg__ContactForceOptions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__ContactForceOptions__Sequence * array = (gs_ros_interfaces__msg__ContactForceOptions__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__ContactForceOptions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__ContactForceOptions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__ContactForceOptions__Sequence__destroy(gs_ros_interfaces__msg__ContactForceOptions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__ContactForceOptions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__ContactForceOptions__Sequence__are_equal(const gs_ros_interfaces__msg__ContactForceOptions__Sequence * lhs, const gs_ros_interfaces__msg__ContactForceOptions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__ContactForceOptions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__ContactForceOptions__Sequence__copy(
  const gs_ros_interfaces__msg__ContactForceOptions__Sequence * input,
  gs_ros_interfaces__msg__ContactForceOptions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__ContactForceOptions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__ContactForceOptions * data =
      (gs_ros_interfaces__msg__ContactForceOptions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__ContactForceOptions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__ContactForceOptions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__ContactForceOptions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
