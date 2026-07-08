// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/CameraOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/camera_options__functions.h"

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
// Member `camera_types`
// Member `model`
#include "rosidl_runtime_c/string_functions.h"
// Member `res`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gs_ros_interfaces__msg__CameraOptions__init(gs_ros_interfaces__msg__CameraOptions * msg)
{
  if (!msg) {
    return false;
  }
  // options
  if (!gs_ros_interfaces__msg__GeneralSensorOptions__init(&msg->options)) {
    gs_ros_interfaces__msg__CameraOptions__fini(msg);
    return false;
  }
  // ros_options
  if (!gs_ros_interfaces__msg__RosSensorOptions__init(&msg->ros_options)) {
    gs_ros_interfaces__msg__CameraOptions__fini(msg);
    return false;
  }
  // rigid_options
  if (!gs_ros_interfaces__msg__RigidSensorOptions__init(&msg->rigid_options)) {
    gs_ros_interfaces__msg__CameraOptions__fini(msg);
    return false;
  }
  // camera_types
  if (!rosidl_runtime_c__String__Sequence__init(&msg->camera_types, 0)) {
    gs_ros_interfaces__msg__CameraOptions__fini(msg);
    return false;
  }
  // res
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->res, 0)) {
    gs_ros_interfaces__msg__CameraOptions__fini(msg);
    return false;
  }
  // fov
  // near
  // far
  // aperture
  // denoise
  // spp
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    gs_ros_interfaces__msg__CameraOptions__fini(msg);
    return false;
  }
  // focus_dist
  // gui
  // add_noise
  // noise_mean
  // noise_std
  return true;
}

void
gs_ros_interfaces__msg__CameraOptions__fini(gs_ros_interfaces__msg__CameraOptions * msg)
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
  // camera_types
  rosidl_runtime_c__String__Sequence__fini(&msg->camera_types);
  // res
  rosidl_runtime_c__int32__Sequence__fini(&msg->res);
  // fov
  // near
  // far
  // aperture
  // denoise
  // spp
  // model
  rosidl_runtime_c__String__fini(&msg->model);
  // focus_dist
  // gui
  // add_noise
  // noise_mean
  // noise_std
}

bool
gs_ros_interfaces__msg__CameraOptions__are_equal(const gs_ros_interfaces__msg__CameraOptions * lhs, const gs_ros_interfaces__msg__CameraOptions * rhs)
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
  // camera_types
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->camera_types), &(rhs->camera_types)))
  {
    return false;
  }
  // res
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->res), &(rhs->res)))
  {
    return false;
  }
  // fov
  if (lhs->fov != rhs->fov) {
    return false;
  }
  // near
  if (lhs->near != rhs->near) {
    return false;
  }
  // far
  if (lhs->far != rhs->far) {
    return false;
  }
  // aperture
  if (lhs->aperture != rhs->aperture) {
    return false;
  }
  // denoise
  if (lhs->denoise != rhs->denoise) {
    return false;
  }
  // spp
  if (lhs->spp != rhs->spp) {
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  // focus_dist
  if (lhs->focus_dist != rhs->focus_dist) {
    return false;
  }
  // gui
  if (lhs->gui != rhs->gui) {
    return false;
  }
  // add_noise
  if (lhs->add_noise != rhs->add_noise) {
    return false;
  }
  // noise_mean
  if (lhs->noise_mean != rhs->noise_mean) {
    return false;
  }
  // noise_std
  if (lhs->noise_std != rhs->noise_std) {
    return false;
  }
  return true;
}

bool
gs_ros_interfaces__msg__CameraOptions__copy(
  const gs_ros_interfaces__msg__CameraOptions * input,
  gs_ros_interfaces__msg__CameraOptions * output)
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
  // camera_types
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->camera_types), &(output->camera_types)))
  {
    return false;
  }
  // res
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->res), &(output->res)))
  {
    return false;
  }
  // fov
  output->fov = input->fov;
  // near
  output->near = input->near;
  // far
  output->far = input->far;
  // aperture
  output->aperture = input->aperture;
  // denoise
  output->denoise = input->denoise;
  // spp
  output->spp = input->spp;
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  // focus_dist
  output->focus_dist = input->focus_dist;
  // gui
  output->gui = input->gui;
  // add_noise
  output->add_noise = input->add_noise;
  // noise_mean
  output->noise_mean = input->noise_mean;
  // noise_std
  output->noise_std = input->noise_std;
  return true;
}

gs_ros_interfaces__msg__CameraOptions *
gs_ros_interfaces__msg__CameraOptions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__CameraOptions * msg = (gs_ros_interfaces__msg__CameraOptions *)allocator.allocate(sizeof(gs_ros_interfaces__msg__CameraOptions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__CameraOptions));
  bool success = gs_ros_interfaces__msg__CameraOptions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__CameraOptions__destroy(gs_ros_interfaces__msg__CameraOptions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__CameraOptions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__CameraOptions__Sequence__init(gs_ros_interfaces__msg__CameraOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__CameraOptions * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__CameraOptions *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__CameraOptions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__CameraOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__CameraOptions__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__CameraOptions__Sequence__fini(gs_ros_interfaces__msg__CameraOptions__Sequence * array)
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
      gs_ros_interfaces__msg__CameraOptions__fini(&array->data[i]);
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

gs_ros_interfaces__msg__CameraOptions__Sequence *
gs_ros_interfaces__msg__CameraOptions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__CameraOptions__Sequence * array = (gs_ros_interfaces__msg__CameraOptions__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__CameraOptions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__CameraOptions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__CameraOptions__Sequence__destroy(gs_ros_interfaces__msg__CameraOptions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__CameraOptions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__CameraOptions__Sequence__are_equal(const gs_ros_interfaces__msg__CameraOptions__Sequence * lhs, const gs_ros_interfaces__msg__CameraOptions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__CameraOptions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__CameraOptions__Sequence__copy(
  const gs_ros_interfaces__msg__CameraOptions__Sequence * input,
  gs_ros_interfaces__msg__CameraOptions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__CameraOptions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__CameraOptions * data =
      (gs_ros_interfaces__msg__CameraOptions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__CameraOptions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__CameraOptions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__CameraOptions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
