// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from gs_ros_interfaces:srv/GetSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__SRV__DETAIL__GET_SENSOR_OPTIONS__STRUCT_H_
#define GS_ROS_INTERFACES__SRV__DETAIL__GET_SENSOR_OPTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'entity'
// Member 'names'
// Member 'sensor_types'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetSensorOptions in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__GetSensorOptions_Request
{
  /// Entity name or regex pattern
  rosidl_runtime_c__String entity;
  /// Optional: specific sensor names
  rosidl_runtime_c__String__Sequence names;
  /// Optional: specific sensor types (e.g. cam, lidar)
  rosidl_runtime_c__String__Sequence sensor_types;
} gs_ros_interfaces__srv__GetSensorOptions_Request;

// Struct for a sequence of gs_ros_interfaces__srv__GetSensorOptions_Request.
typedef struct gs_ros_interfaces__srv__GetSensorOptions_Request__Sequence
{
  gs_ros_interfaces__srv__GetSensorOptions_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__GetSensorOptions_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'cameras'
#include "gs_ros_interfaces/msg/detail/camera_options__struct.h"
// Member 'lidars'
#include "gs_ros_interfaces/msg/detail/lidar_options__struct.h"
// Member 'imus'
#include "gs_ros_interfaces/msg/detail/imu_options__struct.h"
// Member 'contacts'
#include "gs_ros_interfaces/msg/detail/contact_options__struct.h"
// Member 'contact_forces'
#include "gs_ros_interfaces/msg/detail/contact_force_options__struct.h"
// Member 'result'
#include "simulation_interfaces/msg/detail/result__struct.h"

/// Struct defined in srv/GetSensorOptions in the package gs_ros_interfaces.
typedef struct gs_ros_interfaces__srv__GetSensorOptions_Response
{
  gs_ros_interfaces__msg__CameraOptions__Sequence cameras;
  gs_ros_interfaces__msg__LidarOptions__Sequence lidars;
  gs_ros_interfaces__msg__ImuOptions__Sequence imus;
  gs_ros_interfaces__msg__ContactOptions__Sequence contacts;
  gs_ros_interfaces__msg__ContactForceOptions__Sequence contact_forces;
  simulation_interfaces__msg__Result result;
} gs_ros_interfaces__srv__GetSensorOptions_Response;

// Struct for a sequence of gs_ros_interfaces__srv__GetSensorOptions_Response.
typedef struct gs_ros_interfaces__srv__GetSensorOptions_Response__Sequence
{
  gs_ros_interfaces__srv__GetSensorOptions_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} gs_ros_interfaces__srv__GetSensorOptions_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // GS_ROS_INTERFACES__SRV__DETAIL__GET_SENSOR_OPTIONS__STRUCT_H_
