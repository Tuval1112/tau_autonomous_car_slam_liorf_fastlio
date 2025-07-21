// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from liorf:msg/CloudInfo.idl
// generated code does not contain a copyright notice
#include "liorf/msg/detail/cloud_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cloud_deskewed`
// Member `cloud_corner`
// Member `cloud_surface`
// Member `key_frame_cloud`
// Member `key_frame_color`
// Member `key_frame_poses`
// Member `key_frame_map`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
liorf__msg__CloudInfo__init(liorf__msg__CloudInfo * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    liorf__msg__CloudInfo__fini(msg);
    return false;
  }
  // imuavailable
  // odomavailable
  // imurollinit
  // imupitchinit
  // imuyawinit
  // initialguessx
  // initialguessy
  // initialguessz
  // initialguessroll
  // initialguesspitch
  // initialguessyaw
  // cloud_deskewed
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud_deskewed)) {
    liorf__msg__CloudInfo__fini(msg);
    return false;
  }
  // cloud_corner
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud_corner)) {
    liorf__msg__CloudInfo__fini(msg);
    return false;
  }
  // cloud_surface
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud_surface)) {
    liorf__msg__CloudInfo__fini(msg);
    return false;
  }
  // key_frame_cloud
  if (!sensor_msgs__msg__PointCloud2__init(&msg->key_frame_cloud)) {
    liorf__msg__CloudInfo__fini(msg);
    return false;
  }
  // key_frame_color
  if (!sensor_msgs__msg__PointCloud2__init(&msg->key_frame_color)) {
    liorf__msg__CloudInfo__fini(msg);
    return false;
  }
  // key_frame_poses
  if (!sensor_msgs__msg__PointCloud2__init(&msg->key_frame_poses)) {
    liorf__msg__CloudInfo__fini(msg);
    return false;
  }
  // key_frame_map
  if (!sensor_msgs__msg__PointCloud2__init(&msg->key_frame_map)) {
    liorf__msg__CloudInfo__fini(msg);
    return false;
  }
  return true;
}

void
liorf__msg__CloudInfo__fini(liorf__msg__CloudInfo * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // imuavailable
  // odomavailable
  // imurollinit
  // imupitchinit
  // imuyawinit
  // initialguessx
  // initialguessy
  // initialguessz
  // initialguessroll
  // initialguesspitch
  // initialguessyaw
  // cloud_deskewed
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud_deskewed);
  // cloud_corner
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud_corner);
  // cloud_surface
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud_surface);
  // key_frame_cloud
  sensor_msgs__msg__PointCloud2__fini(&msg->key_frame_cloud);
  // key_frame_color
  sensor_msgs__msg__PointCloud2__fini(&msg->key_frame_color);
  // key_frame_poses
  sensor_msgs__msg__PointCloud2__fini(&msg->key_frame_poses);
  // key_frame_map
  sensor_msgs__msg__PointCloud2__fini(&msg->key_frame_map);
}

bool
liorf__msg__CloudInfo__are_equal(const liorf__msg__CloudInfo * lhs, const liorf__msg__CloudInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // imuavailable
  if (lhs->imuavailable != rhs->imuavailable) {
    return false;
  }
  // odomavailable
  if (lhs->odomavailable != rhs->odomavailable) {
    return false;
  }
  // imurollinit
  if (lhs->imurollinit != rhs->imurollinit) {
    return false;
  }
  // imupitchinit
  if (lhs->imupitchinit != rhs->imupitchinit) {
    return false;
  }
  // imuyawinit
  if (lhs->imuyawinit != rhs->imuyawinit) {
    return false;
  }
  // initialguessx
  if (lhs->initialguessx != rhs->initialguessx) {
    return false;
  }
  // initialguessy
  if (lhs->initialguessy != rhs->initialguessy) {
    return false;
  }
  // initialguessz
  if (lhs->initialguessz != rhs->initialguessz) {
    return false;
  }
  // initialguessroll
  if (lhs->initialguessroll != rhs->initialguessroll) {
    return false;
  }
  // initialguesspitch
  if (lhs->initialguesspitch != rhs->initialguesspitch) {
    return false;
  }
  // initialguessyaw
  if (lhs->initialguessyaw != rhs->initialguessyaw) {
    return false;
  }
  // cloud_deskewed
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cloud_deskewed), &(rhs->cloud_deskewed)))
  {
    return false;
  }
  // cloud_corner
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cloud_corner), &(rhs->cloud_corner)))
  {
    return false;
  }
  // cloud_surface
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cloud_surface), &(rhs->cloud_surface)))
  {
    return false;
  }
  // key_frame_cloud
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->key_frame_cloud), &(rhs->key_frame_cloud)))
  {
    return false;
  }
  // key_frame_color
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->key_frame_color), &(rhs->key_frame_color)))
  {
    return false;
  }
  // key_frame_poses
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->key_frame_poses), &(rhs->key_frame_poses)))
  {
    return false;
  }
  // key_frame_map
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->key_frame_map), &(rhs->key_frame_map)))
  {
    return false;
  }
  return true;
}

