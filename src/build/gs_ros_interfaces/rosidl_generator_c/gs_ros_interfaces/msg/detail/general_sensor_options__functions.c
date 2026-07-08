// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/GeneralSensorOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/general_sensor_options__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `sensor_type`
#include "rosidl_runtime_c/string_functions.h"

bool
gs_ros_interfaces__msg__GeneralSensorOptions__init(gs_ros_interfaces__msg__GeneralSensorOptions * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    gs_ros_interfaces__msg__GeneralSensorOptions__fini(msg);
    return false;
  }
  // sensor_type
  if (!rosidl_runtime_c__String__init(&msg->sensor_type)) {
    gs_ros_interfaces__msg__GeneralSensorOptions__fini(msg);
    return false;
  }
  // delay
  // update_ground_truth_only
  // draw_debug
  return true;
}

void
gs_ros_interfaces__msg__GeneralSensorOptions__fini(gs_ros_interfaces__msg__GeneralSensorOptions * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // sensor_type
  rosidl_runtime_c__String__fini(&msg->sensor_type);
  // delay
  // update_ground_truth_only
  // draw_debug
}

bool
gs_ros_interfaces__msg__GeneralSensorOptions__are_equal(const gs_ros_interfaces__msg__GeneralSensorOptions * lhs, const gs_ros_interfaces__msg__GeneralSensorOptions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // sensor_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->sensor_type), &(rhs->sensor_type)))
  {
    return false;
  }
  // delay
  if (lhs->delay != rhs->delay) {
    return false;
  }
  // update_ground_truth_only
  if (lhs->update_ground_truth_only != rhs->update_ground_truth_only) {
    return false;
  }
  // draw_debug
  if (lhs->draw_debug != rhs->draw_debug) {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__msg__GeneralSensorOptions__copy(
  const gs_ros_interfaces__msg__GeneralSensorOptions * input,
  gs_ros_interfaces__msg__GeneralSensorOptions * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // sensor_type
  if (!rosidl_runtime_c__String__copy(
      &(input->sensor_type), &(output->sensor_type)))
  {
    return false;
  }
  // delay
  output->delay = input->delay;
  // update_ground_truth_only
  output->update_ground_truth_only = input->update_ground_truth_only;
  // draw_debug
  output->draw_debug = input->draw_debug;
  return true;
}

gs_ros_interfaces__msg__GeneralSensorOptions *
gs_ros_interfaces__msg__GeneralSensorOptions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__GeneralSensorOptions * msg = (gs_ros_interfaces__msg__GeneralSensorOptions *)allocator.allocate(sizeof(gs_ros_interfaces__msg__GeneralSensorOptions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__GeneralSensorOptions));
  bool success = gs_ros_interfaces__msg__GeneralSensorOptions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__GeneralSensorOptions__destroy(gs_ros_interfaces__msg__GeneralSensorOptions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__GeneralSensorOptions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__init(gs_ros_interfaces__msg__GeneralSensorOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__GeneralSensorOptions * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__GeneralSensorOptions *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__GeneralSensorOptions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__GeneralSensorOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__GeneralSensorOptions__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__fini(gs_ros_interfaces__msg__GeneralSensorOptions__Sequence * array)
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
      gs_ros_interfaces__msg__GeneralSensorOptions__fini(&array->data[i]);
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

gs_ros_interfaces__msg__GeneralSensorOptions__Sequence *
gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__GeneralSensorOptions__Sequence * array = (gs_ros_interfaces__msg__GeneralSensorOptions__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__GeneralSensorOptions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__destroy(gs_ros_interfaces__msg__GeneralSensorOptions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__are_equal(const gs_ros_interfaces__msg__GeneralSensorOptions__Sequence * lhs, const gs_ros_interfaces__msg__GeneralSensorOptions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__GeneralSensorOptions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__GeneralSensorOptions__Sequence__copy(
  const gs_ros_interfaces__msg__GeneralSensorOptions__Sequence * input,
  gs_ros_interfaces__msg__GeneralSensorOptions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__GeneralSensorOptions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__GeneralSensorOptions * data =
      (gs_ros_interfaces__msg__GeneralSensorOptions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__GeneralSensorOptions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__GeneralSensorOptions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__GeneralSensorOptions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
