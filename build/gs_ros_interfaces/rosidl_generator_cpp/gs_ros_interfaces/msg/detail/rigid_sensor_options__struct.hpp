// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/RigidSensorOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__RigidSensorOptions __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__RigidSensorOptions __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RigidSensorOptions_
{
  using Type = RigidSensorOptions_<ContainerAllocator>;

  explicit RigidSensorOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link = "";
      std::fill<typename std::array<double, 3>::iterator, double>(this->pos_offset.begin(), this->pos_offset.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->euler_offset.begin(), this->euler_offset.end(), 0.0);
    }
  }

  explicit RigidSensorOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : link(_alloc),
    pos_offset(_alloc),
    euler_offset(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->link = "";
      std::fill<typename std::array<double, 3>::iterator, double>(this->pos_offset.begin(), this->pos_offset.end(), 0.0);
      std::fill<typename std::array<double, 3>::iterator, double>(this->euler_offset.begin(), this->euler_offset.end(), 0.0);
    }
  }

  // field types and members
  using _link_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _link_type link;
  using _pos_offset_type =
    std::array<double, 3>;
  _pos_offset_type pos_offset;
  using _euler_offset_type =
    std::array<double, 3>;
  _euler_offset_type euler_offset;

  // setters for named parameter idiom
  Type & set__link(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->link = _arg;
    return *this;
  }
  Type & set__pos_offset(
    const std::array<double, 3> & _arg)
  {
    this->pos_offset = _arg;
    return *this;
  }
  Type & set__euler_offset(
    const std::array<double, 3> & _arg)
  {
    this->euler_offset = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__RigidSensorOptions
    std::shared_ptr<gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__RigidSensorOptions
    std::shared_ptr<gs_ros_interfaces::msg::RigidSensorOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RigidSensorOptions_ & other) const
  {
    if (this->link != other.link) {
      return false;
    }
    if (this->pos_offset != other.pos_offset) {
      return false;
    }
    if (this->euler_offset != other.euler_offset) {
      return false;
    }
    return true;
  }
  bool operator!=(const RigidSensorOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RigidSensorOptions_

// alias to use template instance with default allocator
using RigidSensorOptions =
  gs_ros_interfaces::msg::RigidSensorOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__RIGID_SENSOR_OPTIONS__STRUCT_HPP_
