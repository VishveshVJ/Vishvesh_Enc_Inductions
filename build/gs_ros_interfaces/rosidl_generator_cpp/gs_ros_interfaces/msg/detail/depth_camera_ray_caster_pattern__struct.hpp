// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/DepthCameraRayCasterPattern.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__DepthCameraRayCasterPattern __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__DepthCameraRayCasterPattern __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DepthCameraRayCasterPattern_
{
  using Type = DepthCameraRayCasterPattern_<ContainerAllocator>;

  explicit DepthCameraRayCasterPattern_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fx = 0.0f;
      this->fy = 0.0f;
      this->cx = 0.0f;
      this->cy = 0.0f;
      this->fov_horizontal = 0.0f;
      this->fov_vertical = 0.0f;
    }
  }

  explicit DepthCameraRayCasterPattern_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fx = 0.0f;
      this->fy = 0.0f;
      this->cx = 0.0f;
      this->cy = 0.0f;
      this->fov_horizontal = 0.0f;
      this->fov_vertical = 0.0f;
    }
  }

  // field types and members
  using _res_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _res_type res;
  using _fx_type =
    float;
  _fx_type fx;
  using _fy_type =
    float;
  _fy_type fy;
  using _cx_type =
    float;
  _cx_type cx;
  using _cy_type =
    float;
  _cy_type cy;
  using _fov_horizontal_type =
    float;
  _fov_horizontal_type fov_horizontal;
  using _fov_vertical_type =
    float;
  _fov_vertical_type fov_vertical;

  // setters for named parameter idiom
  Type & set__res(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->res = _arg;
    return *this;
  }
  Type & set__fx(
    const float & _arg)
  {
    this->fx = _arg;
    return *this;
  }
  Type & set__fy(
    const float & _arg)
  {
    this->fy = _arg;
    return *this;
  }
  Type & set__cx(
    const float & _arg)
  {
    this->cx = _arg;
    return *this;
  }
  Type & set__cy(
    const float & _arg)
  {
    this->cy = _arg;
    return *this;
  }
  Type & set__fov_horizontal(
    const float & _arg)
  {
    this->fov_horizontal = _arg;
    return *this;
  }
  Type & set__fov_vertical(
    const float & _arg)
  {
    this->fov_vertical = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__DepthCameraRayCasterPattern
    std::shared_ptr<gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__DepthCameraRayCasterPattern
    std::shared_ptr<gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DepthCameraRayCasterPattern_ & other) const
  {
    if (this->res != other.res) {
      return false;
    }
    if (this->fx != other.fx) {
      return false;
    }
    if (this->fy != other.fy) {
      return false;
    }
    if (this->cx != other.cx) {
      return false;
    }
    if (this->cy != other.cy) {
      return false;
    }
    if (this->fov_horizontal != other.fov_horizontal) {
      return false;
    }
    if (this->fov_vertical != other.fov_vertical) {
      return false;
    }
    return true;
  }
  bool operator!=(const DepthCameraRayCasterPattern_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DepthCameraRayCasterPattern_

// alias to use template instance with default allocator
using DepthCameraRayCasterPattern =
  gs_ros_interfaces::msg::DepthCameraRayCasterPattern_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__DEPTH_CAMERA_RAY_CASTER_PATTERN__STRUCT_HPP_
