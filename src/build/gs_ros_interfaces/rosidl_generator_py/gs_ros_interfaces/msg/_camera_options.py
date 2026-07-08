# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:msg/CameraOptions.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'res'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CameraOptions(type):
    """Metaclass of message 'CameraOptions'."""

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
                'gs_ros_interfaces.msg.CameraOptions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__camera_options
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__camera_options
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__camera_options
            cls._TYPE_SUPPORT = module.type_support_msg__msg__camera_options
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__camera_options

            from gs_ros_interfaces.msg import GeneralSensorOptions
            if GeneralSensorOptions.__class__._TYPE_SUPPORT is None:
                GeneralSensorOptions.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import RigidSensorOptions
            if RigidSensorOptions.__class__._TYPE_SUPPORT is None:
                RigidSensorOptions.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import RosSensorOptions
            if RosSensorOptions.__class__._TYPE_SUPPORT is None:
                RosSensorOptions.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CameraOptions(metaclass=Metaclass_CameraOptions):
    """Message class 'CameraOptions'."""

    __slots__ = [
        '_options',
        '_ros_options',
        '_rigid_options',
        '_camera_types',
        '_res',
        '_fov',
        '_near',
        '_far',
        '_aperture',
        '_denoise',
        '_spp',
        '_model',
        '_focus_dist',
        '_gui',
        '_add_noise',
        '_noise_mean',
        '_noise_std',
    ]

    _fields_and_field_types = {
        'options': 'gs_ros_interfaces/GeneralSensorOptions',
        'ros_options': 'gs_ros_interfaces/RosSensorOptions',
        'rigid_options': 'gs_ros_interfaces/RigidSensorOptions',
        'camera_types': 'sequence<string>',
        'res': 'sequence<int32>',
        'fov': 'float',
        'near': 'float',
        'far': 'float',
        'aperture': 'float',
        'denoise': 'boolean',
        'spp': 'int32',
        'model': 'string',
        'focus_dist': 'float',
        'gui': 'boolean',
        'add_noise': 'boolean',
        'noise_mean': 'float',
        'noise_std': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'GeneralSensorOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'RosSensorOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'RigidSensorOptions'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.camera_types = kwargs.get('camera_types', [])
        self.res = array.array('i', kwargs.get('res', []))
        self.fov = kwargs.get('fov', float())
        self.near = kwargs.get('near', float())
        self.far = kwargs.get('far', float())
        self.aperture = kwargs.get('aperture', float())
        self.denoise = kwargs.get('denoise', bool())
        self.spp = kwargs.get('spp', int())
        self.model = kwargs.get('model', str())
        self.focus_dist = kwargs.get('focus_dist', float())
        self.gui = kwargs.get('gui', bool())
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
        if self.camera_types != other.camera_types:
            return False
        if self.res != other.res:
            return False
        if self.fov != other.fov:
            return False
        if self.near != other.near:
            return False
        if self.far != other.far:
            return False
        if self.aperture != other.aperture:
            return False
        if self.denoise != other.denoise:
            return False
        if self.spp != other.spp:
            return False
        if self.model != other.model:
            return False
        if self.focus_dist != other.focus_dist:
            return False
        if self.gui != other.gui:
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
    def camera_types(self):
        """Message field 'camera_types'."""
        return self._camera_types

    @camera_types.setter
    def camera_types(self, value):
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'camera_types' field must be a set or sequence and each value of type 'str'"
        self._camera_types = value

    @builtins.property
    def res(self):
        """Message field 'res'."""
        return self._res

    @res.setter
    def res(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'res' array.array() must have the type code of 'i'"
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'res' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._res = array.array('i', value)

    @builtins.property
    def fov(self):
        """Message field 'fov'."""
        return self._fov

    @fov.setter
    def fov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fov = value

    @builtins.property
    def near(self):
        """Message field 'near'."""
        return self._near

    @near.setter
    def near(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'near' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'near' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._near = value

    @builtins.property
    def far(self):
        """Message field 'far'."""
        return self._far

    @far.setter
    def far(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'far' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'far' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._far = value

    @builtins.property
    def aperture(self):
        """Message field 'aperture'."""
        return self._aperture

    @aperture.setter
    def aperture(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aperture' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aperture' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aperture = value

    @builtins.property
    def denoise(self):
        """Message field 'denoise'."""
        return self._denoise

    @denoise.setter
    def denoise(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'denoise' field must be of type 'bool'"
        self._denoise = value

    @builtins.property
    def spp(self):
        """Message field 'spp'."""
        return self._spp

    @spp.setter
    def spp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spp' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'spp' field must be an integer in [-2147483648, 2147483647]"
        self._spp = value

    @builtins.property
    def model(self):
        """Message field 'model'."""
        return self._model

    @model.setter
    def model(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model' field must be of type 'str'"
        self._model = value

    @builtins.property
    def focus_dist(self):
        """Message field 'focus_dist'."""
        return self._focus_dist

    @focus_dist.setter
    def focus_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'focus_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'focus_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._focus_dist = value

    @builtins.property
    def gui(self):
        """Message field 'gui'."""
        return self._gui

    @gui.setter
    def gui(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gui' field must be of type 'bool'"
        self._gui = value

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
