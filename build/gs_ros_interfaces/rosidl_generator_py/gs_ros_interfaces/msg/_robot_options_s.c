// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from gs_ros_interfaces:msg/RobotOptions.idl
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
#include "gs_ros_interfaces/msg/detail/robot_options__struct.h"
#include "gs_ros_interfaces/msg/detail/robot_options__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "gs_ros_interfaces/msg/detail/joint_property__functions.h"
// end nested array functions include
bool gs_ros_interfaces__msg__joint_property__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * gs_ros_interfaces__msg__joint_property__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool gs_ros_interfaces__msg__robot_options__convert_from_py(PyObject * _pymsg, void * _ros_message)
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
    assert(strncmp("gs_ros_interfaces.msg._robot_options.RobotOptions", full_classname_dest, 49) == 0);
  }
  gs_ros_interfaces__msg__RobotOptions * ros_message = _ros_message;
  {  // joint_states_topic
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_states_topic");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->joint_states_topic, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // joint_states_topic_frequency
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_states_topic_frequency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_states_topic_frequency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint_commands_topic
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_commands_topic");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->joint_commands_topic, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // joint_commands_topic_frequency
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_commands_topic_frequency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_commands_topic_frequency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joints_control_topic
    PyObject * field = PyObject_GetAttrString(_pymsg, "joints_control_topic");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->joints_control_topic, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // joints_control_topic_frequency
    PyObject * field = PyObject_GetAttrString(_pymsg, "joints_control_topic_frequency");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joints_control_topic_frequency = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint_properties
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_properties");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'joint_properties'");
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
    if (!gs_ros_interfaces__msg__JointProperty__Sequence__init(&(ros_message->joint_properties), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create gs_ros_interfaces__msg__JointProperty__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    gs_ros_interfaces__msg__JointProperty * dest = ros_message->joint_properties.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!gs_ros_interfaces__msg__joint_property__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * gs_ros_interfaces__msg__robot_options__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotOptions */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("gs_ros_interfaces.msg._robot_options");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotOptions");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  gs_ros_interfaces__msg__RobotOptions * ros_message = (gs_ros_interfaces__msg__RobotOptions *)raw_ros_message;
  {  // joint_states_topic
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->joint_states_topic.data,
      strlen(ros_message->joint_states_topic.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_states_topic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_states_topic_frequency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_states_topic_frequency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_states_topic_frequency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_commands_topic
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->joint_commands_topic.data,
      strlen(ros_message->joint_commands_topic.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_commands_topic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_commands_topic_frequency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_commands_topic_frequency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_commands_topic_frequency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joints_control_topic
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->joints_control_topic.data,
      strlen(ros_message->joints_control_topic.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "joints_control_topic", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joints_control_topic_frequency
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joints_control_topic_frequency);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joints_control_topic_frequency", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_properties
    PyObject * field = NULL;
    size_t size = ros_message->joint_properties.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    gs_ros_interfaces__msg__JointProperty * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->joint_properties.data[i]);
      PyObject * pyitem = gs_ros_interfaces__msg__joint_property__convert_to_py(item);
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
      int rc = PyObject_SetAttrString(_pymessage, "joint_properties", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
