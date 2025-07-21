// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from liorf:msg/CloudInfo.idl
// generated code does not contain a copyright notice

#ifndef LIORF__MSG__DETAIL__CLOUD_INFO__TRAITS_HPP_
#define LIORF__MSG__DETAIL__CLOUD_INFO__TRAITS_HPP_

#include "liorf/msg/detail/cloud_info__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cloud_deskewed'
// Member 'cloud_corner'
// Member 'cloud_surface'
// Member 'key_frame_cloud'
// Member 'key_frame_color'
// Member 'key_frame_poses'
// Member 'key_frame_map'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<liorf::msg::CloudInfo>()
{
  return "liorf::msg::CloudInfo";
}

template<>
inline const char * name<liorf::msg::CloudInfo>()
{
  return "liorf/msg/CloudInfo";
}

template<>
struct has_fixed_size<liorf::msg::CloudInfo>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<liorf::msg::CloudInfo>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<liorf::msg::CloudInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LIORF__MSG__DETAIL__CLOUD_INFO__TRAITS_HPP_
