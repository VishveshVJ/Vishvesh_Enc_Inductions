// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/GridRayCasterPattern.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `size`
// Member `direction`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gs_ros_interfaces__msg__GridRayCasterPattern__init(gs_ros_interfaces__msg__GridRayCasterPattern * msg)
{
  if (!msg) {
    return false;
  }
  // resolution
  // size
  if (!rosidl_runtime_c__float__Sequence__init(&msg->size, 0)) {
    gs_ros_interfaces__msg__GridRayCasterPattern__fini(msg);
    return false;
  }
  // direction
  if (!rosidl_runtime_c__float__Sequence__init(&msg->direction, 0)) {
    gs_ros_interfaces__msg__GridRayCasterPattern__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__msg__GridRayCasterPattern__fini(gs_ros_interfaces__msg__GridRayCasterPattern * msg)
{
  if (!msg) {
    return;
  }
  // resolution
  // size
  rosidl_runtime_c__float__Sequence__fini(&msg->size);
  // direction
  rosidl_runtime_c__float__Sequence__fini(&msg->direction);
}

bool
gs_ros_interfaces__msg__GridRayCasterPattern__are_equal(const gs_ros_interfaces__msg__GridRayCasterPattern * lhs, const gs_ros_interfaces__msg__GridRayCasterPattern * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  // size
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->size), &(rhs->size)))
  {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__msg__GridRayCasterPattern__copy(
  const gs_ros_interfaces__msg__GridRayCasterPattern * input,
  gs_ros_interfaces__msg__GridRayCasterPattern * output)
{
  if (!input || !output) {
    return false;
  }
  // resolution
  output->resolution = input->resolution;
  // size
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->size), &(output->size)))
  {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__msg__GridRayCasterPattern *
gs_ros_interfaces__msg__GridRayCasterPattern__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__GridRayCasterPattern * msg = (gs_ros_interfaces__msg__GridRayCasterPattern *)allocator.allocate(sizeof(gs_ros_interfaces__msg__GridRayCasterPattern), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__GridRayCasterPattern));
  bool success = gs_ros_interfaces__msg__GridRayCasterPattern__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__GridRayCasterPattern__destroy(gs_ros_interfaces__msg__GridRayCasterPattern * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__GridRayCasterPattern__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__init(gs_ros_interfaces__msg__GridRayCasterPattern__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__GridRayCasterPattern * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__GridRayCasterPattern *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__GridRayCasterPattern), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__GridRayCasterPattern__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__GridRayCasterPattern__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__fini(gs_ros_interfaces__msg__GridRayCasterPattern__Sequence * array)
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
      gs_ros_interfaces__msg__GridRayCasterPattern__fini(&array->data[i]);
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

gs_ros_interfaces__msg__GridRayCasterPattern__Sequence *
gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__GridRayCasterPattern__Sequence * array = (gs_ros_interfaces__msg__GridRayCasterPattern__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__GridRayCasterPattern__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__destroy(gs_ros_interfaces__msg__GridRayCasterPattern__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__are_equal(const gs_ros_interfaces__msg__GridRayCasterPattern__Sequence * lhs, const gs_ros_interfaces__msg__GridRayCasterPattern__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__GridRayCasterPattern__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__GridRayCasterPattern__Sequence__copy(
  const gs_ros_interfaces__msg__GridRayCasterPattern__Sequence * input,
  gs_ros_interfaces__msg__GridRayCasterPattern__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__GridRayCasterPattern);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__GridRayCasterPattern * data =
      (gs_ros_interfaces__msg__GridRayCasterPattern *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__GridRayCasterPattern__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__GridRayCasterPattern__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__GridRayCasterPattern__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
