# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:msg/JointProperty.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'force_range'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointProperty(type):
    """Metaclass of message 'JointProperty'."""

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
                'gs_ros_interfaces.msg.JointProperty')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_property
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_property
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_property
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_property
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_property

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointProperty(metaclass=Metaclass_JointProperty):
    """Message class 'JointProperty'."""

    __slots__ = [
        '_name',
        '_kp',
        '_kv',
        '_stiffness',
        '_armature',
        '_damping',
        '_force_range',
        '_command',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'kp': 'float',
        'kv': 'float',
        'stiffness': 'float',
        'armature': 'float',
        'damping': 'float',
        'force_range': 'sequence<float>',
        'command': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.kp = kwargs.get('kp', float())
        self.kv = kwargs.get('kv', float())
        self.stiffness = kwargs.get('stiffness', float())
        self.armature = kwargs.get('armature', float())
        self.damping = kwargs.get('damping', float())
        self.force_range = array.array('f', kwargs.get('force_range', []))
        self.command = kwargs.get('command', str())

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
        if self.kp != other.kp:
            return False
        if self.kv != other.kv:
            return False
        if self.stiffness != other.stiffness:
            return False
        if self.armature != other.armature:
            return False
        if self.damping != other.damping:
            return False
        if self.force_range != other.force_range:
            return False
        if self.command != other.command:
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
    def kp(self):
        """Message field 'kp'."""
        return self._kp

    @kp.setter
    def kp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'kp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._kp = value

    @builtins.property
    def kv(self):
        """Message field 'kv'."""
        return self._kv

    @kv.setter
    def kv(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'kv' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'kv' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._kv = value

    @builtins.property
    def stiffness(self):
        """Message field 'stiffness'."""
        return self._stiffness

    @stiffness.setter
    def stiffness(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stiffness' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stiffness' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stiffness = value

    @builtins.property
    def armature(self):
        """Message field 'armature'."""
        return self._armature

    @armature.setter
    def armature(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'armature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'armature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._armature = value

    @builtins.property
    def damping(self):
        """Message field 'damping'."""
        return self._damping

    @damping.setter
    def damping(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'damping' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'damping' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._damping = value

    @builtins.property
    def force_range(self):
        """Message field 'force_range'."""
        return self._force_range

    @force_range.setter
    def force_range(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'force_range' array.array() must have the type code of 'f'"
            self._force_range = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'force_range' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._force_range = array.array('f', value)

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'command' field must be of type 'str'"
        self._command = value
