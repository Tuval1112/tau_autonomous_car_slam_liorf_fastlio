// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from liorf:msg/CloudInfo.idl
// generated code does not contain a copyright notice

#ifndef LIORF__MSG__DETAIL__CLOUD_INFO__BUILDER_HPP_
#define LIORF__MSG__DETAIL__CLOUD_INFO__BUILDER_HPP_

#include "liorf/msg/detail/cloud_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace liorf
{

namespace msg
{

namespace builder
{

class Init_CloudInfo_key_frame_map
{
public:
  explicit Init_CloudInfo_key_frame_map(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  ::liorf::msg::CloudInfo key_frame_map(::liorf::msg::CloudInfo::_key_frame_map_type arg)
  {
    msg_.key_frame_map = std::move(arg);
    return std::move(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_key_frame_poses
{
public:
  explicit Init_CloudInfo_key_frame_poses(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_key_frame_map key_frame_poses(::liorf::msg::CloudInfo::_key_frame_poses_type arg)
  {
    msg_.key_frame_poses = std::move(arg);
    return Init_CloudInfo_key_frame_map(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_key_frame_color
{
public:
  explicit Init_CloudInfo_key_frame_color(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_key_frame_poses key_frame_color(::liorf::msg::CloudInfo::_key_frame_color_type arg)
  {
    msg_.key_frame_color = std::move(arg);
    return Init_CloudInfo_key_frame_poses(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_key_frame_cloud
{
public:
  explicit Init_CloudInfo_key_frame_cloud(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_key_frame_color key_frame_cloud(::liorf::msg::CloudInfo::_key_frame_cloud_type arg)
  {
    msg_.key_frame_cloud = std::move(arg);
    return Init_CloudInfo_key_frame_color(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_cloud_surface
{
public:
  explicit Init_CloudInfo_cloud_surface(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_key_frame_cloud cloud_surface(::liorf::msg::CloudInfo::_cloud_surface_type arg)
  {
    msg_.cloud_surface = std::move(arg);
    return Init_CloudInfo_key_frame_cloud(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_cloud_corner
{
public:
  explicit Init_CloudInfo_cloud_corner(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_cloud_surface cloud_corner(::liorf::msg::CloudInfo::_cloud_corner_type arg)
  {
    msg_.cloud_corner = std::move(arg);
    return Init_CloudInfo_cloud_surface(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_cloud_deskewed
{
public:
  explicit Init_CloudInfo_cloud_deskewed(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_cloud_corner cloud_deskewed(::liorf::msg::CloudInfo::_cloud_deskewed_type arg)
  {
    msg_.cloud_deskewed = std::move(arg);
    return Init_CloudInfo_cloud_corner(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_initialguessyaw
{
public:
  explicit Init_CloudInfo_initialguessyaw(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_cloud_deskewed initialguessyaw(::liorf::msg::CloudInfo::_initialguessyaw_type arg)
  {
    msg_.initialguessyaw = std::move(arg);
    return Init_CloudInfo_cloud_deskewed(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_initialguesspitch
{
public:
  explicit Init_CloudInfo_initialguesspitch(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_initialguessyaw initialguesspitch(::liorf::msg::CloudInfo::_initialguesspitch_type arg)
  {
    msg_.initialguesspitch = std::move(arg);
    return Init_CloudInfo_initialguessyaw(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_initialguessroll
{
public:
  explicit Init_CloudInfo_initialguessroll(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_initialguesspitch initialguessroll(::liorf::msg::CloudInfo::_initialguessroll_type arg)
  {
    msg_.initialguessroll = std::move(arg);
    return Init_CloudInfo_initialguesspitch(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_initialguessz
{
public:
  explicit Init_CloudInfo_initialguessz(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_initialguessroll initialguessz(::liorf::msg::CloudInfo::_initialguessz_type arg)
  {
    msg_.initialguessz = std::move(arg);
    return Init_CloudInfo_initialguessroll(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_initialguessy
{
public:
  explicit Init_CloudInfo_initialguessy(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_initialguessz initialguessy(::liorf::msg::CloudInfo::_initialguessy_type arg)
  {
    msg_.initialguessy = std::move(arg);
    return Init_CloudInfo_initialguessz(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_initialguessx
{
public:
  explicit Init_CloudInfo_initialguessx(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_initialguessy initialguessx(::liorf::msg::CloudInfo::_initialguessx_type arg)
  {
    msg_.initialguessx = std::move(arg);
    return Init_CloudInfo_initialguessy(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_imuyawinit
{
public:
  explicit Init_CloudInfo_imuyawinit(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_initialguessx imuyawinit(::liorf::msg::CloudInfo::_imuyawinit_type arg)
  {
    msg_.imuyawinit = std::move(arg);
    return Init_CloudInfo_initialguessx(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_imupitchinit
{
public:
  explicit Init_CloudInfo_imupitchinit(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_imuyawinit imupitchinit(::liorf::msg::CloudInfo::_imupitchinit_type arg)
  {
    msg_.imupitchinit = std::move(arg);
    return Init_CloudInfo_imuyawinit(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_imurollinit
{
public:
  explicit Init_CloudInfo_imurollinit(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_imupitchinit imurollinit(::liorf::msg::CloudInfo::_imurollinit_type arg)
  {
    msg_.imurollinit = std::move(arg);
    return Init_CloudInfo_imupitchinit(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_odomavailable
{
public:
  explicit Init_CloudInfo_odomavailable(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_imurollinit odomavailable(::liorf::msg::CloudInfo::_odomavailable_type arg)
  {
    msg_.odomavailable = std::move(arg);
    return Init_CloudInfo_imurollinit(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_imuavailable
{
public:
  explicit Init_CloudInfo_imuavailable(::liorf::msg::CloudInfo & msg)
  : msg_(msg)
  {}
  Init_CloudInfo_odomavailable imuavailable(::liorf::msg::CloudInfo::_imuavailable_type arg)
  {
    msg_.imuavailable = std::move(arg);
    return Init_CloudInfo_odomavailable(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

class Init_CloudInfo_header
{
public:
  Init_CloudInfo_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CloudInfo_imuavailable header(::liorf::msg::CloudInfo::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CloudInfo_imuavailable(msg_);
  }

private:
  ::liorf::msg::CloudInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::liorf::msg::CloudInfo>()
{
  return liorf::msg::builder::Init_CloudInfo_header();
}

}  // namespace liorf

#endif  // LIORF__MSG__DETAIL__CLOUD_INFO__BUILDER_HPP_
