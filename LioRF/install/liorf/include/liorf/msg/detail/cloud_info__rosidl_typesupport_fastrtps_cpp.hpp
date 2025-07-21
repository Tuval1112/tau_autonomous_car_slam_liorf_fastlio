// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from liorf:msg/CloudInfo.idl
// generated code does not contain a copyright notice

#ifndef LIORF__MSG__DETAIL__CLOUD_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define LIORF__MSG__DETAIL__CLOUD_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "liorf/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "liorf/msg/detail/cloud_info__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace liorf
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_liorf
cdr_serialize(
  const liorf::msg::CloudInfo & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_liorf
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  liorf::msg::CloudInfo & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_liorf
get_serialized_size(
  const liorf::msg::CloudInfo & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_liorf
max_serialized_size_CloudInfo(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace liorf

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_liorf
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, liorf, msg, CloudInfo)();

#ifdef __cplusplus
}
#endif

#endif  // LIORF__MSG__DETAIL__CLOUD_INFO__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
