// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/LidarOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'options'
#include "gs_ros_interfaces/msg/detail/general_sensor_options__struct.hpp"
// Member 'ros_options'
#include "gs_ros_interfaces/msg/detail/ros_sensor_options__struct.hpp"
// Member 'rigid_options'
#include "gs_ros_interfaces/msg/detail/rigid_sensor_options__struct.hpp"
// Member 'grid_pattern_options'
#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__struct.hpp"
// Member 'spherical_pattern_options'
#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__struct.hpp"
// Member 'depth_camera_pattern_options'
#include "gs_ros_interfaces/msg/detail/depth_camera_ray_caster_pattern__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__LidarOptions __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__LidarOptions __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LidarOptions_
{
  using Type = LidarOptions_<ContainerAllocator>;

  explicit LidarOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_init),
    ros_options(_init),
    rigid_options(_init),
    grid_pattern_options(_init),
    spherical_pattern_options(_init),
    depth_camera_pattern_options(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_range = 0.0f;
      this->max_range = 0.0f;
      this->no_hit_value = 0.0f;
      this->return_points_in_world_frame = false;
      this->draw_point_radius = 0.0f;
      this->add_noise = false;
      this->noise_mean = 0.0f;
      this->noise_std = 0.0f;
    }
  }

  explicit LidarOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_alloc, _init),
    ros_options(_alloc, _init),
    rigid_options(_alloc, _init),
    grid_pattern_options(_alloc, _init),
    spherical_pattern_options(_alloc, _init),
    depth_camera_pattern_options(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->min_range = 0.0f;
      this->max_range = 0.0f;
      this->no_hit_value = 0.0f;
      this->return_points_in_world_frame = false;
      this->draw_point_radius = 0.0f;
      this->add_noise = false;
      this->noise_mean = 0.0f;
      this->noise_std = 0.0f;
    }
  }

  // field types and members
  using _options_type =
    gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator>;
  _options_type options;
  using _ros_options_type =
    gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator>;
  _ros_options_type ros_options;
  using _rigid_options_type =
    gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator>;
  _rigid_options_type rigid_options;
  using _grid_pattern_options_type =
    gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator>;
  _grid_pattern_options_type grid_pattern_options;
  using _spherical_pattern_options_type =
    gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator>;
  _spherical_pattern_options_type spherical_pattern_options;
  using _depth_camera_pattern_options_type =
    gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator>;
  _depth_camera_pattern_options_type depth_camera_pattern_options;
  using _min_range_type =
    float;
  _min_range_type min_range;
  using _max_range_type =
    float;
  _max_range_type max_range;
  using _no_hit_value_type =
    float;
  _no_hit_value_type no_hit_value;
  using _return_points_in_world_frame_type =
    bool;
  _return_points_in_world_frame_type return_points_in_world_frame;
  using _draw_point_radius_type =
    float;
  _draw_point_radius_type draw_point_radius;
  using _ray_start_color_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ray_start_color_type ray_start_color;
  using _ray_hit_color_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _ray_hit_color_type ray_hit_color;
  using _add_noise_type =
    bool;
  _add_noise_type add_noise;
  using _noise_mean_type =
    float;
  _noise_mean_type noise_mean;
  using _noise_std_type =
    float;
  _noise_std_type noise_std;

  // setters for named parameter idiom
  Type & set__options(
    const gs_ros_interfaces::msg::GeneralSensorOptions_<ContainerAllocator> & _arg)
  {
    this->options = _arg;
    return *this;
  }
  Type & set__ros_options(
    const gs_ros_interfaces::msg::RosSensorOptions_<ContainerAllocator> & _arg)
  {
    this->ros_options = _arg;
    return *this;
  }
  Type & set__rigid_options(
    const gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator> & _arg)
  {
    this->rigid_options = _arg;
    return *this;
  }
  Type & set__grid_pattern_options(
    const gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator> & _arg)
  {
    this->grid_pattern_options = _arg;
    return *this;
  }
  Type & set__spherical_pattern_options(
    const gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator> & _arg)
  {
    this->spherical_pattern_options = _arg;
    return *this;
  }
  Type & set__depth_camera_pattern_options(
    const gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator> & _arg)
  {
    this->depth_camera_pattern_options = _arg;
    return *this;
  }
  Type & set__min_range(
    const float & _arg)
  {
    this->min_range = _arg;
    return *this;
  }
  Type & set__max_range(
    const float & _arg)
  {
    this->max_range = _arg;
    return *this;
  }
  Type & set__no_hit_value(
    const float & _arg)
  {
    this->no_hit_value = _arg;
    return *this;
  }
  Type & set__return_points_in_world_frame(
    const bool & _arg)
  {
    this->return_points_in_world_frame = _arg;
    return *this;
  }
  Type & set__draw_point_radius(
    const float & _arg)
  {
    this->draw_point_radius = _arg;
    return *this;
  }
  Type & set__ray_start_color(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ray_start_color = _arg;
    return *this;
  }
  Type & set__ray_hit_color(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->ray_hit_color = _arg;
    return *this;
  }
  Type & set__add_noise(
    const bool & _arg)
  {
    this->add_noise = _arg;
    return *this;
  }
  Type & set__noise_mean(
    const float & _arg)
  {
    this->noise_mean = _arg;
    return *this;
  }
  Type & set__noise_std(
    const float & _arg)
  {
    this->noise_std = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__LidarOptions
    std::shared_ptr<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__LidarOptions
    std::shared_ptr<gs_ros_interfaces::msg::LidarOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LidarOptions_ & other) const
  {
    if (this->options != other.options) {
      return false;
    }
    if (this->ros_options != other.ros_options) {
      return false;
    }
    if (this->rigid_options != other.rigid_options) {
      return false;
    }
    if (this->grid_pattern_options != other.grid_pattern_options) {
      return false;
    }
    if (this->spherical_pattern_options != other.spherical_pattern_options) {
      return false;
    }
    if (this->depth_camera_pattern_options != other.depth_camera_pattern_options) {
      return false;
    }
    if (this->min_range != other.min_range) {
      return false;
    }
    if (this->max_range != other.max_range) {
      return false;
    }
    if (this->no_hit_value != other.no_hit_value) {
      return false;
    }
    if (this->return_points_in_world_frame != other.return_points_in_world_frame) {
      return false;
    }
    if (this->draw_point_radius != other.draw_point_radius) {
      return false;
    }
    if (this->ray_start_color != other.ray_start_color) {
      return false;
    }
    if (this->ray_hit_color != other.ray_hit_color) {
      return false;
    }
    if (this->add_noise != other.add_noise) {
      return false;
    }
    if (this->noise_mean != other.noise_mean) {
      return false;
    }
    if (this->noise_std != other.noise_std) {
      return false;
    }
    return true;
  }
  bool operator!=(const LidarOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LidarOptions_

// alias to use template instance with default allocator
using LidarOptions =
  gs_ros_interfaces::msg::LidarOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__STRUCT_HPP_
