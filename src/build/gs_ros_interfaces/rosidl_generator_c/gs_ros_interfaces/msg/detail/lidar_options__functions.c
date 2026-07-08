// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from gs_ros_interfaces:msg/LidarOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/lidar_options__functions.h"

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
// Member `grid_pattern_options`
#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__functions.h"
// Member `spherical_pattern_options`
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__functions.h"
// Member `depth_camera_pattern_options`
#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__functions.h"
// Member `ray_start_color`
// Member `ray_hit_color`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
gs_ros_interfaces__msg__LidarOptions__init(gs_ros_interfaces__msg__LidarOptions * msg)
{
  if (!msg) {
    return false;
  }
  // options
  if (!gs_ros_interfaces__msg__GeneralSensorOptions__init(&msg->options)) {
    gs_ros_interfaces__msg__LidarOptions__fini(msg);
    return false;
  }
  // ros_options
  if (!gs_ros_interfaces__msg__RosSensorOptions__init(&msg->ros_options)) {
    gs_ros_interfaces__msg__LidarOptions__fini(msg);
    return false;
  }
  // rigid_options
  if (!gs_ros_interfaces__msg__RigidSensorOptions__init(&msg->rigid_options)) {
    gs_ros_interfaces__msg__LidarOptions__fini(msg);
    return false;
  }
  // grid_pattern_options
  if (!gs_ros_interfaces__msg__GridRayCasterPattern__init(&msg->grid_pattern_options)) {
    gs_ros_interfaces__msg__LidarOptions__fini(msg);
    return false;
  }
  // spherical_pattern_options
  if (!gs_ros_interfaces__msg__SphericalRayCasterPattern__init(&msg->spherical_pattern_options)) {
    gs_ros_interfaces__msg__LidarOptions__fini(msg);
    return false;
  }
  // depth_camera_pattern_options
  if (!gs_ros_interfaces__msg__DepthCameraRayCasterPattern__init(&msg->depth_camera_pattern_options)) {
    gs_ros_interfaces__msg__LidarOptions__fini(msg);
    return false;
  }
  // min_range
  // max_range
  // no_hit_value
  // return_points_in_world_frame
  // draw_point_radius
  // ray_start_color
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ray_start_color, 0)) {
    gs_ros_interfaces__msg__LidarOptions__fini(msg);
    return false;
  }
  // ray_hit_color
  if (!rosidl_runtime_c__float__Sequence__init(&msg->ray_hit_color, 0)) {
    gs_ros_interfaces__msg__LidarOptions__fini(msg);
    return false;
  }
  // add_noise
  // noise_mean
  // noise_std
  return true;
}

void
gs_ros_interfaces__msg__LidarOptions__fini(gs_ros_interfaces__msg__LidarOptions * msg)
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
  // grid_pattern_options
  gs_ros_interfaces__msg__GridRayCasterPattern__fini(&msg->grid_pattern_options);
  // spherical_pattern_options
  gs_ros_interfaces__msg__SphericalRayCasterPattern__fini(&msg->spherical_pattern_options);
  // depth_camera_pattern_options
  gs_ros_interfaces__msg__DepthCameraRayCasterPattern__fini(&msg->depth_camera_pattern_options);
  // min_range
  // max_range
  // no_hit_value
  // return_points_in_world_frame
  // draw_point_radius
  // ray_start_color
  rosidl_runtime_c__float__Sequence__fini(&msg->ray_start_color);
  // ray_hit_color
  rosidl_runtime_c__float__Sequence__fini(&msg->ray_hit_color);
  // add_noise
  // noise_mean
  // noise_std
}

