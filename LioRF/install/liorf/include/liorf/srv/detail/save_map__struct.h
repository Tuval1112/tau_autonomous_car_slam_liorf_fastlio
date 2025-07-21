// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from liorf:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef LIORF__SRV__DETAIL__SAVE_MAP__STRUCT_H_
#define LIORF__SRV__DETAIL__SAVE_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'destination'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/SaveMap in the package liorf.
typedef struct liorf__srv__SaveMap_Request
{
  float resolution;
  rosidl_runtime_c__String destination;
} liorf__srv__SaveMap_Request;

// Struct for a sequence of liorf__srv__SaveMap_Request.
typedef struct liorf__srv__SaveMap_Request__Sequence
{
  liorf__srv__SaveMap_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} liorf__srv__SaveMap_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/SaveMap in the package liorf.
typedef struct liorf__srv__SaveMap_Response
{
  bool success;
} liorf__srv__SaveMap_Response;

// Struct for a sequence of liorf__srv__SaveMap_Response.
typedef struct liorf__srv__SaveMap_Response__Sequence
{
  liorf__srv__SaveMap_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} liorf__srv__SaveMap_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LIORF__SRV__DETAIL__SAVE_MAP__STRUCT_H_
