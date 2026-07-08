// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/GridRayCasterPattern.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__GRID_RAY_CASTER_PATTERN__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__GRID_RAY_CASTER_PATTERN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__GridRayCasterPattern __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__GridRayCasterPattern __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GridRayCasterPattern_
{
  using Type = GridRayCasterPattern_<ContainerAllocator>;

  explicit GridRayCasterPattern_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0f;
    }
  }

  explicit GridRayCasterPattern_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->resolution = 0.0f;
    }
  }

  // field types and members
  using _resolution_type =
    float;
  _resolution_type resolution;
  using _size_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _size_type size;
  using _direction_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__resolution(
    const float & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__size(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->size = _arg;
    return *this;
  }
  Type & set__direction(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__GridRayCasterPattern
    std::shared_ptr<gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__GridRayCasterPattern
    std::shared_ptr<gs_ros_interfaces::msg::GridRayCasterPattern_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GridRayCasterPattern_ & other) const
  {
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->size != other.size) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const GridRayCasterPattern_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GridRayCasterPattern_

// alias to use template instance with default allocator
using GridRayCasterPattern =
  gs_ros_interfaces::msg::GridRayCasterPattern_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__GRID_RAY_CASTER_PATTERN__STRUCT_HPP_
