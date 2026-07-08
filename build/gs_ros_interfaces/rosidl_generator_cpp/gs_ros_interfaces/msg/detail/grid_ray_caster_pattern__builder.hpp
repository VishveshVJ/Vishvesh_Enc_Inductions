// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/GridRayCasterPattern.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__GRID_RAY_CASTER_PATTERN__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__GRID_RAY_CASTER_PATTERN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/grid_ray_caster_pattern__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_GridRayCasterPattern_direction
{
public:
  explicit Init_GridRayCasterPattern_direction(::gs_ros_interfaces::msg::GridRayCasterPattern & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::GridRayCasterPattern direction(::gs_ros_interfaces::msg::GridRayCasterPattern::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::GridRayCasterPattern msg_;
};

class Init_GridRayCasterPattern_size
{
public:
  explicit Init_GridRayCasterPattern_size(::gs_ros_interfaces::msg::GridRayCasterPattern & msg)
  : msg_(msg)
  {}
  Init_GridRayCasterPattern_direction size(::gs_ros_interfaces::msg::GridRayCasterPattern::_size_type arg)
  {
    msg_.size = std::move(arg);
    return Init_GridRayCasterPattern_direction(msg_);
  }

private:
  ::gs_ros_interfaces::msg::GridRayCasterPattern msg_;
};

class Init_GridRayCasterPattern_resolution
{
public:
  Init_GridRayCasterPattern_resolution()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GridRayCasterPattern_size resolution(::gs_ros_interfaces::msg::GridRayCasterPattern::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_GridRayCasterPattern_size(msg_);
  }

private:
  ::gs_ros_interfaces::msg::GridRayCasterPattern msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::GridRayCasterPattern>()
{
  return gs_ros_interfaces::msg::builder::Init_GridRayCasterPattern_resolution();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__GRID_RAY_CASTER_PATTERN__BUILDER_HPP_
