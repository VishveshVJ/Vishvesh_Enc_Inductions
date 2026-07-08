// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gs_ros_interfaces:msg/CameraOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__STRUCT_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__gs_ros_interfaces__msg__CameraOptions __attribute__((deprecated))
#else
# define DEPRECATED__gs_ros_interfaces__msg__CameraOptions __declspec(deprecated)
#endif

namespace gs_ros_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CameraOptions_
{
  using Type = CameraOptions_<ContainerAllocator>;

  explicit CameraOptions_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_init),
    ros_options(_init),
    rigid_options(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fov = 0.0f;
      this->near = 0.0f;
      this->far = 0.0f;
      this->aperture = 0.0f;
      this->denoise = false;
      this->spp = 0l;
      this->model = "";
      this->focus_dist = 0.0f;
      this->gui = false;
      this->add_noise = false;
      this->noise_mean = 0.0f;
      this->noise_std = 0.0f;
    }
  }

  explicit CameraOptions_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : options(_alloc, _init),
    ros_options(_alloc, _init),
    rigid_options(_alloc, _init),
    model(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->fov = 0.0f;
      this->near = 0.0f;
      this->far = 0.0f;
      this->aperture = 0.0f;
      this->denoise = false;
      this->spp = 0l;
      this->model = "";
      this->focus_dist = 0.0f;
      this->gui = false;
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
  using _camera_types_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>>;
  _camera_types_type camera_types;
  using _res_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _res_type res;
  using _fov_type =
    float;
  _fov_type fov;
  using _near_type =
    float;
  _near_type near;
  using _far_type =
    float;
  _far_type far;
  using _aperture_type =
    float;
  _aperture_type aperture;
  using _denoise_type =
    bool;
  _denoise_type denoise;
  using _spp_type =
    int32_t;
  _spp_type spp;
  using _model_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _model_type model;
  using _focus_dist_type =
    float;
  _focus_dist_type focus_dist;
  using _gui_type =
    bool;
  _gui_type gui;
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
  Type & set__camera_types(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>> & _arg)
  {
    this->camera_types = _arg;
    return *this;
  }
  Type & set__res(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->res = _arg;
    return *this;
  }
  Type & set__fov(
    const float & _arg)
  {
    this->fov = _arg;
    return *this;
  }
  Type & set__near(
    const float & _arg)
  {
    this->near = _arg;
    return *this;
  }
  Type & set__far(
    const float & _arg)
  {
    this->far = _arg;
    return *this;
  }
  Type & set__aperture(
    const float & _arg)
  {
    this->aperture = _arg;
    return *this;
  }
  Type & set__denoise(
    const bool & _arg)
  {
    this->denoise = _arg;
    return *this;
  }
  Type & set__spp(
    const int32_t & _arg)
  {
    this->spp = _arg;
    return *this;
  }
  Type & set__model(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->model = _arg;
    return *this;
  }
  Type & set__focus_dist(
    const float & _arg)
  {
    this->focus_dist = _arg;
    return *this;
  }
  Type & set__gui(
    const bool & _arg)
  {
    this->gui = _arg;
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
    gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator> *;
  using ConstRawPtr =
    const gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gs_ros_interfaces__msg__CameraOptions
    std::shared_ptr<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gs_ros_interfaces__msg__CameraOptions
    std::shared_ptr<gs_ros_interfaces::msg::CameraOptions_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CameraOptions_ & other) const
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
    if (this->camera_types != other.camera_types) {
      return false;
    }
    if (this->res != other.res) {
      return false;
    }
    if (this->fov != other.fov) {
      return false;
    }
    if (this->near != other.near) {
      return false;
    }
    if (this->far != other.far) {
      return false;
    }
    if (this->aperture != other.aperture) {
      return false;
    }
    if (this->denoise != other.denoise) {
      return false;
    }
    if (this->spp != other.spp) {
      return false;
    }
    if (this->model != other.model) {
      return false;
    }
    if (this->focus_dist != other.focus_dist) {
      return false;
    }
    if (this->gui != other.gui) {
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
  bool operator!=(const CameraOptions_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CameraOptions_

// alias to use template instance with default allocator
using CameraOptions =
  gs_ros_interfaces::msg::CameraOptions_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__CAMERA_OPTIONS__STRUCT_HPP_
