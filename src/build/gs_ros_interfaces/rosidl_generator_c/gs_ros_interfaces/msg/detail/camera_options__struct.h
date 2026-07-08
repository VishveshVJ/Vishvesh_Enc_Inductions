// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/CameraOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__STRUCT_H_

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
// Member 'camera_types'
// Member 'model'
#include "rosidl_runtime_c/string.h"
// Member 'res'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CameraOptions in the package gs_ros_interfaces.
/**
  * Configuration options for a camera sensor
 */
typedef struct gs_ros_interfaces__msg__CameraOptions
{
  gs_ros_interfaces__msg__GeneralSensorOptions options;
  gs_ros_interfaces__msg__RosSensorOptions ros_options;
  gs_ros_interfaces__msg__RigidSensorOptions rigid_options;
  /// e.g., ["rgb", "depth"]
  rosidl_runtime_c__String__Sequence camera_types;
  /// [width, height]
  rosidl_runtime_c__int32__Sequence res;
  /// Field of view in degrees
  float fov;
  /// Near clipping plane
  float near;
  /// Far clipping plane
  float far;
  float aperture;
  bool denoise;
  /// Samples per pixel
  int32_t spp;
  /// e.g., "pinhole"
  rosidl_runtime_c__String model;
  float focus_dist;
  /// Visibility in simulation GUI
  bool gui;
  bool add_noise;
  float noise_mean;
  float noise_std;
} gs_ros_interfaces__msg__CameraOptions;

// Struct for a sequence of gs_ros_interfaces__msg__CameraOptions.
typedef struct gs_ros_interfaces__msg__CameraOptions__Sequence
{
  gs_ros_interfaces__msg__CameraOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__CameraOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__STRUCT_H_
