// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/SphericalRayCasterPattern.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/spherical_ray_caster_pattern__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_SphericalRayCasterPattern_angles
{
public:
  explicit Init_SphericalRayCasterPattern_angles(::gs_ros_interfaces::msg::SphericalRayCasterPattern & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::SphericalRayCasterPattern angles(::gs_ros_interfaces::msg::SphericalRayCasterPattern::_angles_type arg)
  {
    msg_.angles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::SphericalRayCasterPattern msg_;
};

class Init_SphericalRayCasterPattern_angular_resolution
{
public:
  explicit Init_SphericalRayCasterPattern_angular_resolution(::gs_ros_interfaces::msg::SphericalRayCasterPattern & msg)
  : msg_(msg)
  {}
  Init_SphericalRayCasterPattern_angles angular_resolution(::gs_ros_interfaces::msg::SphericalRayCasterPattern::_angular_resolution_type arg)
  {
    msg_.angular_resolution = std::move(arg);
    return Init_SphericalRayCasterPattern_angles(msg_);
  }

private:
  ::gs_ros_interfaces::msg::SphericalRayCasterPattern msg_;
};

class Init_SphericalRayCasterPattern_n_points
{
public:
  explicit Init_SphericalRayCasterPattern_n_points(::gs_ros_interfaces::msg::SphericalRayCasterPattern & msg)
  : msg_(msg)
  {}
  Init_SphericalRayCasterPattern_angular_resolution n_points(::gs_ros_interfaces::msg::SphericalRayCasterPattern::_n_points_type arg)
  {
    msg_.n_points = std::move(arg);
    return Init_SphericalRayCasterPattern_angular_resolution(msg_);
  }

private:
  ::gs_ros_interfaces::msg::SphericalRayCasterPattern msg_;
};

class Init_SphericalRayCasterPattern_fov
{
public:
  Init_SphericalRayCasterPattern_fov()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SphericalRayCasterPattern_n_points fov(::gs_ros_interfaces::msg::SphericalRayCasterPattern::_fov_type arg)
  {
    msg_.fov = std::move(arg);
    return Init_SphericalRayCasterPattern_n_points(msg_);
  }

private:
  ::gs_ros_interfaces::msg::SphericalRayCasterPattern msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::SphericalRayCasterPattern>()
{
  return gs_ros_interfaces::msg::builder::Init_SphericalRayCasterPattern_fov();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__SPHERICAL_RAY_CASTER_PATTERN__BUILDER_HPP_
