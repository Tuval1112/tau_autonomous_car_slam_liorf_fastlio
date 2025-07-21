// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from liorf:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef LIORF__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_
#define LIORF__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_

#include "liorf/srv/detail/save_map__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<liorf::srv::SaveMap_Request>()
{
  return "liorf::srv::SaveMap_Request";
}

template<>
inline const char * name<liorf::srv::SaveMap_Request>()
{
  return "liorf/srv/SaveMap_Request";
}

template<>
struct has_fixed_size<liorf::srv::SaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<liorf::srv::SaveMap_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<liorf::srv::SaveMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<liorf::srv::SaveMap_Response>()
{
  return "liorf::srv::SaveMap_Response";
}

template<>
inline const char * name<liorf::srv::SaveMap_Response>()
{
  return "liorf/srv/SaveMap_Response";
}

template<>
struct has_fixed_size<liorf::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<liorf::srv::SaveMap_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<liorf::srv::SaveMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<liorf::srv::SaveMap>()
{
  return "liorf::srv::SaveMap";
}

template<>
inline const char * name<liorf::srv::SaveMap>()
{
  return "liorf/srv/SaveMap";
}

template<>
struct has_fixed_size<liorf::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_fixed_size<liorf::srv::SaveMap_Request>::value &&
    has_fixed_size<liorf::srv::SaveMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<liorf::srv::SaveMap>
  : std::integral_constant<
    bool,
    has_bounded_size<liorf::srv::SaveMap_Request>::value &&
    has_bounded_size<liorf::srv::SaveMap_Response>::value
  >
{
};

template<>
struct is_service<liorf::srv::SaveMap>
  : std::true_type
{
};

template<>
struct is_service_request<liorf::srv::SaveMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<liorf::srv::SaveMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // LIORF__SRV__DETAIL__SAVE_MAP__TRAITS_HPP_
