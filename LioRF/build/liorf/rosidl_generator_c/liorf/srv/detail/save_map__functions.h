// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from liorf:srv/SaveMap.idl
// generated code does not contain a copyright notice

#ifndef LIORF__SRV__DETAIL__SAVE_MAP__FUNCTIONS_H_
#define LIORF__SRV__DETAIL__SAVE_MAP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "liorf/msg/rosidl_generator_c__visibility_control.h"

#include "liorf/srv/detail/save_map__struct.h"

/// Initialize srv/SaveMap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * liorf__srv__SaveMap_Request
 * )) before or use
 * liorf__srv__SaveMap_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Request__init(liorf__srv__SaveMap_Request * msg);

/// Finalize srv/SaveMap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
void
liorf__srv__SaveMap_Request__fini(liorf__srv__SaveMap_Request * msg);

/// Create srv/SaveMap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * liorf__srv__SaveMap_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
liorf__srv__SaveMap_Request *
liorf__srv__SaveMap_Request__create();

/// Destroy srv/SaveMap message.
/**
 * It calls
 * liorf__srv__SaveMap_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
void
liorf__srv__SaveMap_Request__destroy(liorf__srv__SaveMap_Request * msg);

/// Check for srv/SaveMap message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Request__are_equal(const liorf__srv__SaveMap_Request * lhs, const liorf__srv__SaveMap_Request * rhs);

/// Copy a srv/SaveMap message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Request__copy(
  const liorf__srv__SaveMap_Request * input,
  liorf__srv__SaveMap_Request * output);

/// Initialize array of srv/SaveMap messages.
/**
 * It allocates the memory for the number of elements and calls
 * liorf__srv__SaveMap_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Request__Sequence__init(liorf__srv__SaveMap_Request__Sequence * array, size_t size);

/// Finalize array of srv/SaveMap messages.
/**
 * It calls
 * liorf__srv__SaveMap_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
void
liorf__srv__SaveMap_Request__Sequence__fini(liorf__srv__SaveMap_Request__Sequence * array);

/// Create array of srv/SaveMap messages.
/**
 * It allocates the memory for the array and calls
 * liorf__srv__SaveMap_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
liorf__srv__SaveMap_Request__Sequence *
liorf__srv__SaveMap_Request__Sequence__create(size_t size);

/// Destroy array of srv/SaveMap messages.
/**
 * It calls
 * liorf__srv__SaveMap_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
void
liorf__srv__SaveMap_Request__Sequence__destroy(liorf__srv__SaveMap_Request__Sequence * array);

/// Check for srv/SaveMap message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Request__Sequence__are_equal(const liorf__srv__SaveMap_Request__Sequence * lhs, const liorf__srv__SaveMap_Request__Sequence * rhs);

/// Copy an array of srv/SaveMap messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Request__Sequence__copy(
  const liorf__srv__SaveMap_Request__Sequence * input,
  liorf__srv__SaveMap_Request__Sequence * output);

/// Initialize srv/SaveMap message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * liorf__srv__SaveMap_Response
 * )) before or use
 * liorf__srv__SaveMap_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Response__init(liorf__srv__SaveMap_Response * msg);

/// Finalize srv/SaveMap message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
void
liorf__srv__SaveMap_Response__fini(liorf__srv__SaveMap_Response * msg);

/// Create srv/SaveMap message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * liorf__srv__SaveMap_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
liorf__srv__SaveMap_Response *
liorf__srv__SaveMap_Response__create();

/// Destroy srv/SaveMap message.
/**
 * It calls
 * liorf__srv__SaveMap_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
void
liorf__srv__SaveMap_Response__destroy(liorf__srv__SaveMap_Response * msg);

/// Check for srv/SaveMap message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Response__are_equal(const liorf__srv__SaveMap_Response * lhs, const liorf__srv__SaveMap_Response * rhs);

/// Copy a srv/SaveMap message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Response__copy(
  const liorf__srv__SaveMap_Response * input,
  liorf__srv__SaveMap_Response * output);

/// Initialize array of srv/SaveMap messages.
/**
 * It allocates the memory for the number of elements and calls
 * liorf__srv__SaveMap_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Response__Sequence__init(liorf__srv__SaveMap_Response__Sequence * array, size_t size);

/// Finalize array of srv/SaveMap messages.
/**
 * It calls
 * liorf__srv__SaveMap_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
void
liorf__srv__SaveMap_Response__Sequence__fini(liorf__srv__SaveMap_Response__Sequence * array);

/// Create array of srv/SaveMap messages.
/**
 * It allocates the memory for the array and calls
 * liorf__srv__SaveMap_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
liorf__srv__SaveMap_Response__Sequence *
liorf__srv__SaveMap_Response__Sequence__create(size_t size);

/// Destroy array of srv/SaveMap messages.
/**
 * It calls
 * liorf__srv__SaveMap_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
void
liorf__srv__SaveMap_Response__Sequence__destroy(liorf__srv__SaveMap_Response__Sequence * array);

/// Check for srv/SaveMap message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Response__Sequence__are_equal(const liorf__srv__SaveMap_Response__Sequence * lhs, const liorf__srv__SaveMap_Response__Sequence * rhs);

/// Copy an array of srv/SaveMap messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_liorf
bool
liorf__srv__SaveMap_Response__Sequence__copy(
  const liorf__srv__SaveMap_Response__Sequence * input,
  liorf__srv__SaveMap_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LIORF__SRV__DETAIL__SAVE_MAP__FUNCTIONS_H_
