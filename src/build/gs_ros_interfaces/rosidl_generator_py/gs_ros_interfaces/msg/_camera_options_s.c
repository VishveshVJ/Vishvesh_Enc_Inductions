// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gs_ros_interfaces:msg/CameraOptions.idl
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
#include "gs_ros_interfaces/msg/detail/camera_options__struct.h"
#include "gs_ros_interfaces/msg/detail/camera_options__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"
#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

bool gs_ros_interfaces__msg__general_sensor_options__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__general_sensor_options__convert_to_py(void * raw_ros_message);
bool gs_ros_interfaces__msg__ros_sensor_options__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__ros_sensor_options__convert_to_py(void * raw_ros_message);
bool gs_ros_interfaces__msg__rigid_sensor_options__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__rigid_sensor_options__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gs_ros_interfaces__msg__camera_options__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[52];
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
    assert(strncmp("gs_ros_interfaces.msg._camera_options.CameraOptions", full_classname_dest, 51) == 0);
  }
  gs_ros_interfaces__msg__CameraOptions * ros_message = _ros_message;
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
  {  // camera_types
    PyObject * field = PyObject_GetAttrString(_pymsg, "camera_types");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'camera_types'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->camera_types), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->camera_types.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyUnicode_Check(item));
        PyObject * encoded_item = PyUnicode_AsUTF8String(item);
        if (!encoded_item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        rosidl_runtime_c__String__assign(&dest[i], PyBytes_AS_STRING(encoded_item));
        Py_DECREF(encoded_item);
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // res
    PyObject * field = PyObject_GetAttrString(_pymsg, "res");
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
      Py_ssize_t size = view.len / sizeof(int32_t);
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->res), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->res.data;
      rc = PyBuffer_ToContiguous(dest, &view, view.len, 'C');
      if (rc < 0) {
        PyBuffer_Release(&view);
        Py_DECREF(field);
        return false;
      }
      PyBuffer_Release(&view);
    } else {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'res'");
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
      if (!rosidl_runtime_c__int32__Sequence__init(&(ros_message->res), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create int32__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      int32_t * dest = ros_message->res.data;
      for (Py_ssize_t i = 0; i < size; ++i) {
        PyObject * item = PySequence_Fast_GET_ITEM(seq_field, i);
        if (!item) {
          Py_DECREF(seq_field);
          Py_DECREF(field);
          return false;
        }
        assert(PyLong_Check(item));
        int32_t tmp = (int32_t)PyLong_AsLong(item);
        memcpy(&dest[i], &tmp, sizeof(int32_t));
      }
      Py_DECREF(seq_field);
    }
    Py_DECREF(field);
  }
  {  // fov
    PyObject * field = PyObject_GetAttrString(_pymsg, "fov");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->fov = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // near
    PyObject * field = PyObject_GetAttrString(_pymsg, "near");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->near = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // far
    PyObject * field = PyObject_GetAttrString(_pymsg, "far");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->far = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // aperture
    PyObject * field = PyObject_GetAttrString(_pymsg, "aperture");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->aperture = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // denoise
    PyObject * field = PyObject_GetAttrString(_pymsg, "denoise");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->denoise = (Py_True == field);
    Py_DECREF(field);
  }
  {  // spp
    PyObject * field = PyObject_GetAttrString(_pymsg, "spp");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->spp = (int32_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // model
    PyObject * field = PyObject_GetAttrString(_pymsg, "model");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->model, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // focus_dist
    PyObject * field = PyObject_GetAttrString(_pymsg, "focus_dist");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->focus_dist = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // gui
    PyObject * field = PyObject_GetAttrString(_pymsg, "gui");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->gui = (Py_True == field);
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
PyObject * gs_ros_interfaces__msg__camera_options__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of CameraOptions */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gs_ros_interfaces.msg._camera_options");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "CameraOptions");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gs_ros_interfaces__msg__CameraOptions * ros_message = (gs_ros_interfaces__msg__CameraOptions *)raw_ros_message;
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
  {  // camera_types
    PyObject * field = NULL;
    size_t size = ros_message->camera_types.size;
    rosidl_runtime_c__String * src = ros_message->camera_types.data;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    for (size_t i = 0; i < size; ++i) {
      PyObject * decoded_item = PyUnicode_DecodeUTF8(src[i].data, strlen(src[i].data), "replace");
      if (!decoded_item) {
        return NULL;
      }
      int rc = PyList_SetItem(field, i, decoded_item);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "camera_types", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // res
    PyObject * field = NULL;
    field = PyObject_GetAttrString(_pymessage, "res");
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
    if (itemsize != sizeof(int32_t)) {
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
    if (ros_message->res.size > 0) {
      // populating the array.array using the frombytes method
      PyObject * frombytes = PyObject_GetAttrString(field, "frombytes");
      assert(frombytes != NULL);
      int32_t * src = &(ros_message->res.data[0]);
      PyObject * data = PyBytes_FromStringAndSize((const char *)src, ros_message->res.size * sizeof(int32_t));
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
  {  // fov
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->fov);
    {
      int rc = PyObject_SetAttrString(_pymessage, "fov", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // near
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->near);
    {
      int rc = PyObject_SetAttrString(_pymessage, "near", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // far
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->far);
    {
      int rc = PyObject_SetAttrString(_pymessage, "far", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // aperture
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->aperture);
    {
      int rc = PyObject_SetAttrString(_pymessage, "aperture", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // denoise
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->denoise ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "denoise", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // spp
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->spp);
    {
      int rc = PyObject_SetAttrString(_pymessage, "spp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // model
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->model.data,
      strlen(ros_message->model.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "model", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // focus_dist
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->focus_dist);
    {
      int rc = PyObject_SetAttrString(_pymessage, "focus_dist", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // gui
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->gui ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "gui", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
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
