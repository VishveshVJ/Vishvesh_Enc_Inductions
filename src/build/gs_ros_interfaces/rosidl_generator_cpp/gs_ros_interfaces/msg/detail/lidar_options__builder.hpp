// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from gs_ros_interfaces:msg/LidarOptions.idl
// generated code does not contain a copyright notice

#ifndef GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__BUILDER_HPP_
#define GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "gs_ros_interfaces/msg/detail/lidar_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace gs_ros_interfaces
{

namespace msg
{

namespace builder
{

class Init_LidarOptions_noise_std
{
public:
  explicit Init_LidarOptions_noise_std(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  ::gs_ros_interfaces::msg::LidarOptions noise_std(::gs_ros_interfaces::msg::LidarOptions::_noise_std_type arg)
  {
    msg_.noise_std = std::move(arg);
    return std::move(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_noise_mean
{
public:
  explicit Init_LidarOptions_noise_mean(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_noise_std noise_mean(::gs_ros_interfaces::msg::LidarOptions::_noise_mean_type arg)
  {
    msg_.noise_mean = std::move(arg);
    return Init_LidarOptions_noise_std(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_add_noise
{
public:
  explicit Init_LidarOptions_add_noise(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_noise_mean add_noise(::gs_ros_interfaces::msg::LidarOptions::_add_noise_type arg)
  {
    msg_.add_noise = std::move(arg);
    return Init_LidarOptions_noise_mean(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_ray_hit_color
{
public:
  explicit Init_LidarOptions_ray_hit_color(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_add_noise ray_hit_color(::gs_ros_interfaces::msg::LidarOptions::_ray_hit_color_type arg)
  {
    msg_.ray_hit_color = std::move(arg);
    return Init_LidarOptions_add_noise(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_ray_start_color
{
public:
  explicit Init_LidarOptions_ray_start_color(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_ray_hit_color ray_start_color(::gs_ros_interfaces::msg::LidarOptions::_ray_start_color_type arg)
  {
    msg_.ray_start_color = std::move(arg);
    return Init_LidarOptions_ray_hit_color(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_draw_point_radius
{
public:
  explicit Init_LidarOptions_draw_point_radius(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_ray_start_color draw_point_radius(::gs_ros_interfaces::msg::LidarOptions::_draw_point_radius_type arg)
  {
    msg_.draw_point_radius = std::move(arg);
    return Init_LidarOptions_ray_start_color(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_return_points_in_world_frame
{
public:
  explicit Init_LidarOptions_return_points_in_world_frame(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_draw_point_radius return_points_in_world_frame(::gs_ros_interfaces::msg::LidarOptions::_return_points_in_world_frame_type arg)
  {
    msg_.return_points_in_world_frame = std::move(arg);
    return Init_LidarOptions_draw_point_radius(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_no_hit_value
{
public:
  explicit Init_LidarOptions_no_hit_value(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_return_points_in_world_frame no_hit_value(::gs_ros_interfaces::msg::LidarOptions::_no_hit_value_type arg)
  {
    msg_.no_hit_value = std::move(arg);
    return Init_LidarOptions_return_points_in_world_frame(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_max_range
{
public:
  explicit Init_LidarOptions_max_range(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_no_hit_value max_range(::gs_ros_interfaces::msg::LidarOptions::_max_range_type arg)
  {
    msg_.max_range = std::move(arg);
    return Init_LidarOptions_no_hit_value(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_min_range
{
public:
  explicit Init_LidarOptions_min_range(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_max_range min_range(::gs_ros_interfaces::msg::LidarOptions::_min_range_type arg)
  {
    msg_.min_range = std::move(arg);
    return Init_LidarOptions_max_range(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_depth_camera_pattern_options
{
public:
  explicit Init_LidarOptions_depth_camera_pattern_options(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_min_range depth_camera_pattern_options(::gs_ros_interfaces::msg::LidarOptions::_depth_camera_pattern_options_type arg)
  {
    msg_.depth_camera_pattern_options = std::move(arg);
    return Init_LidarOptions_min_range(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_spherical_pattern_options
{
public:
  explicit Init_LidarOptions_spherical_pattern_options(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_depth_camera_pattern_options spherical_pattern_options(::gs_ros_interfaces::msg::LidarOptions::_spherical_pattern_options_type arg)
  {
    msg_.spherical_pattern_options = std::move(arg);
    return Init_LidarOptions_depth_camera_pattern_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_grid_pattern_options
{
public:
  explicit Init_LidarOptions_grid_pattern_options(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_spherical_pattern_options grid_pattern_options(::gs_ros_interfaces::msg::LidarOptions::_grid_pattern_options_type arg)
  {
    msg_.grid_pattern_options = std::move(arg);
    return Init_LidarOptions_spherical_pattern_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_rigid_options
{
public:
  explicit Init_LidarOptions_rigid_options(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_grid_pattern_options rigid_options(::gs_ros_interfaces::msg::LidarOptions::_rigid_options_type arg)
  {
    msg_.rigid_options = std::move(arg);
    return Init_LidarOptions_grid_pattern_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_ros_options
{
public:
  explicit Init_LidarOptions_ros_options(::gs_ros_interfaces::msg::LidarOptions & msg)
  : msg_(msg)
  {}
  Init_LidarOptions_rigid_options ros_options(::gs_ros_interfaces::msg::LidarOptions::_ros_options_type arg)
  {
    msg_.ros_options = std::move(arg);
    return Init_LidarOptions_rigid_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

class Init_LidarOptions_options
{
public:
  Init_LidarOptions_options()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LidarOptions_ros_options options(::gs_ros_interfaces::msg::LidarOptions::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_LidarOptions_ros_options(msg_);
  }

private:
  ::gs_ros_interfaces::msg::LidarOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::gs_ros_interfaces::msg::LidarOptions>()
{
  return gs_ros_interfaces::msg::builder::Init_LidarOptions_options();
}

}  // namespace gs_ros_interfaces

#endif  // GS_ROS_INTERFACES__MSG__DETAIL__LIDAR_OPTIONS__BUILDER_HPP_
