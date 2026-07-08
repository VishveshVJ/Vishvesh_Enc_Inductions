# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:msg/RosSensorOptions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RosSensorOptions(type):
    """Metaclass of message 'RosSensorOptions'."""

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
                'gs_ros_interfaces.msg.RosSensorOptions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ros_sensor_options
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ros_sensor_options
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ros_sensor_options
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ros_sensor_options
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ros_sensor_options

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RosSensorOptions(metaclass=Metaclass_RosSensorOptions):
    """Message class 'RosSensorOptions'."""

    __slots__ = [
        '_frame_id',
        '_frequency',
        '_topic',
        '_qos_history',
        '_qos_depth',
        '_qos_reliability',
        '_qos_durability',
    ]

    _fields_and_field_types = {
        'frame_id': 'string',
        'frequency': 'float',
        'topic': 'string',
        'qos_history': 'string',
        'qos_depth': 'int32',
        'qos_reliability': 'string',
        'qos_durability': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.frame_id = kwargs.get('frame_id', str())
        self.frequency = kwargs.get('frequency', float())
        self.topic = kwargs.get('topic', str())
        self.qos_history = kwargs.get('qos_history', str())
        self.qos_depth = kwargs.get('qos_depth', int())
        self.qos_reliability = kwargs.get('qos_reliability', str())
        self.qos_durability = kwargs.get('qos_durability', str())

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
        if self.frame_id != other.frame_id:
            return False
        if self.frequency != other.frequency:
            return False
        if self.topic != other.topic:
            return False
        if self.qos_history != other.qos_history:
            return False
        if self.qos_depth != other.qos_depth:
            return False
        if self.qos_reliability != other.qos_reliability:
            return False
        if self.qos_durability != other.qos_durability:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def frame_id(self):
        """Message field 'frame_id'."""
        return self._frame_id

    @frame_id.setter
    def frame_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'frame_id' field must be of type 'str'"
        self._frame_id = value

    @builtins.property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'frequency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'frequency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._frequency = value

    @builtins.property
    def topic(self):
        """Message field 'topic'."""
        return self._topic

    @topic.setter
    def topic(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'topic' field must be of type 'str'"
        self._topic = value

    @builtins.property
    def qos_history(self):
        """Message field 'qos_history'."""
        return self._qos_history

    @qos_history.setter
    def qos_history(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'qos_history' field must be of type 'str'"
        self._qos_history = value

    @builtins.property
    def qos_depth(self):
        """Message field 'qos_depth'."""
        return self._qos_depth

    @qos_depth.setter
    def qos_depth(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'qos_depth' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'qos_depth' field must be an integer in [-2147483648, 2147483647]"
        self._qos_depth = value

    @builtins.property
    def qos_reliability(self):
        """Message field 'qos_reliability'."""
        return self._qos_reliability

    @qos_reliability.setter
    def qos_reliability(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'qos_reliability' field must be of type 'str'"
        self._qos_reliability = value

    @builtins.property
    def qos_durability(self):
        """Message field 'qos_durability'."""
        return self._qos_durability

    @qos_durability.setter
    def qos_durability(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'qos_durability' field must be of type 'str'"
        self._qos_durability = value