bool
gs_ros_interfaces__msg__LidarOptions__are_equal(const gs_ros_interfaces__msg__LidarOptions * lhs, const gs_ros_interfaces__msg__LidarOptions * rhs)
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
  // grid_pattern_options
  if (!gs_ros_interfaces__msg__GridRayCasterPattern__are_equal(
      &(lhs->grid_pattern_options), &(rhs->grid_pattern_options)))
  {
    return false;
  }
  // spherical_pattern_options
  if (!gs_ros_interfaces__msg__SphericalRayCasterPattern__are_equal(
      &(lhs->spherical_pattern_options), &(rhs->spherical_pattern_options)))
  {
    return false;
  }
  // depth_camera_pattern_options
  if (!gs_ros_interfaces__msg__DepthCameraRayCasterPattern__are_equal(
      &(lhs->depth_camera_pattern_options), &(rhs->depth_camera_pattern_options)))
  {
    return false;
  }
  // min_range
  if (lhs->min_range != rhs->min_range) {
    return false;
  }
  // max_range
  if (lhs->max_range != rhs->max_range) {
    return false;
  }
  // no_hit_value
  if (lhs->no_hit_value != rhs->no_hit_value) {
    return false;
  }
  // return_points_in_world_frame
  if (lhs->return_points_in_world_frame != rhs->return_points_in_world_frame) {
    return false;
  }
  // draw_point_radius
  if (lhs->draw_point_radius != rhs->draw_point_radius) {
    return false;
  }
  // ray_start_color
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ray_start_color), &(rhs->ray_start_color)))
  {
    return false;
  }
  // ray_hit_color
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->ray_hit_color), &(rhs->ray_hit_color)))
  {
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
gs_ros_interfaces__msg__LidarOptions__copy(
  const gs_ros_interfaces__msg__LidarOptions * input,
  gs_ros_interfaces__msg__LidarOptions * output)
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
  // grid_pattern_options
  if (!gs_ros_interfaces__msg__GridRayCasterPattern__copy(
      &(input->grid_pattern_options), &(output->grid_pattern_options)))
  {
    return false;
  }
  // spherical_pattern_options
  if (!gs_ros_interfaces__msg__SphericalRayCasterPattern__copy(
      &(input->spherical_pattern_options), &(output->spherical_pattern_options)))
  {
    return false;
  }
  // depth_camera_pattern_options
  if (!gs_ros_interfaces__msg__DepthCameraRayCasterPattern__copy(
      &(input->depth_camera_pattern_options), &(output->depth_camera_pattern_options)))
  {
    return false;
  }
  // min_range
  output->min_range = input->min_range;
  // max_range
  output->max_range = input->max_range;
  // no_hit_value
  output->no_hit_value = input->no_hit_value;
  // return_points_in_world_frame
  output->return_points_in_world_frame = input->return_points_in_world_frame;
  // draw_point_radius
  output->draw_point_radius = input->draw_point_radius;
  // ray_start_color
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ray_start_color), &(output->ray_start_color)))
  {
    return false;
  }
  // ray_hit_color
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->ray_hit_color), &(output->ray_hit_color)))
  {
    return false;
  }
  // add_noise
  output->add_noise = input->add_noise;
  // noise_mean
  output->noise_mean = input->noise_mean;
  // noise_std
  output->noise_std = input->noise_std;
  return true;
}

gs_ros_interfaces__msg__LidarOptions *
gs_ros_interfaces__msg__LidarOptions__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__LidarOptions * msg = (gs_ros_interfaces__msg__LidarOptions *)allocator.allocate(sizeof(gs_ros_interfaces__msg__LidarOptions), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(gs_ros_interfaces__msg__LidarOptions));
  bool success = gs_ros_interfaces__msg__LidarOptions__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
gs_ros_interfaces__msg__LidarOptions__destroy(gs_ros_interfaces__msg__LidarOptions * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    gs_ros_interfaces__msg__LidarOptions__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
gs_ros_interfaces__msg__LidarOptions__Sequence__init(gs_ros_interfaces__msg__LidarOptions__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__LidarOptions * data = NULL;

  if (size) {
    data = (gs_ros_interfaces__msg__LidarOptions *)allocator.zero_allocate(size, sizeof(gs_ros_interfaces__msg__LidarOptions), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = gs_ros_interfaces__msg__LidarOptions__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        gs_ros_interfaces__msg__LidarOptions__fini(&data[i - 1]);
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
gs_ros_interfaces__msg__LidarOptions__Sequence__fini(gs_ros_interfaces__msg__LidarOptions__Sequence * array)
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
      gs_ros_interfaces__msg__LidarOptions__fini(&array->data[i]);
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

gs_ros_interfaces__msg__LidarOptions__Sequence *
gs_ros_interfaces__msg__LidarOptions__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  gs_ros_interfaces__msg__LidarOptions__Sequence * array = (gs_ros_interfaces__msg__LidarOptions__Sequence *)allocator.allocate(sizeof(gs_ros_interfaces__msg__LidarOptions__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = gs_ros_interfaces__msg__LidarOptions__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
gs_ros_interfaces__msg__LidarOptions__Sequence__destroy(gs_ros_interfaces__msg__LidarOptions__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    gs_ros_interfaces__msg__LidarOptions__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
gs_ros_interfaces__msg__LidarOptions__Sequence__are_equal(const gs_ros_interfaces__msg__LidarOptions__Sequence * lhs, const gs_ros_interfaces__msg__LidarOptions__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!gs_ros_interfaces__msg__LidarOptions__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
gs_ros_interfaces__msg__LidarOptions__Sequence__copy(
  const gs_ros_interfaces__msg__LidarOptions__Sequence * input,
  gs_ros_interfaces__msg__LidarOptions__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(gs_ros_interfaces__msg__LidarOptions);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    gs_ros_interfaces__msg__LidarOptions * data =
      (gs_ros_interfaces__msg__LidarOptions *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!gs_ros_interfaces__msg__LidarOptions__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          gs_ros_interfaces__msg__LidarOptions__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!gs_ros_interfaces__msg__LidarOptions__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
