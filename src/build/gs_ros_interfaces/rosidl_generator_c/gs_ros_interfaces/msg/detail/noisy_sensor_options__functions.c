// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/NoisySensorOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `resolution`
// Member `bias`
// Member `noise`
// Member `random_walk`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gs_ros_interfaces__msg__NoisySensorOptions__init(gs_ros_interfaces__msg__NoisySensorOptions * msg)
{
  if (!msg) {
    return false;
  }
  // resolution
  if (!rosidl_runtime_c__double__Sequence__init(&msg->resolution, 0)) {
    gs_ros_interfaces__msg__NoisySensorOptions__fini(msg);
    return false;
  }
  // bias
  if (!rosidl_runtime_c__double__Sequence__init(&msg->bias, 0)) {
    gs_ros_interfaces__msg__NoisySensorOptions__fini(msg);
    return false;
  }
  // noise
  if (!rosidl_runtime_c__double__Sequence__init(&msg->noise, 0)) {
    gs_ros_interfaces__msg__NoisySensorOptions__fini(msg);
    return false;
  }
  // random_walk
  if (!rosidl_runtime_c__double__Sequence__init(&msg->random_walk, 0)) {
    gs_ros_interfaces__msg__NoisySensorOptions__fini(msg);
    return false;
  }
  // jitter
  // interpolate
  return true;
}

void
gs_ros_interfaces__msg__NoisySensorOptions__fini(gs_ros_interfaces__msg__NoisySensorOptions * msg)
{
  if (!msg) {
    return;
  }
  // resolution
  rosidl_runtime_c__double__Sequence__fini(&msg->resolution);
  // bias
  rosidl_runtime_c__double__Sequence__fini(&msg->bias);
  // noise
  rosidl_runtime_c__double__Sequence__fini(&msg->noise);
  // random_walk
  rosidl_runtime_c__double__Sequence__fini(&msg->random_walk);
  // jitter
  // interpolate
}

bool
gs_ros_interfaces__msg__NoisySensorOptions__are_equal(const gs_ros_interfaces__msg__NoisySensorOptions * lhs, const gs_ros_interfaces__msg__NoisySensorOptions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resolution
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->resolution), &(rhs->resolution)))
  {
    return false;
  }
  // bias
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->bias), &(rhs->bias)))
  {
    return false;
  }
  // noise
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->noise), &(rhs->noise)))
  {
    return false;
  }
  // random_walk
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->random_walk), &(rhs->random_walk)))
  {
    return false;
  }
  // jitter
  if (lhs->jitter != rhs->jitter) {
    return false;
  }
  // interpolate
  if (lhs->interpolate != rhs->interpolate) {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__msg__NoisySensorOptions__copy(
  const gs_ros_interfaces__msg__NoisySensorOptions * input,
  gs_ros_interfaces__msg__NoisySensorOptions * output)
{
  if (!input || !output) {
    return false;
  }
  // resolution
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->resolution), &(output->resolution)))
  {
    return false;
  }
  // bias
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->bias), &(output->bias)))
  {
    return false;
  }
  // noise
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->noise), &(output->noise)))
  {
    return false;
  }
  // random_walk
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->random_walk), &(output->random_walk)))
  {
    return false;
  }
  // jitter
  output->jitter = input->jitter;
  // interpolate
  output->interpolate = input->interpolate;
  return true;
}

gs_ros_interfaces__msg__NoisySensorOptions *
gs_ros_interfaces__msg__NoisySensorOptions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__NoisySensorOptions * msg = (gs_ros_interfaces__msg__NoisySensorOptions *)allocator.allocate(sizeof(gs_ros_interfaces__msg__NoisySensorOptions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__NoisySensorOptions));
  bool success = gs_ros_interfaces__msg__NoisySensorOptions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__NoisySensorOptions__destroy(gs_ros_interfaces__msg__NoisySensorOptions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__NoisySensorOptions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__NoisySensorOptions__Sequence__init(gs_ros_interfaces__msg__NoisySensorOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__NoisySensorOptions * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__NoisySensorOptions *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__NoisySensorOptions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__NoisySensorOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__NoisySensorOptions__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__NoisySensorOptions__Sequence__fini(gs_ros_interfaces__msg__NoisySensorOptions__Sequence * array)
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
      gs_ros_interfaces__msg__NoisySensorOptions__fini(&array->data[i]);
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

gs_ros_interfaces__msg__NoisySensorOptions__Sequence *
gs_ros_interfaces__msg__NoisySensorOptions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__NoisySensorOptions__Sequence * array = (gs_ros_interfaces__msg__NoisySensorOptions__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__NoisySensorOptions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__NoisySensorOptions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__NoisySensorOptions__Sequence__destroy(gs_ros_interfaces__msg__NoisySensorOptions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__NoisySensorOptions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__NoisySensorOptions__Sequence__are_equal(const gs_ros_interfaces__msg__NoisySensorOptions__Sequence * lhs, const gs_ros_interfaces__msg__NoisySensorOptions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__NoisySensorOptions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__NoisySensorOptions__Sequence__copy(
  const gs_ros_interfaces__msg__NoisySensorOptions__Sequence * input,
  gs_ros_interfaces__msg__NoisySensorOptions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__NoisySensorOptions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__NoisySensorOptions * data =
      (gs_ros_interfaces__msg__NoisySensorOptions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__NoisySensorOptions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__NoisySensorOptions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__NoisySensorOptions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
