// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from liorf:msg/CloudInfo.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "liorf/msg/detail/cloud_info__struct.h"
#include "liorf/msg/detail/cloud_info__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool std_msgs__msg__header__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * std_msgs__msg__header__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool sensor_msgs__msg__point_cloud2__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * sensor_msgs__msg__point_cloud2__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool liorf__msg__cloud_info__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[32];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("liorf.msg._cloud_info.CloudInfo", full_classname_dest, 31) == 0);
  }
  liorf__msg__CloudInfo * ros_message = _ros_message;
  {  // header
    PyObject * field = PyObject_GetAttrString(_pymsg, "header");
    if (!field) {
      return false;
    }
    if (!std_msgs__msg__header__convert_from_py(field, &ros_message->header)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // imuavailable
    PyObject * field = PyObject_GetAttrString(_pymsg, "imuavailable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->imuavailable = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // odomavailable
    PyObject * field = PyObject_GetAttrString(_pymsg, "odomavailable");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->odomavailable = PyLong_AsLongLong(field);
    Py_DECREF(field);
  }
  {  // imurollinit
    PyObject * field = PyObject_GetAttrString(_pymsg, "imurollinit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imurollinit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imupitchinit
    PyObject * field = PyObject_GetAttrString(_pymsg, "imupitchinit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imupitchinit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // imuyawinit
    PyObject * field = PyObject_GetAttrString(_pymsg, "imuyawinit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->imuyawinit = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initialguessx
    PyObject * field = PyObject_GetAttrString(_pymsg, "initialguessx");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initialguessx = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initialguessy
    PyObject * field = PyObject_GetAttrString(_pymsg, "initialguessy");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initialguessy = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initialguessz
    PyObject * field = PyObject_GetAttrString(_pymsg, "initialguessz");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initialguessz = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initialguessroll
    PyObject * field = PyObject_GetAttrString(_pymsg, "initialguessroll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initialguessroll = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initialguesspitch
    PyObject * field = PyObject_GetAttrString(_pymsg, "initialguesspitch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initialguesspitch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // initialguessyaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "initialguessyaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->initialguessyaw = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // cloud_deskewed
    PyObject * field = PyObject_GetAttrString(_pymsg, "cloud_deskewed");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->cloud_deskewed)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cloud_corner
    PyObject * field = PyObject_GetAttrString(_pymsg, "cloud_corner");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->cloud_corner)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // cloud_surface
    PyObject * field = PyObject_GetAttrString(_pymsg, "cloud_surface");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->cloud_surface)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // key_frame_cloud
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_frame_cloud");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->key_frame_cloud)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // key_frame_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_frame_color");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->key_frame_color)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // key_frame_poses
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_frame_poses");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->key_frame_poses)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // key_frame_map
    PyObject * field = PyObject_GetAttrString(_pymsg, "key_frame_map");
    if (!field) {
      return false;
    }
    if (!sensor_msgs__msg__point_cloud2__convert_from_py(field, &ros_message->key_frame_map)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * liorf__msg__cloud_info__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CloudInfo */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("liorf.msg._cloud_info");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CloudInfo");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  liorf__msg__CloudInfo * ros_message = (liorf__msg__CloudInfo *)raw_ros_message;
  {  // header
    PyObject * field = NULL;
    field = std_msgs__msg__header__convert_to_py(&ros_message->header);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "header", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imuavailable
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->imuavailable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imuavailable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // odomavailable
    PyObject * field = NULL;
    field = PyLong_FromLongLong(ros_message->odomavailable);
    {
      int rc = PyObject_SetAttrString(_pymessage, "odomavailable", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imurollinit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imurollinit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imurollinit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imupitchinit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imupitchinit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imupitchinit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imuyawinit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->imuyawinit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "imuyawinit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initialguessx
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initialguessx);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initialguessx", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initialguessy
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initialguessy);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initialguessy", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initialguessz
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initialguessz);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initialguessz", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initialguessroll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initialguessroll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initialguessroll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initialguesspitch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initialguesspitch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initialguesspitch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // initialguessyaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->initialguessyaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "initialguessyaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cloud_deskewed
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->cloud_deskewed);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cloud_deskewed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cloud_corner
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->cloud_corner);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cloud_corner", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // cloud_surface
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->cloud_surface);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "cloud_surface", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_frame_cloud
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->key_frame_cloud);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_frame_cloud", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_frame_color
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->key_frame_color);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_frame_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_frame_poses
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->key_frame_poses);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_frame_poses", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // key_frame_map
    PyObject * field = NULL;
    field = sensor_msgs__msg__point_cloud2__convert_to_py(&ros_message->key_frame_map);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "key_frame_map", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
