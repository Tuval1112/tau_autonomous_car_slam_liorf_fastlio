// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from liorf:srv/SaveMap.idl
// generated code does not contain a copyright notice
#include "liorf/srv/detail/save_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `destination`
#include "rosidl_runtime_c/string_functions.h"

bool
liorf__srv__SaveMap_Request__init(liorf__srv__SaveMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // resolution
  // destination
  if (!rosidl_runtime_c__String__init(&msg->destination)) {
    liorf__srv__SaveMap_Request__fini(msg);
    return false;
  }
  return true;
}

void
liorf__srv__SaveMap_Request__fini(liorf__srv__SaveMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // resolution
  // destination
  rosidl_runtime_c__String__fini(&msg->destination);
}

bool
liorf__srv__SaveMap_Request__are_equal(const liorf__srv__SaveMap_Request * lhs, const liorf__srv__SaveMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resolution
  if (lhs->resolution != rhs->resolution) {
    return false;
  }
  // destination
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->destination), &(rhs->destination)))
  {
    return false;
  }
  return true;
}

bool
liorf__srv__SaveMap_Request__copy(
  const liorf__srv__SaveMap_Request * input,
  liorf__srv__SaveMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // resolution
  output->resolution = input->resolution;
  // destination
  if (!rosidl_runtime_c__String__copy(
      &(input->destination), &(output->destination)))
  {
    return false;
  }
  return true;
}

liorf__srv__SaveMap_Request *
liorf__srv__SaveMap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  liorf__srv__SaveMap_Request * msg = (liorf__srv__SaveMap_Request *)allocator.allocate(sizeof(liorf__srv__SaveMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(liorf__srv__SaveMap_Request));
  bool success = liorf__srv__SaveMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
liorf__srv__SaveMap_Request__destroy(liorf__srv__SaveMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    liorf__srv__SaveMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
liorf__srv__SaveMap_Request__Sequence__init(liorf__srv__SaveMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  liorf__srv__SaveMap_Request * data = NULL;

  if (size) {
    data = (liorf__srv__SaveMap_Request *)allocator.zero_allocate(size, sizeof(liorf__srv__SaveMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = liorf__srv__SaveMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        liorf__srv__SaveMap_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
liorf__srv__SaveMap_Request__Sequence__fini(liorf__srv__SaveMap_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      liorf__srv__SaveMap_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

liorf__srv__SaveMap_Request__Sequence *
liorf__srv__SaveMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  liorf__srv__SaveMap_Request__Sequence * array = (liorf__srv__SaveMap_Request__Sequence *)allocator.allocate(sizeof(liorf__srv__SaveMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = liorf__srv__SaveMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
liorf__srv__SaveMap_Request__Sequence__destroy(liorf__srv__SaveMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    liorf__srv__SaveMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
liorf__srv__SaveMap_Request__Sequence__are_equal(const liorf__srv__SaveMap_Request__Sequence * lhs, const liorf__srv__SaveMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!liorf__srv__SaveMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
liorf__srv__SaveMap_Request__Sequence__copy(
  const liorf__srv__SaveMap_Request__Sequence * input,
  liorf__srv__SaveMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(liorf__srv__SaveMap_Request);
    liorf__srv__SaveMap_Request * data =
      (liorf__srv__SaveMap_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!liorf__srv__SaveMap_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          liorf__srv__SaveMap_Request__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!liorf__srv__SaveMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
liorf__srv__SaveMap_Response__init(liorf__srv__SaveMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
liorf__srv__SaveMap_Response__fini(liorf__srv__SaveMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
liorf__srv__SaveMap_Response__are_equal(const liorf__srv__SaveMap_Response * lhs, const liorf__srv__SaveMap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
liorf__srv__SaveMap_Response__copy(
  const liorf__srv__SaveMap_Response * input,
  liorf__srv__SaveMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

liorf__srv__SaveMap_Response *
liorf__srv__SaveMap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  liorf__srv__SaveMap_Response * msg = (liorf__srv__SaveMap_Response *)allocator.allocate(sizeof(liorf__srv__SaveMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(liorf__srv__SaveMap_Response));
  bool success = liorf__srv__SaveMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
liorf__srv__SaveMap_Response__destroy(liorf__srv__SaveMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    liorf__srv__SaveMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
liorf__srv__SaveMap_Response__Sequence__init(liorf__srv__SaveMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  liorf__srv__SaveMap_Response * data = NULL;

  if (size) {
    data = (liorf__srv__SaveMap_Response *)allocator.zero_allocate(size, sizeof(liorf__srv__SaveMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = liorf__srv__SaveMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        liorf__srv__SaveMap_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
liorf__srv__SaveMap_Response__Sequence__fini(liorf__srv__SaveMap_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      liorf__srv__SaveMap_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

liorf__srv__SaveMap_Response__Sequence *
liorf__srv__SaveMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  liorf__srv__SaveMap_Response__Sequence * array = (liorf__srv__SaveMap_Response__Sequence *)allocator.allocate(sizeof(liorf__srv__SaveMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = liorf__srv__SaveMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
liorf__srv__SaveMap_Response__Sequence__destroy(liorf__srv__SaveMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    liorf__srv__SaveMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
liorf__srv__SaveMap_Response__Sequence__are_equal(const liorf__srv__SaveMap_Response__Sequence * lhs, const liorf__srv__SaveMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!liorf__srv__SaveMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
liorf__srv__SaveMap_Response__Sequence__copy(
  const liorf__srv__SaveMap_Response__Sequence * input,
  liorf__srv__SaveMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(liorf__srv__SaveMap_Response);
    liorf__srv__SaveMap_Response * data =
      (liorf__srv__SaveMap_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!liorf__srv__SaveMap_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          liorf__srv__SaveMap_Response__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!liorf__srv__SaveMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
