# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:msg/SphericalRayCasterPattern.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'fov'
# Member 'n_points'
# Member 'angular_resolution'
# Member 'angles'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SphericalRayCasterPattern(type):
    """Metaclass of message 'SphericalRayCasterPattern'."""

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
                'gs_ros_interfaces.msg.SphericalRayCasterPattern')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__spherical_ray_caster_pattern
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__spherical_ray_caster_pattern
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__spherical_ray_caster_pattern
            cls._TYPE_SUPPORT = module.type_support_msg__msg__spherical_ray_caster_pattern
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__spherical_ray_caster_pattern

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SphericalRayCasterPattern(metaclass=Metaclass_SphericalRayCasterPattern):
    """Message class 'SphericalRayCasterPattern'."""

    __slots__ = [
        '_fov',
        '_n_points',
        '_angular_resolution',
        '_angles',
    ]

    _fields_and_field_types = {
        'fov': 'sequence<float>',
        'n_points': 'sequence<int32>',
        'angular_resolution': 'sequence<float>',
        'angles': 'sequence<float>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.fov = array.array('f', kwargs.get('fov', []))
        self.n_points = array.array('i', kwargs.get('n_points', []))
        self.angular_resolution = array.array('f', kwargs.get('angular_resolution', []))
        self.angles = array.array('f', kwargs.get('angles', []))

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
        if self.fov != other.fov:
            return False
        if self.n_points != other.n_points:
            return False
        if self.angular_resolution != other.angular_resolution:
            return False
        if self.angles != other.angles:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def fov(self):
        """Message field 'fov'."""
        return self._fov

    @fov.setter
    def fov(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'fov' array.array() must have the type code of 'f'"
            self._fov = value
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
                "The 'fov' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._fov = array.array('f', value)

    @builtins.property
    def n_points(self):
        """Message field 'n_points'."""
        return self._n_points

    @n_points.setter
    def n_points(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'n_points' array.array() must have the type code of 'i'"
            self._n_points = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'n_points' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._n_points = array.array('i', value)

    @builtins.property
    def angular_resolution(self):
        """Message field 'angular_resolution'."""
        return self._angular_resolution

    @angular_resolution.setter
    def angular_resolution(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'angular_resolution' array.array() must have the type code of 'f'"
            self._angular_resolution = value
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
                "The 'angular_resolution' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._angular_resolution = array.array('f', value)

    @builtins.property
    def angles(self):
        """Message field 'angles'."""
        return self._angles

    @angles.setter
    def angles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'angles' array.array() must have the type code of 'f'"
            self._angles = value
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
                "The 'angles' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._angles = array.array('f', value)
