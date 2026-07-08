// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gs_ros_interfaces:msg/LidarOptions.idl
// generated code does not contain a copyright notice
#include "gs_ros_interfaces/msg/detail/lidar_options__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gs_ros_interfaces/msg/detail/lidar_options__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace gs_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gs_ros_interfaces::msg::GeneralSensorOptions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gs_ros_interfaces::msg::GeneralSensorOptions &);
size_t get_serialized_size(
  const gs_ros_interfaces::msg::GeneralSensorOptions &,
  size_t current_alignment);
size_t
max_serialized_size_GeneralSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gs_ros_interfaces::msg::RosSensorOptions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gs_ros_interfaces::msg::RosSensorOptions &);
size_t get_serialized_size(
  const gs_ros_interfaces::msg::RosSensorOptions &,
  size_t current_alignment);
size_t
max_serialized_size_RosSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gs_ros_interfaces::msg::RigidSensorOptions &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gs_ros_interfaces::msg::RigidSensorOptions &);
size_t get_serialized_size(
  const gs_ros_interfaces::msg::RigidSensorOptions &,
  size_t current_alignment);
size_t
max_serialized_size_RigidSensorOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gs_ros_interfaces::msg::GridRayCasterPattern &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gs_ros_interfaces::msg::GridRayCasterPattern &);
size_t get_serialized_size(
  const gs_ros_interfaces::msg::GridRayCasterPattern &,
  size_t current_alignment);
size_t
max_serialized_size_GridRayCasterPattern(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gs_ros_interfaces::msg::SphericalRayCasterPattern &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gs_ros_interfaces::msg::SphericalRayCasterPattern &);
size_t get_serialized_size(
  const gs_ros_interfaces::msg::SphericalRayCasterPattern &,
  size_t current_alignment);
size_t
max_serialized_size_SphericalRayCasterPattern(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gs_ros_interfaces

namespace gs_ros_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const gs_ros_interfaces::msg::DepthCameraRayCasterPattern &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  gs_ros_interfaces::msg::DepthCameraRayCasterPattern &);
size_t get_serialized_size(
  const gs_ros_interfaces::msg::DepthCameraRayCasterPattern &,
  size_t current_alignment);
size_t
max_serialized_size_DepthCameraRayCasterPattern(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace gs_ros_interfaces


namespace gs_ros_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
cdr_serialize(
  const gs_ros_interfaces::msg::LidarOptions & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.options,
    cdr);
  // Member: ros_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ros_options,
    cdr);
  // Member: rigid_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.rigid_options,
    cdr);
  // Member: grid_pattern_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.grid_pattern_options,
    cdr);
  // Member: spherical_pattern_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.spherical_pattern_options,
    cdr);
  // Member: depth_camera_pattern_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.depth_camera_pattern_options,
    cdr);
  // Member: min_range
  cdr << ros_message.min_range;
  // Member: max_range
  cdr << ros_message.max_range;
  // Member: no_hit_value
  cdr << ros_message.no_hit_value;
  // Member: return_points_in_world_frame
  cdr << (ros_message.return_points_in_world_frame ? true : false);
  // Member: draw_point_radius
  cdr << ros_message.draw_point_radius;
  // Member: ray_start_color
  {
    cdr << ros_message.ray_start_color;
  }
  // Member: ray_hit_color
  {
    cdr << ros_message.ray_hit_color;
  }
  // Member: add_noise
  cdr << (ros_message.add_noise ? true : false);
  // Member: noise_mean
  cdr << ros_message.noise_mean;
  // Member: noise_std
  cdr << ros_message.noise_std;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gs_ros_interfaces::msg::LidarOptions & ros_message)
{
  // Member: options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.options);

  // Member: ros_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ros_options);

  // Member: rigid_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.rigid_options);

  // Member: grid_pattern_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.grid_pattern_options);

  // Member: spherical_pattern_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.spherical_pattern_options);

  // Member: depth_camera_pattern_options
  gs_ros_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.depth_camera_pattern_options);

  // Member: min_range
  cdr >> ros_message.min_range;

  // Member: max_range
  cdr >> ros_message.max_range;

  // Member: no_hit_value
  cdr >> ros_message.no_hit_value;

  // Member: return_points_in_world_frame
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.return_points_in_world_frame = tmp ? true : false;
  }

  // Member: draw_point_radius
  cdr >> ros_message.draw_point_radius;

  // Member: ray_start_color
  {
    cdr >> ros_message.ray_start_color;
  }

  // Member: ray_hit_color
  {
    cdr >> ros_message.ray_hit_color;
  }

  // Member: add_noise
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.add_noise = tmp ? true : false;
  }

  // Member: noise_mean
  cdr >> ros_message.noise_mean;

  // Member: noise_std
  cdr >> ros_message.noise_std;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
