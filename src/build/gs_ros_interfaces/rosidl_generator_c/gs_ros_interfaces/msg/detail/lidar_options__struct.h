// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/LidarOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'options'
#include "gs_ros_interfaces/msg/detail/general_sensor_options__struct.h"
// Member 'ros_options'
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__struct.h"
// Member 'rigid_options'
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__struct.h"
// Member 'grid_pattern_options'
#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__struct.h"
// Member 'spherical_pattern_options'
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__struct.h"
// Member 'depth_camera_pattern_options'
#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__struct.h"
// Member 'ray_start_color'
// Member 'ray_hit_color'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LidarOptions in the package gs_ros_interfaces.
/**
  * Configuration for Lidar sensors (spherical, grid, sectional)
 */
typedef struct gs_ros_interfaces__msg__LidarOptions
{
  gs_ros_interfaces__msg__GeneralSensorOptions options;
  gs_ros_interfaces__msg__RosSensorOptions ros_options;
  gs_ros_interfaces__msg__RigidSensorOptions rigid_options;
  gs_ros_interfaces__msg__GridRayCasterPattern grid_pattern_options;
  gs_ros_interfaces__msg__SphericalRayCasterPattern spherical_pattern_options;
  gs_ros_interfaces__msg__DepthCameraRayCasterPattern depth_camera_pattern_options;
  float min_range;
  float max_range;
  float no_hit_value;
  bool return_points_in_world_frame;
  float draw_point_radius;
  rosidl_runtime_c__float__Sequence ray_start_color;
  rosidl_runtime_c__float__Sequence ray_hit_color;
  bool add_noise;
  float noise_mean;
  float noise_std;
} gs_ros_interfaces__msg__LidarOptions;

// Struct for a sequence of gs_ros_interfaces__msg__LidarOptions.
typedef struct gs_ros_interfaces__msg__LidarOptions__Sequence
{
  gs_ros_interfaces__msg__LidarOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__LidarOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__STRUCT_H_
