// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from liorf:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef LIORF__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
#define LIORF__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_

#include "liorf/srv/detail/save_map__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace liorf
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Request_destination
{
public:
  explicit Init_SaveMap_Request_destination(::liorf::srv::SaveMap_Request & msg)
  : msg_(msg)
  {}
  ::liorf::srv::SaveMap_Request destination(::liorf::srv::SaveMap_Request::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return std::move(msg_);
  }

private:
  ::liorf::srv::SaveMap_Request msg_;
};

class Init_SaveMap_Request_resolution
{
public:
  Init_SaveMap_Request_resolution()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SaveMap_Request_destination resolution(::liorf::srv::SaveMap_Request::_resolution_type arg)
  {
    msg_.resolution = std::move(arg);
    return Init_SaveMap_Request_destination(msg_);
  }

private:
  ::liorf::srv::SaveMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::liorf::srv::SaveMap_Request>()
{
  return liorf::srv::builder::Init_SaveMap_Request_resolution();
}

}  // namespace liorf


namespace liorf
{

namespace srv
{

namespace builder
{

class Init_SaveMap_Response_success
{
public:
  Init_SaveMap_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::liorf::srv::SaveMap_Response success(::liorf::srv::SaveMap_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::liorf::srv::SaveMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::liorf::srv::SaveMap_Response>()
{
  return liorf::srv::builder::Init_SaveMap_Response_success();
}

}  // namespace liorf

#endif  // LIORF__SRV__DETAIL__SAVE_MAP__BUILDER_HPP_
