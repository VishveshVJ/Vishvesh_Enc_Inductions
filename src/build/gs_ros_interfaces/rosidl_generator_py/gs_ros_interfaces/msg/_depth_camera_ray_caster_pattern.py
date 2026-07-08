# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:msg/DepthCameraRayCasterPattern.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'res'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DepthCameraRayCasterPattern(type):
    """Metaclass of message 'DepthCameraRayCasterPattern'."""

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
                'gs_ros_interfaces.msg.DepthCameraRayCasterPattern')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__depth_camera_ray_caster_pattern
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__depth_camera_ray_caster_pattern
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__depth_camera_ray_caster_pattern
            cls._TYPE_SUPPORT = module.type_support_msg__msg__depth_camera_ray_caster_pattern
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__depth_camera_ray_caster_pattern

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DepthCameraRayCasterPattern(metaclass=Metaclass_DepthCameraRayCasterPattern):
    """Message class 'DepthCameraRayCasterPattern'."""

    __slots__ = [
        '_res',
        '_fx',
        '_fy',
        '_cx',
        '_cy',
        '_fov_horizontal',
        '_fov_vertical',
    ]

    _fields_and_field_types = {
        'res': 'sequence<float>',
        'fx': 'float',
        'fy': 'float',
        'cx': 'float',
        'cy': 'float',
        'fov_horizontal': 'float',
        'fov_vertical': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.res = array.array('f', kwargs.get('res', []))
        self.fx = kwargs.get('fx', float())
        self.fy = kwargs.get('fy', float())
        self.cx = kwargs.get('cx', float())
        self.cy = kwargs.get('cy', float())
        self.fov_horizontal = kwargs.get('fov_horizontal', float())
        self.fov_vertical = kwargs.get('fov_vertical', float())

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
        if self.res != other.res:
            return False
        if self.fx != other.fx:
            return False
        if self.fy != other.fy:
            return False
        if self.cx != other.cx:
            return False
        if self.cy != other.cy:
            return False
        if self.fov_horizontal != other.fov_horizontal:
            return False
        if self.fov_vertical != other.fov_vertical:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def res(self):
        """Message field 'res'."""
        return self._res

    @res.setter
    def res(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'res' array.array() must have the type code of 'f'"
            self._res = value
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
                "The 'res' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._res = array.array('f', value)

    @builtins.property
    def fx(self):
        """Message field 'fx'."""
        return self._fx

    @fx.setter
    def fx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fx = value

    @builtins.property
    def fy(self):
        """Message field 'fy'."""
        return self._fy

    @fy.setter
    def fy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fy = value

    @builtins.property
    def cx(self):
        """Message field 'cx'."""
        return self._cx

    @cx.setter
    def cx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cx = value

    @builtins.property
    def cy(self):
        """Message field 'cy'."""
        return self._cy

    @cy.setter
    def cy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cy = value

    @builtins.property
    def fov_horizontal(self):
        """Message field 'fov_horizontal'."""
        return self._fov_horizontal

    @fov_horizontal.setter
    def fov_horizontal(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fov_horizontal' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fov_horizontal' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fov_horizontal = value

    @builtins.property
    def fov_vertical(self):
        """Message field 'fov_vertical'."""
        return self._fov_vertical

    @fov_vertical.setter
    def fov_vertical(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fov_vertical' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fov_vertical' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fov_vertical = value
