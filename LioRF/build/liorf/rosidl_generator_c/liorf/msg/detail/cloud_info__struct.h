// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from liorf:msg/CloudInfo.idl
// generated code does not contain a copyright notice

#ifndef LIORF__MSG__DETAIL__CLOUD_INFO__STRUCT_H_
#define LIORF__MSG__DETAIL__CLOUD_INFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'cloud_deskewed'
// Member 'cloud_corner'
// Member 'cloud_surface'
// Member 'key_frame_cloud'
// Member 'key_frame_color'
// Member 'key_frame_poses'
// Member 'key_frame_map'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

// Struct defined in msg/CloudInfo in the package liorf.
typedef struct liorf__msg__CloudInfo
{
  std_msgs__msg__Header header;
  int64_t imuavailable;
  int64_t odomavailable;
  float imurollinit;
  float imupitchinit;
  float imuyawinit;
  float initialguessx;
  float initialguessy;
  float initialguessz;
  float initialguessroll;
  float initialguesspitch;
  float initialguessyaw;
  sensor_msgs__msg__PointCloud2 cloud_deskewed;
  sensor_msgs__msg__PointCloud2 cloud_corner;
  sensor_msgs__msg__PointCloud2 cloud_surface;
  sensor_msgs__msg__PointCloud2 key_frame_cloud;
  sensor_msgs__msg__PointCloud2 key_frame_color;
  sensor_msgs__msg__PointCloud2 key_frame_poses;
  sensor_msgs__msg__PointCloud2 key_frame_map;
} liorf__msg__CloudInfo;

// Struct for a sequence of liorf__msg__CloudInfo.
typedef struct liorf__msg__CloudInfo__Sequence
{
  liorf__msg__CloudInfo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} liorf__msg__CloudInfo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIORF__MSG__DETAIL__CLOUD_INFO__STRUCT_H_
