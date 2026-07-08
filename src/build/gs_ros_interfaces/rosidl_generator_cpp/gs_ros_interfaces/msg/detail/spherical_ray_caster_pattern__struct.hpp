// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/SphericalRayCasterPattern.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__SphericalRayCasterPattern __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__SphericalRayCasterPattern __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SphericalRayCasterPattern_
{
  using Type = SphericalRayCasterPattern_<ContainerAllocator>;

  explicit SphericalRayCasterPattern_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SphericalRayCasterPattern_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _fov_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _fov_type fov;
  using _n_points_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _n_points_type n_points;
  using _angular_resolution_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _angular_resolution_type angular_resolution;
  using _angles_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _angles_type angles;

  // setters for named parameter idiom
  Type & set__fov(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->fov = _arg;
    return *this;
  }
  Type & set__n_points(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->n_points = _arg;
    return *this;
  }
  Type & set__angular_resolution(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->angular_resolution = _arg;
    return *this;
  }
  Type & set__angles(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->angles = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__SphericalRayCasterPattern
    std::shared_ptr<gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__SphericalRayCasterPattern
    std::shared_ptr<gs_ros_interfaces::msg::SphericalRayCasterPattern_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SphericalRayCasterPattern_ & other) const
  {
    if (this->fov != other.fov) {
      return false;
    }
    if (this->n_points != other.n_points) {
      return false;
    }
    if (this->angular_resolution != other.angular_resolution) {
      return false;
    }
    if (this->angles != other.angles) {
      return false;
    }
    return true;
  }
  bool operator!=(const SphericalRayCasterPattern_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SphericalRayCasterPattern_

// alias to use template instance with default allocator
using SphericalRayCasterPattern =
  gs_ros_interfaces::msg::SphericalRayCasterPattern_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__STRUCT_HPP_