bool
liorf__msg__CloudInfo__copy(
  const liorf__msg__CloudInfo * input,
  liorf__msg__CloudInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // imuavailable
  output->imuavailable = input->imuavailable;
  // odomavailable
  output->odomavailable = input->odomavailable;
  // imurollinit
  output->imurollinit = input->imurollinit;
  // imupitchinit
  output->imupitchinit = input->imupitchinit;
  // imuyawinit
  output->imuyawinit = input->imuyawinit;
  // initialguessx
  output->initialguessx = input->initialguessx;
  // initialguessy
  output->initialguessy = input->initialguessy;
  // initialguessz
  output->initialguessz = input->initialguessz;
  // initialguessroll
  output->initialguessroll = input->initialguessroll;
  // initialguesspitch
  output->initialguesspitch = input->initialguesspitch;
  // initialguessyaw
  output->initialguessyaw = input->initialguessyaw;
  // cloud_deskewed
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cloud_deskewed), &(output->cloud_deskewed)))
  {
    return false;
  }
  // cloud_corner
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cloud_corner), &(output->cloud_corner)))
  {
    return false;
  }
  // cloud_surface
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cloud_surface), &(output->cloud_surface)))
  {
    return false;
  }
  // key_frame_cloud
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->key_frame_cloud), &(output->key_frame_cloud)))
  {
    return false;
  }
  // key_frame_color
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->key_frame_color), &(output->key_frame_color)))
  {
    return false;
  }
  // key_frame_poses
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->key_frame_poses), &(output->key_frame_poses)))
  {
    return false;
  }
  // key_frame_map
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->key_frame_map), &(output->key_frame_map)))
  {
    return false;
  }
  return true;
}

liorf__msg__CloudInfo *
liorf__msg__CloudInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  liorf__msg__CloudInfo * msg = (liorf__msg__CloudInfo *)allocator.allocate(sizeof(liorf__msg__CloudInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(liorf__msg__CloudInfo));
  bool success = liorf__msg__CloudInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
liorf__msg__CloudInfo__destroy(liorf__msg__CloudInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    liorf__msg__CloudInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
liorf__msg__CloudInfo__Sequence__init(liorf__msg__CloudInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  liorf__msg__CloudInfo * data = NULL;

  if (size) {
    data = (liorf__msg__CloudInfo *)allocator.zero_allocate(size, sizeof(liorf__msg__CloudInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = liorf__msg__CloudInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        liorf__msg__CloudInfo__fini(&data[i - 1]);
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
liorf__msg__CloudInfo__Sequence__fini(liorf__msg__CloudInfo__Sequence * array)
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
      liorf__msg__CloudInfo__fini(&array->data[i]);
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

liorf__msg__CloudInfo__Sequence *
liorf__msg__CloudInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  liorf__msg__CloudInfo__Sequence * array = (liorf__msg__CloudInfo__Sequence *)allocator.allocate(sizeof(liorf__msg__CloudInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = liorf__msg__CloudInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
liorf__msg__CloudInfo__Sequence__destroy(liorf__msg__CloudInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    liorf__msg__CloudInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
liorf__msg__CloudInfo__Sequence__are_equal(const liorf__msg__CloudInfo__Sequence * lhs, const liorf__msg__CloudInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!liorf__msg__CloudInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
liorf__msg__CloudInfo__Sequence__copy(
  const liorf__msg__CloudInfo__Sequence * input,
  liorf__msg__CloudInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(liorf__msg__CloudInfo);
    liorf__msg__CloudInfo * data =
      (liorf__msg__CloudInfo *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!liorf__msg__CloudInfo__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          liorf__msg__CloudInfo__fini(&data[i]);
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
    if (!liorf__msg__CloudInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
