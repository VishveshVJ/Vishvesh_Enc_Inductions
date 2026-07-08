# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:msg/LidarOptions.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'ray_start_color'
# Member 'ray_hit_color'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LidarOptions(type):
    """Metaclass of message 'LidarOptions'."""

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
                'gs_ros_interfaces.msg.LidarOptions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lidar_options
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lidar_options
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lidar_options
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lidar_options
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lidar_options

            from gs_ros_interfaces.msg import DepthCameraRayCasterPattern
            if DepthCameraRayCasterPattern.__class__._TYPE_SUPPORT is None:
                DepthCameraRayCasterPattern.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import GeneralSensorOptions
            if GeneralSensorOptions.__class__._TYPE_SUPPORT is None:
                GeneralSensorOptions.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import GridRayCasterPattern
            if GridRayCasterPattern.__class__._TYPE_SUPPORT is None:
                GridRayCasterPattern.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import RigidSensorOptions
            if RigidSensorOptions.__class__._TYPE_SUPPORT is None:
                RigidSensorOptions.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import RosSensorOptions
            if RosSensorOptions.__class__._TYPE_SUPPORT is None:
                RosSensorOptions.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import SphericalRayCasterPattern
            if SphericalRayCasterPattern.__class__._TYPE_SUPPORT is None:
                SphericalRayCasterPattern.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LidarOptions(metaclass=Metaclass_LidarOptions):
    """Message class 'LidarOptions'."""

    __slots__ = [
        '_options',
        '_ros_options',
        '_rigid_options',
        '_grid_pattern_options',
        '_spherical_pattern_options',
        '_depth_camera_pattern_options',
        '_min_range',
        '_max_range',
        '_no_hit_value',
        '_return_points_in_world_frame',
        '_draw_point_radius',
        '_ray_start_color',
        '_ray_hit_color',
        '_add_noise',
        '_noise_mean',
        '_noise_std',
    ]

    _fields_and_field_types = {
        'options': 'gs_ros_interfaces/GeneralSensorOptions',
        'ros_options': 'gs_ros_interfaces/RosSensorOptions',
        'rigid_options': 'gs_ros_interfaces/RigidSensorOptions',
        'grid_pattern_options': 'gs_ros_interfaces/GridRayCasterPattern',
        'spherical_pattern_options': 'gs_ros_interfaces/SphericalRayCasterPattern',
        'depth_camera_pattern_options': 'gs_ros_interfaces/DepthCameraRayCasterPattern',
        'min_range': 'float',
        'max_range': 'float',
        'no_hit_value': 'float',
        'return_points_in_world_frame': 'boolean',
        'draw_point_radius': 'float',
        'ray_start_color': 'sequence<float>',
        'ray_hit_color': 'sequence<float>',
        'add_noise': 'boolean',
        'noise_mean': 'float',
        'noise_std': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'GeneralSensorOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'RosSensorOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'RigidSensorOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'GridRayCasterPattern'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'SphericalRayCasterPattern'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'DepthCameraRayCasterPattern'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from gs_ros_interfaces.msg import GeneralSensorOptions
        self.options = kwargs.get('options', GeneralSensorOptions())
        from gs_ros_interfaces.msg import RosSensorOptions
        self.ros_options = kwargs.get('ros_options', RosSensorOptions())
        from gs_ros_interfaces.msg import RigidSensorOptions
        self.rigid_options = kwargs.get('rigid_options', RigidSensorOptions())
        from gs_ros_interfaces.msg import GridRayCasterPattern
        self.grid_pattern_options = kwargs.get('grid_pattern_options', GridRayCasterPattern())
        from gs_ros_interfaces.msg import SphericalRayCasterPattern
        self.spherical_pattern_options = kwargs.get('spherical_pattern_options', SphericalRayCasterPattern())
        from gs_ros_interfaces.msg import DepthCameraRayCasterPattern
        self.depth_camera_pattern_options = kwargs.get('depth_camera_pattern_options', DepthCameraRayCasterPattern())
        self.min_range = kwargs.get('min_range', float())
        self.max_range = kwargs.get('max_range', float())
        self.no_hit_value = kwargs.get('no_hit_value', float())
        self.return_points_in_world_frame = kwargs.get('return_points_in_world_frame', bool())
        self.draw_point_radius = kwargs.get('draw_point_radius', float())
        self.ray_start_color = array.array('f', kwargs.get('ray_start_color', []))
        self.ray_hit_color = array.array('f', kwargs.get('ray_hit_color', []))
        self.add_noise = kwargs.get('add_noise', bool())
        self.noise_mean = kwargs.get('noise_mean', float())
        self.noise_std = kwargs.get('noise_std', float())

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
        if self.options != other.options:
            return False
        if self.ros_options != other.ros_options:
            return False
        if self.rigid_options != other.rigid_options:
            return False
        if self.grid_pattern_options != other.grid_pattern_options:
            return False
        if self.spherical_pattern_options != other.spherical_pattern_options:
            return False
        if self.depth_camera_pattern_options != other.depth_camera_pattern_options:
            return False
        if self.min_range != other.min_range:
            return False
        if self.max_range != other.max_range:
            return False
        if self.no_hit_value != other.no_hit_value:
            return False
        if self.return_points_in_world_frame != other.return_points_in_world_frame:
            return False
        if self.draw_point_radius != other.draw_point_radius:
            return False
        if self.ray_start_color != other.ray_start_color:
            return False
        if self.ray_hit_color != other.ray_hit_color:
            return False
        if self.add_noise != other.add_noise:
            return False
        if self.noise_mean != other.noise_mean:
            return False
        if self.noise_std != other.noise_std:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def options(self):
        """Message field 'options'."""
        return self._options

    @options.setter
    def options(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import GeneralSensorOptions
            assert \
                isinstance(value, GeneralSensorOptions), \
                "The 'options' field must be a sub message of type 'GeneralSensorOptions'"
        self._options = value

    @builtins.property
    def ros_options(self):
        """Message field 'ros_options'."""
        return self._ros_options

    @ros_options.setter
    def ros_options(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import RosSensorOptions
            assert \
                isinstance(value, RosSensorOptions), \
                "The 'ros_options' field must be a sub message of type 'RosSensorOptions'"
        self._ros_options = value

    @builtins.property
    def rigid_options(self):
        """Message field 'rigid_options'."""
        return self._rigid_options

    @rigid_options.setter
    def rigid_options(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import RigidSensorOptions
            assert \
                isinstance(value, RigidSensorOptions), \
                "The 'rigid_options' field must be a sub message of type 'RigidSensorOptions'"
        self._rigid_options = value

    @builtins.property
    def grid_pattern_options(self):
        """Message field 'grid_pattern_options'."""
        return self._grid_pattern_options

    @grid_pattern_options.setter
    def grid_pattern_options(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import GridRayCasterPattern
            assert \
                isinstance(value, GridRayCasterPattern), \
                "The 'grid_pattern_options' field must be a sub message of type 'GridRayCasterPattern'"
        self._grid_pattern_options = value

    @builtins.property
    def spherical_pattern_options(self):
        """Message field 'spherical_pattern_options'."""
        return self._spherical_pattern_options

    @spherical_pattern_options.setter
    def spherical_pattern_options(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import SphericalRayCasterPattern
            assert \
                isinstance(value, SphericalRayCasterPattern), \
                "The 'spherical_pattern_options' field must be a sub message of type 'SphericalRayCasterPattern'"
        self._spherical_pattern_options = value

    @builtins.property
    def depth_camera_pattern_options(self):
        """Message field 'depth_camera_pattern_options'."""
        return self._depth_camera_pattern_options

    @depth_camera_pattern_options.setter
    def depth_camera_pattern_options(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import DepthCameraRayCasterPattern
            assert \
                isinstance(value, DepthCameraRayCasterPattern), \
                "The 'depth_camera_pattern_options' field must be a sub message of type 'DepthCameraRayCasterPattern'"
        self._depth_camera_pattern_options = value

    @builtins.property
    def min_range(self):
        """Message field 'min_range'."""
        return self._min_range

    @min_range.setter
    def min_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_range = value

    @builtins.property
    def max_range(self):
        """Message field 'max_range'."""
        return self._max_range

    @max_range.setter
    def max_range(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_range' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_range' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_range = value

    @builtins.property
    def no_hit_value(self):
        """Message field 'no_hit_value'."""
        return self._no_hit_value

    @no_hit_value.setter
    def no_hit_value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'no_hit_value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'no_hit_value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._no_hit_value = value

    @builtins.property
    def return_points_in_world_frame(self):
        """Message field 'return_points_in_world_frame'."""
        return self._return_points_in_world_frame

    @return_points_in_world_frame.setter
    def return_points_in_world_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'return_points_in_world_frame' field must be of type 'bool'"
        self._return_points_in_world_frame = value

    @builtins.property
    def draw_point_radius(self):
        """Message field 'draw_point_radius'."""
        return self._draw_point_radius

    @draw_point_radius.setter
    def draw_point_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'draw_point_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'draw_point_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._draw_point_radius = value

    @builtins.property
    def ray_start_color(self):
        """Message field 'ray_start_color'."""
        return self._ray_start_color

    @ray_start_color.setter
    def ray_start_color(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ray_start_color' array.array() must have the type code of 'f'"
            self._ray_start_color = value
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
                "The 'ray_start_color' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ray_start_color = array.array('f', value)

    @builtins.property
    def ray_hit_color(self):
        """Message field 'ray_hit_color'."""
        return self._ray_hit_color

    @ray_hit_color.setter
    def ray_hit_color(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'ray_hit_color' array.array() must have the type code of 'f'"
            self._ray_hit_color = value
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
                "The 'ray_hit_color' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._ray_hit_color = array.array('f', value)

    @builtins.property
    def add_noise(self):
        """Message field 'add_noise'."""
        return self._add_noise

    @add_noise.setter
    def add_noise(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'add_noise' field must be of type 'bool'"
        self._add_noise = value

    @builtins.property
    def noise_mean(self):
        """Message field 'noise_mean'."""
        return self._noise_mean

    @noise_mean.setter
    def noise_mean(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'noise_mean' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'noise_mean' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._noise_mean = value

    @builtins.property
    def noise_std(self):
        """Message field 'noise_std'."""
        return self._noise_std

    @noise_std.setter
    def noise_std(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'noise_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'noise_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._noise_std = value
