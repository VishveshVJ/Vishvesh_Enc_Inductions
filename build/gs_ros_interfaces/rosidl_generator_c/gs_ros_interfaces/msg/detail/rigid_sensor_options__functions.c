// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/RigidSensorOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `link`
#include "rosidl_runtime_c/string_functions.h"

bool
gs_ros_interfaces__msg__RigidSensorOptions__init(gs_ros_interfaces__msg__RigidSensorOptions * msg)
{
  if (!msg) {
    return false;
  }
  // link
  if (!rosidl_runtime_c__String__init(&msg->link)) {
    gs_ros_interfaces__msg__RigidSensorOptions__fini(msg);
    return false;
  }
  // pos_offset
  // euler_offset
  return true;
}

void
gs_ros_interfaces__msg__RigidSensorOptions__fini(gs_ros_interfaces__msg__RigidSensorOptions * msg)
{
  if (!msg) {
    return;
  }
  // link
  rosidl_runtime_c__String__fini(&msg->link);
  // pos_offset
  // euler_offset
}

bool
gs_ros_interfaces__msg__RigidSensorOptions__are_equal(const gs_ros_interfaces__msg__RigidSensorOptions * lhs, const gs_ros_interfaces__msg__RigidSensorOptions * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // link
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link), &(rhs->link)))
  {
    return false;
  }
  // pos_offset
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->pos_offset[i] != rhs->pos_offset[i]) {
      return false;
    }
  }
  // euler_offset
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->euler_offset[i] != rhs->euler_offset[i]) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__RigidSensorOptions__copy(
  const gs_ros_interfaces__msg__RigidSensorOptions * input,
  gs_ros_interfaces__msg__RigidSensorOptions * output)
{
  if (!input || !output) {
    return false;
  }
  // link
  if (!rosidl_runtime_c__String__copy(
      &(input->link), &(output->link)))
  {
    return false;
  }
  // pos_offset
  for (size_t i = 0; i < 3; ++i) {
    output->pos_offset[i] = input->pos_offset[i];
  }
  // euler_offset
  for (size_t i = 0; i < 3; ++i) {
    output->euler_offset[i] = input->euler_offset[i];
  }
  return true;
}

gs_ros_interfaces__msg__RigidSensorOptions *
gs_ros_interfaces__msg__RigidSensorOptions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__RigidSensorOptions * msg = (gs_ros_interfaces__msg__RigidSensorOptions *)allocator.allocate(sizeof(gs_ros_interfaces__msg__RigidSensorOptions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__RigidSensorOptions));
  bool success = gs_ros_interfaces__msg__RigidSensorOptions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__RigidSensorOptions__destroy(gs_ros_interfaces__msg__RigidSensorOptions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__RigidSensorOptions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__RigidSensorOptions__Sequence__init(gs_ros_interfaces__msg__RigidSensorOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__RigidSensorOptions * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__RigidSensorOptions *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__RigidSensorOptions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__RigidSensorOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__RigidSensorOptions__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__RigidSensorOptions__Sequence__fini(gs_ros_interfaces__msg__RigidSensorOptions__Sequence * array)
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
      gs_ros_interfaces__msg__RigidSensorOptions__fini(&array->data[i]);
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

gs_ros_interfaces__msg__RigidSensorOptions__Sequence *
gs_ros_interfaces__msg__RigidSensorOptions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__RigidSensorOptions__Sequence * array = (gs_ros_interfaces__msg__RigidSensorOptions__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__RigidSensorOptions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__RigidSensorOptions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__RigidSensorOptions__Sequence__destroy(gs_ros_interfaces__msg__RigidSensorOptions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__RigidSensorOptions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__RigidSensorOptions__Sequence__are_equal(const gs_ros_interfaces__msg__RigidSensorOptions__Sequence * lhs, const gs_ros_interfaces__msg__RigidSensorOptions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__RigidSensorOptions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__RigidSensorOptions__Sequence__copy(
  const gs_ros_interfaces__msg__RigidSensorOptions__Sequence * input,
  gs_ros_interfaces__msg__RigidSensorOptions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__RigidSensorOptions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__RigidSensorOptions * data =
      (gs_ros_interfaces__msg__RigidSensorOptions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__RigidSensorOptions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__RigidSensorOptions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__RigidSensorOptions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
