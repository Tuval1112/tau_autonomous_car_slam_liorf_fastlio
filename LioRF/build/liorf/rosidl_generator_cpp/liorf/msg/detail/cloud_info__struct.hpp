// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from liorf:msg/CloudInfo.idl
// generated code does not contain a copyright notice

#ifndef LIORF__MSG__DETAIL__CLOUD_INFO__STRUCT_HPP_
#define LIORF__MSG__DETAIL__CLOUD_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'cloud_deskewed'
// Member 'cloud_corner'
// Member 'cloud_surface'
// Member 'key_frame_cloud'
// Member 'key_frame_color'
// Member 'key_frame_poses'
// Member 'key_frame_map'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__liorf__msg__CloudInfo __attribute__((deprecated))
#else
# define DEPRECATED__liorf__msg__CloudInfo __declspec(deprecated)
#endif

namespace liorf
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CloudInfo_
{
  using Type = CloudInfo_<ContainerAllocator>;

  explicit CloudInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    cloud_deskewed(_init),
    cloud_corner(_init),
    cloud_surface(_init),
    key_frame_cloud(_init),
    key_frame_color(_init),
    key_frame_poses(_init),
    key_frame_map(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imuavailable = 0ll;
      this->odomavailable = 0ll;
      this->imurollinit = 0.0f;
      this->imupitchinit = 0.0f;
      this->imuyawinit = 0.0f;
      this->initialguessx = 0.0f;
      this->initialguessy = 0.0f;
      this->initialguessz = 0.0f;
      this->initialguessroll = 0.0f;
      this->initialguesspitch = 0.0f;
      this->initialguessyaw = 0.0f;
    }
  }

  explicit CloudInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    cloud_deskewed(_alloc, _init),
    cloud_corner(_alloc, _init),
    cloud_surface(_alloc, _init),
    key_frame_cloud(_alloc, _init),
    key_frame_color(_alloc, _init),
    key_frame_poses(_alloc, _init),
    key_frame_map(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->imuavailable = 0ll;
      this->odomavailable = 0ll;
      this->imurollinit = 0.0f;
      this->imupitchinit = 0.0f;
      this->imuyawinit = 0.0f;
      this->initialguessx = 0.0f;
      this->initialguessy = 0.0f;
      this->initialguessz = 0.0f;
      this->initialguessroll = 0.0f;
      this->initialguesspitch = 0.0f;
      this->initialguessyaw = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _imuavailable_type =
    int64_t;
  _imuavailable_type imuavailable;
  using _odomavailable_type =
    int64_t;
  _odomavailable_type odomavailable;
  using _imurollinit_type =
    float;
  _imurollinit_type imurollinit;
  using _imupitchinit_type =
    float;
  _imupitchinit_type imupitchinit;
  using _imuyawinit_type =
    float;
  _imuyawinit_type imuyawinit;
  using _initialguessx_type =
    float;
  _initialguessx_type initialguessx;
  using _initialguessy_type =
    float;
  _initialguessy_type initialguessy;
  using _initialguessz_type =
    float;
  _initialguessz_type initialguessz;
  using _initialguessroll_type =
    float;
  _initialguessroll_type initialguessroll;
  using _initialguesspitch_type =
    float;
  _initialguesspitch_type initialguesspitch;
  using _initialguessyaw_type =
    float;
  _initialguessyaw_type initialguessyaw;
  using _cloud_deskewed_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_deskewed_type cloud_deskewed;
  using _cloud_corner_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_corner_type cloud_corner;
  using _cloud_surface_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_surface_type cloud_surface;
  using _key_frame_cloud_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _key_frame_cloud_type key_frame_cloud;
  using _key_frame_color_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _key_frame_color_type key_frame_color;
  using _key_frame_poses_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _key_frame_poses_type key_frame_poses;
  using _key_frame_map_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _key_frame_map_type key_frame_map;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__imuavailable(
    const int64_t & _arg)
  {
    this->imuavailable = _arg;
    return *this;
  }
  Type & set__odomavailable(
    const int64_t & _arg)
  {
    this->odomavailable = _arg;
    return *this;
  }
  Type & set__imurollinit(
    const float & _arg)
  {
    this->imurollinit = _arg;
    return *this;
  }
  Type & set__imupitchinit(
    const float & _arg)
  {
    this->imupitchinit = _arg;
    return *this;
  }
  Type & set__imuyawinit(
    const float & _arg)
  {
    this->imuyawinit = _arg;
    return *this;
  }
  Type & set__initialguessx(
    const float & _arg)
  {
    this->initialguessx = _arg;
    return *this;
  }
  Type & set__initialguessy(
    const float & _arg)
  {
    this->initialguessy = _arg;
    return *this;
  }
  Type & set__initialguessz(
    const float & _arg)
  {
    this->initialguessz = _arg;
    return *this;
  }
  Type & set__initialguessroll(
    const float & _arg)
  {
    this->initialguessroll = _arg;
    return *this;
  }
  Type & set__initialguesspitch(
    const float & _arg)
  {
    this->initialguesspitch = _arg;
    return *this;
  }
  Type & set__initialguessyaw(
    const float & _arg)
  {
    this->initialguessyaw = _arg;
    return *this;
  }
  Type & set__cloud_deskewed(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud_deskewed = _arg;
    return *this;
  }
  Type & set__cloud_corner(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud_corner = _arg;
    return *this;
  }
  Type & set__cloud_surface(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud_surface = _arg;
    return *this;
  }
  Type & set__key_frame_cloud(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->key_frame_cloud = _arg;
    return *this;
  }
  Type & set__key_frame_color(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->key_frame_color = _arg;
    return *this;
  }
  Type & set__key_frame_poses(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->key_frame_poses = _arg;
    return *this;
  }
  Type & set__key_frame_map(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->key_frame_map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    liorf::msg::CloudInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const liorf::msg::CloudInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<liorf::msg::CloudInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<liorf::msg::CloudInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      liorf::msg::CloudInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<liorf::msg::CloudInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      liorf::msg::CloudInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<liorf::msg::CloudInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<liorf::msg::CloudInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<liorf::msg::CloudInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__liorf__msg__CloudInfo
    std::shared_ptr<liorf::msg::CloudInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__liorf__msg__CloudInfo
    std::shared_ptr<liorf::msg::CloudInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CloudInfo_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->imuavailable != other.imuavailable) {
      return false;
    }
    if (this->odomavailable != other.odomavailable) {
      return false;
    }
    if (this->imurollinit != other.imurollinit) {
      return false;
    }
    if (this->imupitchinit != other.imupitchinit) {
      return false;
    }
    if (this->imuyawinit != other.imuyawinit) {
      return false;
    }
    if (this->initialguessx != other.initialguessx) {
      return false;
    }
    if (this->initialguessy != other.initialguessy) {
      return false;
    }
    if (this->initialguessz != other.initialguessz) {
      return false;
    }
    if (this->initialguessroll != other.initialguessroll) {
      return false;
    }
    if (this->initialguesspitch != other.initialguesspitch) {
      return false;
    }
    if (this->initialguessyaw != other.initialguessyaw) {
      return false;
    }
    if (this->cloud_deskewed != other.cloud_deskewed) {
      return false;
    }
    if (this->cloud_corner != other.cloud_corner) {
      return false;
    }
    if (this->cloud_surface != other.cloud_surface) {
      return false;
    }
    if (this->key_frame_cloud != other.key_frame_cloud) {
      return false;
    }
    if (this->key_frame_color != other.key_frame_color) {
      return false;
    }
    if (this->key_frame_poses != other.key_frame_poses) {
      return false;
    }
    if (this->key_frame_map != other.key_frame_map) {
      return false;
    }
    return true;
  }
  bool operator!=(const CloudInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CloudInfo_

// alias to use template instance with default allocator
using CloudInfo =
  liorf::msg::CloudInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace liorf

#endif  // LIORF__MSG__DETAIL__CLOUD_INFO__STRUCT_HPP_
