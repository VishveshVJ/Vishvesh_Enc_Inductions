// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/SphericalRayCasterPattern.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fov`
// Member `n_points`
// Member `angular_resolution`
// Member `angles`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gs_ros_interfaces__msg__SphericalRayCasterPattern__init(gs_ros_interfaces__msg__SphericalRayCasterPattern * msg)
{
  if (!msg) {
    return false;
  }
  // fov
  if (!rosidl_runtime_c__float__Sequence__init(&msg->fov, 0)) {
    gs_ros_interfaces__msg__SphericalRayCasterPattern__fini(msg);
    return false;
  }
  // n_points
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->n_points, 0)) {
    gs_ros_interfaces__msg__SphericalRayCasterPattern__fini(msg);
    return false;
  }
  // angular_resolution
  if (!rosidl_runtime_c__float__Sequence__init(&msg->angular_resolution, 0)) {
    gs_ros_interfaces__msg__SphericalRayCasterPattern__fini(msg);
    return false;
  }
  // angles
  if (!rosidl_runtime_c__float__Sequence__init(&msg->angles, 0)) {
    gs_ros_interfaces__msg__SphericalRayCasterPattern__fini(msg);
    return false;
  }
  return true;
}

void
gs_ros_interfaces__msg__SphericalRayCasterPattern__fini(gs_ros_interfaces__msg__SphericalRayCasterPattern * msg)
{
  if (!msg) {
    return;
  }
  // fov
  rosidl_runtime_c__float__Sequence__fini(&msg->fov);
  // n_points
  rosidl_runtime_c__int32__Sequence__fini(&msg->n_points);
  // angular_resolution
  rosidl_runtime_c__float__Sequence__fini(&msg->angular_resolution);
  // angles
  rosidl_runtime_c__float__Sequence__fini(&msg->angles);
}

bool
gs_ros_interfaces__msg__SphericalRayCasterPattern__are_equal(const gs_ros_interfaces__msg__SphericalRayCasterPattern * lhs, const gs_ros_interfaces__msg__SphericalRayCasterPattern * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fov
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->fov), &(rhs->fov)))
  {
    return false;
  }
  // n_points
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->n_points), &(rhs->n_points)))
  {
    return false;
  }
  // angular_resolution
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->angular_resolution), &(rhs->angular_resolution)))
  {
    return false;
  }
  // angles
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->angles), &(rhs->angles)))
  {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__msg__SphericalRayCasterPattern__copy(
  const gs_ros_interfaces__msg__SphericalRayCasterPattern * input,
  gs_ros_interfaces__msg__SphericalRayCasterPattern * output)
{
  if (!input || !output) {
    return false;
  }
  // fov
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->fov), &(output->fov)))
  {
    return false;
  }
  // n_points
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->n_points), &(output->n_points)))
  {
    return false;
  }
  // angular_resolution
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->angular_resolution), &(output->angular_resolution)))
  {
    return false;
  }
  // angles
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->angles), &(output->angles)))
  {
    return false;
  }
  return true;
}

gs_ros_interfaces__msg__SphericalRayCasterPattern *
gs_ros_interfaces__msg__SphericalRayCasterPattern__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__SphericalRayCasterPattern * msg = (gs_ros_interfaces__msg__SphericalRayCasterPattern *)allocator.allocate(sizeof(gs_ros_interfaces__msg__SphericalRayCasterPattern), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__SphericalRayCasterPattern));
  bool success = gs_ros_interfaces__msg__SphericalRayCasterPattern__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__SphericalRayCasterPattern__destroy(gs_ros_interfaces__msg__SphericalRayCasterPattern * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__SphericalRayCasterPattern__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__init(gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__SphericalRayCasterPattern * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__SphericalRayCasterPattern *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__SphericalRayCasterPattern), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__SphericalRayCasterPattern__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__SphericalRayCasterPattern__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__fini(gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence * array)
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
      gs_ros_interfaces__msg__SphericalRayCasterPattern__fini(&array->data[i]);
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

gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence *
gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence * array = (gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__destroy(gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__are_equal(const gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence * lhs, const gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__SphericalRayCasterPattern__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence__copy(
  const gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence * input,
  gs_ros_interfaces__msg__SphericalRayCasterPattern__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__SphericalRayCasterPattern);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__SphericalRayCasterPattern * data =
      (gs_ros_interfaces__msg__SphericalRayCasterPattern *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__SphericalRayCasterPattern__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__SphericalRayCasterPattern__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__SphericalRayCasterPattern__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
