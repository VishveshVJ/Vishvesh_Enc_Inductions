// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gs_ros_interfaces:srv/GetSensorOptions.idl
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
#include "gs_ros_interfaces/srv/detail/get_sensor_options__struct.h"
#include "gs_ros_interfaces/srv/detail/get_sensor_options__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool gs_ros_interfaces__srv__get_sensor_options__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
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
    assert(strncmp("gs_ros_interfaces.srv._get_sensor_options.GetSensorOptions_Request", full_classname_dest, 66) == 0);
  }
  gs_ros_interfaces__srv__GetSensorOptions_Request * ros_message = _ros_message;
  {  // entity
    PyObject * field = PyObject_GetAttrString(_pymsg, "entity");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->entity, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // names
    PyObject * field = PyObject_GetAttrString(_pymsg, "names");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'names'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->names), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->names.data;
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
  {  // sensor_types
    PyObject * field = PyObject_GetAttrString(_pymsg, "sensor_types");
    if (!field) {
      return false;
    }
    {
      PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'sensor_types'");
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
      if (!rosidl_runtime_c__String__Sequence__init(&(ros_message->sensor_types), size)) {
        PyErr_SetString(PyExc_RuntimeError, "unable to create String__Sequence ros_message");
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
      rosidl_runtime_c__String * dest = ros_message->sensor_types.data;
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

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gs_ros_interfaces__srv__get_sensor_options__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetSensorOptions_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gs_ros_interfaces.srv._get_sensor_options");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetSensorOptions_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gs_ros_interfaces__srv__GetSensorOptions_Request * ros_message = (gs_ros_interfaces__srv__GetSensorOptions_Request *)raw_ros_message;
  {  // entity
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->entity.data,
      strlen(ros_message->entity.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "entity", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // names
    PyObject * field = NULL;
    size_t size = ros_message->names.size;
    rosidl_runtime_c__String * src = ros_message->names.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "names", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // sensor_types
    PyObject * field = NULL;
    size_t size = ros_message->sensor_types.size;
    rosidl_runtime_c__String * src = ros_message->sensor_types.data;
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
      int rc = PyObject_SetAttrString(_pymessage, "sensor_types", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/get_sensor_options__struct.h"
// already included above
// #include "gs_ros_interfaces/srv/detail/get_sensor_options__functions.h"

// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"
// already included above
// #include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "gs_ros_interfaces/msg/detail/camera_options__functions.h"
#include "gs_ros_interfaces/msg/detail/contact_force_options__functions.h"
#include "gs_ros_interfaces/msg/detail/contact_options__functions.h"
#include "gs_ros_interfaces/msg/detail/imu_options__functions.h"
#include "gs_ros_interfaces/msg/detail/lidar_options__functions.h"
// end nested array functions include
bool gs_ros_interfaces__msg__camera_options__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__camera_options__convert_to_py(void * raw_ros_message);
bool gs_ros_interfaces__msg__lidar_options__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__lidar_options__convert_to_py(void * raw_ros_message);
bool gs_ros_interfaces__msg__imu_options__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__imu_options__convert_to_py(void * raw_ros_message);
bool gs_ros_interfaces__msg__contact_options__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__contact_options__convert_to_py(void * raw_ros_message);
bool gs_ros_interfaces__msg__contact_force_options__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__contact_force_options__convert_to_py(void * raw_ros_message);
ROSIDL_GENERATOR_C_IMPORT
bool simulation_interfaces__msg__result__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * simulation_interfaces__msg__result__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gs_ros_interfaces__srv__get_sensor_options__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[68];
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
    assert(strncmp("gs_ros_interfaces.srv._get_sensor_options.GetSensorOptions_Response", full_classname_dest, 67) == 0);
  }
  gs_ros_interfaces__srv__GetSensorOptions_Response * ros_message = _ros_message;
  {  // cameras
    PyObject * field = PyObject_GetAttrString(_pymsg, "cameras");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'cameras'");
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
    if (!gs_ros_interfaces__msg__CameraOptions__Sequence__init(&(ros_message->cameras), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create gs_ros_interfaces__msg__CameraOptions__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    gs_ros_interfaces__msg__CameraOptions * dest = ros_message->cameras.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!gs_ros_interfaces__msg__camera_options__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // lidars
    PyObject * field = PyObject_GetAttrString(_pymsg, "lidars");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'lidars'");
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
    if (!gs_ros_interfaces__msg__LidarOptions__Sequence__init(&(ros_message->lidars), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create gs_ros_interfaces__msg__LidarOptions__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    gs_ros_interfaces__msg__LidarOptions * dest = ros_message->lidars.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!gs_ros_interfaces__msg__lidar_options__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // imus
    PyObject * field = PyObject_GetAttrString(_pymsg, "imus");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'imus'");
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
    if (!gs_ros_interfaces__msg__ImuOptions__Sequence__init(&(ros_message->imus), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create gs_ros_interfaces__msg__ImuOptions__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    gs_ros_interfaces__msg__ImuOptions * dest = ros_message->imus.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!gs_ros_interfaces__msg__imu_options__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // contacts
    PyObject * field = PyObject_GetAttrString(_pymsg, "contacts");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'contacts'");
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
    if (!gs_ros_interfaces__msg__ContactOptions__Sequence__init(&(ros_message->contacts), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create gs_ros_interfaces__msg__ContactOptions__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    gs_ros_interfaces__msg__ContactOptions * dest = ros_message->contacts.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!gs_ros_interfaces__msg__contact_options__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // contact_forces
    PyObject * field = PyObject_GetAttrString(_pymsg, "contact_forces");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'contact_forces'");
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
    if (!gs_ros_interfaces__msg__ContactForceOptions__Sequence__init(&(ros_message->contact_forces), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create gs_ros_interfaces__msg__ContactForceOptions__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    gs_ros_interfaces__msg__ContactForceOptions * dest = ros_message->contact_forces.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!gs_ros_interfaces__msg__contact_force_options__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // result
    PyObject * field = PyObject_GetAttrString(_pymsg, "result");
    if (!field) {
      return false;
    }
    if (!simulation_interfaces__msg__result__convert_from_py(field, &ros_message->result)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gs_ros_interfaces__srv__get_sensor_options__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of GetSensorOptions_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gs_ros_interfaces.srv._get_sensor_options");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "GetSensorOptions_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gs_ros_interfaces__srv__GetSensorOptions_Response * ros_message = (gs_ros_interfaces__srv__GetSensorOptions_Response *)raw_ros_message;
  {  // cameras
    PyObject * field = NULL;
    size_t size = ros_message->cameras.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    gs_ros_interfaces__msg__CameraOptions * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->cameras.data[i]);
      PyObject * pyitem = gs_ros_interfaces__msg__camera_options__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "cameras", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // lidars
    PyObject * field = NULL;
    size_t size = ros_message->lidars.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    gs_ros_interfaces__msg__LidarOptions * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->lidars.data[i]);
      PyObject * pyitem = gs_ros_interfaces__msg__lidar_options__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "lidars", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // imus
    PyObject * field = NULL;
    size_t size = ros_message->imus.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    gs_ros_interfaces__msg__ImuOptions * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->imus.data[i]);
      PyObject * pyitem = gs_ros_interfaces__msg__imu_options__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "imus", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contacts
    PyObject * field = NULL;
    size_t size = ros_message->contacts.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    gs_ros_interfaces__msg__ContactOptions * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->contacts.data[i]);
      PyObject * pyitem = gs_ros_interfaces__msg__contact_options__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "contacts", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // contact_forces
    PyObject * field = NULL;
    size_t size = ros_message->contact_forces.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    gs_ros_interfaces__msg__ContactForceOptions * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->contact_forces.data[i]);
      PyObject * pyitem = gs_ros_interfaces__msg__contact_force_options__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "contact_forces", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // result
    PyObject * field = NULL;
    field = simulation_interfaces__msg__result__convert_to_py(&ros_message->result);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "result", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
