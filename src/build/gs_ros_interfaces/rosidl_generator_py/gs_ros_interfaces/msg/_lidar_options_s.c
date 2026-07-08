// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gs_ros_interfaces:msg/LidarOptions.idl
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
#include "gs_ros_interfaces/msg/detail/lidar_options__struct.h"
#include "gs_ros_interfaces/msg/detail/lidar_options__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool gs_ros_interfaces__msg__general_sensor_options__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__general_sensor_options__convert_to_py(void * raw_ros_message);
bool gs_ros_interfaces__msg__ros_sensor_options__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__ros_sensor_options__convert_to_py(void * raw_ros_message);
bool gs_ros_interfaces__msg__rigid_sensor_options__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__rigid_sensor_options__convert_to_py(void * raw_ros_message);
bool gs_ros_interfaces__msg__grid_ray_caster_pattern__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__grid_ray_caster_pattern__convert_to_py(void * raw_ros_message);
bool gs_ros_interfaces__msg__spherical_ray_caster_pattern__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__spherical_ray_caster_pattern__convert_to_py(void * raw_ros_message);
bool gs_ros_interfaces__msg__depth_camera_ray_caster_pattern__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__depth_camera_ray_caster_pattern__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gs_ros_interfaces__msg__lidar_options__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[50];
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
    assert(strncmp("gs_ros_interfaces.msg._lidar_options.LidarOptions", full_classname_dest, 49) == 0);
  }
  gs_ros_interfaces__msg__LidarOptions * ros_message = _ros_message;
  {  // options
    PyObject * field = PyObject_GetAttrString(_pymsg, "options");
    if (!field) {
      return false;
    }
    if (!gs_ros_interfaces__msg__general_sensor_options__convert_from_py(field, &ros_message->options)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // ros_options
    PyObject * field = PyObject_GetAttrString(_pymsg, "ros_options");
    if (!field) {
      return false;
    }
    if (!gs_ros_interfaces__msg__ros_sensor_options__convert_from_py(field, &ros_message->ros_options)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // rigid_options
    PyObject * field = PyObject_GetAttrString(_pymsg, "rigid_options");
    if (!field) {
      return false;
    }
    if (!gs_ros_interfaces__msg__rigid_sensor_options__convert_from_py(field, &ros_message->rigid_options)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // grid_pattern_options
    PyObject * field = PyObject_GetAttrString(_pymsg, "grid_pattern_options");
    if (!field) {
      return false;
    }
    if (!gs_ros_interfaces__msg__grid_ray_caster_pattern__convert_from_py(field, &ros_message->grid_pattern_options)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // spherical_pattern_options
    PyObject * field = PyObject_GetAttrString(_pymsg, "spherical_pattern_options");
    if (!field) {
      return false;
    }
    if (!gs_ros_interfaces__msg__spherical_ray_caster_pattern__convert_from_py(field, &ros_message->spherical_pattern_options)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // depth_camera_pattern_options
    PyObject * field = PyObject_GetAttrString(_pymsg, "depth_camera_pattern_options");
    if (!field) {
      return false;
    }
    if (!gs_ros_interfaces__msg__depth_camera_ray_caster_pattern__convert_from_py(field, &ros_message->depth_camera_pattern_options)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // min_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "min_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->min_range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // max_range
    PyObject * field = PyObject_GetAttrString(_pymsg, "max_range");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->max_range = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // no_hit_value
    PyObject * field = PyObject_GetAttrString(_pymsg, "no_hit_value");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->no_hit_value = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // return_points_in_world_frame
    PyObject * field = PyObject_GetAttrString(_pymsg, "return_points_in_world_frame");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->return_points_in_world_frame = (Py_True == field);
    Py_DECREF(field);
  }
  {  // draw_point_radius
    PyObject * field = PyObject_GetAttrString(_pymsg, "draw_point_radius");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->draw_point_radius = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // ray_start_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "ray_start_color");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->ray_start_color), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->ray_start_color.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ray_start_color'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->ray_start_color), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->ray_start_color.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // ray_hit_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "ray_hit_color");
    if (!field) {
      return false;
    }
    if (PyObject_CheckBuffer(field)) {
      // Optimization for converting arrays of primitives
      Py_buffer view;
      int rc = PyObject_GetBuffer(field, &view, PyBUF_SIMPLE);
      if (rc < 0) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = view.len / sizeof(float);
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->ray_hit_color), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->ray_hit_color.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'ray_hit_color'");
      if (!seq_field) {
        Py_DECREF(field);
        return false;
      }
      Py_ssize_t size = PySequence_Size(field);
      if (-1 == size) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      if (!rosidl_runtime_c__float__Sequence__init(&(ros_message->ray_hit_color), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create float__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      float * dest = ros_message->ray_hit_color.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyFloat_Check(item));
        float tmp = (float)PyFloat_AS_DOUBLE(item);
        memcpy(&dest[i], &tmp, sizeof(float));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // add_noise
    PyObject * field = PyObject_GetAttrString(_pymsg, "add_noise");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->add_noise = (Py_True == field);
    Py_DECREF(field);
  }
  {  // noise_mean
    PyObject * field = PyObject_GetAttrString(_pymsg, "noise_mean");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->noise_mean = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // noise_std
    PyObject * field = PyObject_GetAttrString(_pymsg, "noise_std");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->noise_std = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gs_ros_interfaces__msg__lidar_options__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of LidarOptions */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gs_ros_interfaces.msg._lidar_options");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "LidarOptions");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gs_ros_interfaces__msg__LidarOptions * ros_message = (gs_ros_interfaces__msg__LidarOptions *)raw_ros_message;
  {  // options
    PyObject * field = NULL;
    field = gs_ros_interfaces__msg__general_sensor_options__convert_to_py(&ros_message->options);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "options", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ros_options
    PyObject * field = NULL;
    field = gs_ros_interfaces__msg__ros_sensor_options__convert_to_py(&ros_message->ros_options);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "ros_options", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // rigid_options
    PyObject * field = NULL;
    field = gs_ros_interfaces__msg__rigid_sensor_options__convert_to_py(&ros_message->rigid_options);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "rigid_options", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // grid_pattern_options
    PyObject * field = NULL;
    field = gs_ros_interfaces__msg__grid_ray_caster_pattern__convert_to_py(&ros_message->grid_pattern_options);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "grid_pattern_options", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spherical_pattern_options
    PyObject * field = NULL;
    field = gs_ros_interfaces__msg__spherical_ray_caster_pattern__convert_to_py(&ros_message->spherical_pattern_options);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "spherical_pattern_options", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // depth_camera_pattern_options
    PyObject * field = NULL;
    field = gs_ros_interfaces__msg__depth_camera_ray_caster_pattern__convert_to_py(&ros_message->depth_camera_pattern_options);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "depth_camera_pattern_options", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // min_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->min_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "min_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // max_range
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->max_range);
    {
      int rc = PyObject_SetAttrString(_pymessage, "max_range", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // no_hit_value
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->no_hit_value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "no_hit_value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // return_points_in_world_frame
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->return_points_in_world_frame ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "return_points_in_world_frame", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // draw_point_radius
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->draw_point_radius);
    {
      int rc = PyObject_SetAttrString(_pymessage, "draw_point_radius", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // ray_start_color
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "ray_start_color");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->ray_start_color.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->ray_start_color.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->ray_start_color.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // ray_hit_color
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "ray_hit_color");
    if (!field) {
      return NULL;
    }
    assert(field->ob_type != NULL);
    assert(field->ob_type->tp_name != NULL);
    assert(strcmp(field->ob_type->tp_name, "array.array") == 0);
    // ensure that itemsize matches the sizeof of the ROS message field
    PyObject * itemsize_attr = PyObject_GetAttrString(field, "itemsize");
    assert(itemsize_attr != NULL);
    size_t itemsize = PyLong_AsSize_t(itemsize_attr);
    Py_DECREF(itemsize_attr);
    if (itemsize != sizeof(float)) {
      PyErr_SetString(PyExc_RuntimeError, "itemsize doesn't match expectation");
      Py_DECREF(field);
      return NULL;
    }
    // clear the array, poor approach to remove potential default values
    Py_ssize_t length = PyObject_Length(field);
    if (-1 == length) {
      Py_DECREF(field);
      return NULL;
    }
    if (length > 0) {
      PyObject * pop = PyObject_GetAttrString(field, "pop");
      assert(pop != NULL);
      for (Py_ssize_t i = 0; i < length; ++i) {
        PyObject * ret = PyObject_CallFunctionObjArgs(pop, NULL);
        if (!ret) {
          Py_DECREF(pop);
          Py_DECREF(field);
          return NULL;
        }
        Py_DECREF(ret);
      }
      Py_DECREF(pop);
    }
    if (ros_message->ray_hit_color.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      float * src = &(ros_message->ray_hit_color.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->ray_hit_color.size * sizeof(float));
      assert(data != NULL);
      PyObject * ret = PyObject_CallFunctionObjArgs(frombytes, data, NULL);
      Py_DECREF(data);
      Py_DECREF(frombytes);
      if (!ret) {
        Py_DECREF(field);
        return NULL;
      }
      Py_DECREF(ret);
    }
    Py_DECREF(field);
  }
  {  // add_noise
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->add_noise ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "add_noise", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // noise_mean
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->noise_mean);
    {
      int rc = PyObject_SetAttrString(_pymessage, "noise_mean", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // noise_std
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->noise_std);
    {
      int rc = PyObject_SetAttrString(_pymessage, "noise_std", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