get_serialized_size(
  const gs_ros_interfaces::msg::LidarOptions & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: options

  current_alignment +=
    gs_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.options, current_alignment);
  // Member: ros_options

  current_alignment +=
    gs_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ros_options, current_alignment);
  // Member: rigid_options

  current_alignment +=
    gs_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.rigid_options, current_alignment);
  // Member: grid_pattern_options

  current_alignment +=
    gs_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.grid_pattern_options, current_alignment);
  // Member: spherical_pattern_options

  current_alignment +=
    gs_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.spherical_pattern_options, current_alignment);
  // Member: depth_camera_pattern_options

  current_alignment +=
    gs_ros_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.depth_camera_pattern_options, current_alignment);
  // Member: min_range
  {
    size_t item_size = sizeof(ros_message.min_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_range
  {
    size_t item_size = sizeof(ros_message.max_range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: no_hit_value
  {
    size_t item_size = sizeof(ros_message.no_hit_value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: return_points_in_world_frame
  {
    size_t item_size = sizeof(ros_message.return_points_in_world_frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: draw_point_radius
  {
    size_t item_size = sizeof(ros_message.draw_point_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ray_start_color
  {
    size_t array_size = ros_message.ray_start_color.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ray_start_color[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ray_hit_color
  {
    size_t array_size = ros_message.ray_hit_color.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.ray_hit_color[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: add_noise
  {
    size_t item_size = sizeof(ros_message.add_noise);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: noise_mean
  {
    size_t item_size = sizeof(ros_message.noise_mean);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: noise_std
  {
    size_t item_size = sizeof(ros_message.noise_std);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gs_ros_interfaces
max_serialized_size_LidarOptions(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        gs_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_GeneralSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: ros_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        gs_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_RosSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: rigid_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        gs_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_RigidSensorOptions(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: grid_pattern_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        gs_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_GridRayCasterPattern(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: spherical_pattern_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        gs_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_SphericalRayCasterPattern(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: depth_camera_pattern_options
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        gs_ros_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_DepthCameraRayCasterPattern(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: min_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_range
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: no_hit_value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: return_points_in_world_frame
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: draw_point_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ray_start_color
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ray_hit_color
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: add_noise
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: noise_mean
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: noise_std
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gs_ros_interfaces::msg::LidarOptions;
    is_plain =
      (
      offsetof(DataType, noise_std) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LidarOptions__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gs_ros_interfaces::msg::LidarOptions *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LidarOptions__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gs_ros_interfaces::msg::LidarOptions *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LidarOptions__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gs_ros_interfaces::msg::LidarOptions *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LidarOptions__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LidarOptions(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LidarOptions__callbacks = {
  "gs_ros_interfaces::msg",
  "LidarOptions",
  _LidarOptions__cdr_serialize,
  _LidarOptions__cdr_deserialize,
  _LidarOptions__get_serialized_size,
  _LidarOptions__max_serialized_size
};

static rosidl_message_type_support_t _LidarOptions__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LidarOptions__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gs_ros_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gs_ros_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<gs_ros_interfaces::msg::LidarOptions>()
{
  return &gs_ros_interfaces::msg::typesupport_fastrtps_cpp::_LidarOptions__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gs_ros_interfaces, msg, LidarOptions)() {
  return &gs_ros_interfaces::msg::typesupport_fastrtps_cpp::_LidarOptions__handle;
}

#ifdef __cplusplus
}
#endif
