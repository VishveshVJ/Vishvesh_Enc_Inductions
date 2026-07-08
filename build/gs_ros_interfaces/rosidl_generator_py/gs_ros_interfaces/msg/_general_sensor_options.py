# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:msg/GeneralSensorOptions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GeneralSensorOptions(type):
    """Metaclass of message 'GeneralSensorOptions'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gs_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gs_ros_interfaces.msg.GeneralSensorOptions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__general_sensor_options
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__general_sensor_options
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__general_sensor_options
            cls._TYPE_SUPPORT = module.type_support_msg__msg__general_sensor_options
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__general_sensor_options

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeneralSensorOptions(metaclass=Metaclass_GeneralSensorOptions):
    """Message class 'GeneralSensorOptions'."""

    __slots__ = [
        '_name',
        '_sensor_type',
        '_delay',
        '_update_ground_truth_only',
        '_draw_debug',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'sensor_type': 'string',
        'delay': 'float',
        'update_ground_truth_only': 'boolean',
        'draw_debug': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.sensor_type = kwargs.get('sensor_type', str())
        self.delay = kwargs.get('delay', float())
        self.update_ground_truth_only = kwargs.get('update_ground_truth_only', bool())
        self.draw_debug = kwargs.get('draw_debug', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.name != other.name:
            return False
        if self.sensor_type != other.sensor_type:
            return False
        if self.delay != other.delay:
            return False
        if self.update_ground_truth_only != other.update_ground_truth_only:
            return False
        if self.draw_debug != other.draw_debug:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def sensor_type(self):
        """Message field 'sensor_type'."""
        return self._sensor_type

    @sensor_type.setter
    def sensor_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'sensor_type' field must be of type 'str'"
        self._sensor_type = value

    @builtins.property
    def delay(self):
        """Message field 'delay'."""
        return self._delay

    @delay.setter
    def delay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delay' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delay' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delay = value

    @builtins.property
    def update_ground_truth_only(self):
        """Message field 'update_ground_truth_only'."""
        return self._update_ground_truth_only

    @update_ground_truth_only.setter
    def update_ground_truth_only(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'update_ground_truth_only' field must be of type 'bool'"
        self._update_ground_truth_only = value

    @builtins.property
    def draw_debug(self):
        """Message field 'draw_debug'."""
        return self._draw_debug

    @draw_debug.setter
    def draw_debug(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'draw_debug' field must be of type 'bool'"
        self._draw_debug = value
