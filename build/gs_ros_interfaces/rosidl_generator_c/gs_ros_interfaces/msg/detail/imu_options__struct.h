// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:msg/ImuOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__STRUCT_H_

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
// Member 'noisy_options'
#include "gs_ros_interfaces/msg/detail/noisy_sensor_options__struct.h"
// Member 'acc_cross_axis_coupling'
// Member 'acc_bias'
// Member 'acc_noise'
// Member 'acc_random_walk'
// Member 'gyro_cross_axis_coupling'
// Member 'gyro_bias'
// Member 'gyro_noise'
// Member 'gyro_random_walk'
// Member 'debug_acc_color'
// Member 'debug_gyro_color'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ImuOptions in the package gs_ros_interfaces.
/**
  * Configuration for an IMU sensor
 */
typedef struct gs_ros_interfaces__msg__ImuOptions
{
  gs_ros_interfaces__msg__GeneralSensorOptions options;
  gs_ros_interfaces__msg__RosSensorOptions ros_options;
  gs_ros_interfaces__msg__RigidSensorOptions rigid_options;
  gs_ros_interfaces__msg__NoisySensorOptions noisy_options;
  /// Accelerometer parameters
  float acc_resolution;
  rosidl_runtime_c__float__Sequence acc_cross_axis_coupling;
  rosidl_runtime_c__float__Sequence acc_bias;
  rosidl_runtime_c__float__Sequence acc_noise;
  rosidl_runtime_c__float__Sequence acc_random_walk;
  /// Gyroscope parameters
  float gyro_resolution;
  rosidl_runtime_c__float__Sequence gyro_cross_axis_coupling;
  rosidl_runtime_c__float__Sequence gyro_bias;
  rosidl_runtime_c__float__Sequence gyro_noise;
  rosidl_runtime_c__float__Sequence gyro_random_walk;
  /// Debug visualization
  rosidl_runtime_c__float__Sequence debug_acc_color;
  float debug_acc_scale;
  rosidl_runtime_c__float__Sequence debug_gyro_color;
  float debug_gyro_scale;
} gs_ros_interfaces__msg__ImuOptions;

// Struct for a sequence of gs_ros_interfaces__msg__ImuOptions.
typedef struct gs_ros_interfaces__msg__ImuOptions__Sequence
{
  gs_ros_interfaces__msg__ImuOptions * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__msg__ImuOptions__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__IMU_OPTIONS__STRUCT_H_
