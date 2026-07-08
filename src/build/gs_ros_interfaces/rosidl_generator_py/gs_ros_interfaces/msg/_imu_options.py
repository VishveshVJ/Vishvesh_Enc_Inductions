# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:msg/ImuOptions.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'acc_cross_axis_coupling'
# Member 'acc_bias'
# Member 'acc_noise'
# Member 'acc_random_walk'
# Member 'gyro_cross_axis_coupling'
# Member 'gyro_bias'
# Member 'gyro_noise'
# Member 'gyro_random_walk'
# Member 'debug_acc_color'
# Member 'debug_gyro_color'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ImuOptions(type):
    """Metaclass of message 'ImuOptions'."""

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
                'gs_ros_interfaces.msg.ImuOptions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__imu_options
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__imu_options
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__imu_options
            cls._TYPE_SUPPORT = module.type_support_msg__msg__imu_options
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__imu_options

            from gs_ros_interfaces.msg import GeneralSensorOptions
            if GeneralSensorOptions.__class__._TYPE_SUPPORT is None:
                GeneralSensorOptions.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import NoisySensorOptions
            if NoisySensorOptions.__class__._TYPE_SUPPORT is None:
                NoisySensorOptions.__class__.__import_type_support__()

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


class ImuOptions(metaclass=Metaclass_ImuOptions):
    """Message class 'ImuOptions'."""

    __slots__ = [
        '_options',
        '_ros_options',
        '_rigid_options',
        '_noisy_options',
        '_acc_resolution',
        '_acc_cross_axis_coupling',
        '_acc_bias',
        '_acc_noise',
        '_acc_random_walk',
        '_gyro_resolution',
        '_gyro_cross_axis_coupling',
        '_gyro_bias',
        '_gyro_noise',
        '_gyro_random_walk',
        '_debug_acc_color',
        '_debug_acc_scale',
        '_debug_gyro_color',
        '_debug_gyro_scale',
    ]

    _fields_and_field_types = {
        'options': 'gs_ros_interfaces/GeneralSensorOptions',
        'ros_options': 'gs_ros_interfaces/RosSensorOptions',
        'rigid_options': 'gs_ros_interfaces/RigidSensorOptions',
        'noisy_options': 'gs_ros_interfaces/NoisySensorOptions',
        'acc_resolution': 'float',
        'acc_cross_axis_coupling': 'sequence<float>',
        'acc_bias': 'sequence<float>',
        'acc_noise': 'sequence<float>',
        'acc_random_walk': 'sequence<float>',
        'gyro_resolution': 'float',
        'gyro_cross_axis_coupling': 'sequence<float>',
        'gyro_bias': 'sequence<float>',
        'gyro_noise': 'sequence<float>',
        'gyro_random_walk': 'sequence<float>',
        'debug_acc_color': 'sequence<float>',
        'debug_acc_scale': 'float',
        'debug_gyro_color': 'sequence<float>',
        'debug_gyro_scale': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'GeneralSensorOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'RosSensorOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'RigidSensorOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'NoisySensorOptions'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
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
        from gs_ros_interfaces.msg import NoisySensorOptions
        self.noisy_options = kwargs.get('noisy_options', NoisySensorOptions())
        self.acc_resolution = kwargs.get('acc_resolution', float())
        self.acc_cross_axis_coupling = array.array('f', kwargs.get('acc_cross_axis_coupling', []))
        self.acc_bias = array.array('f', kwargs.get('acc_bias', []))
        self.acc_noise = array.array('f', kwargs.get('acc_noise', []))
        self.acc_random_walk = array.array('f', kwargs.get('acc_random_walk', []))
        self.gyro_resolution = kwargs.get('gyro_resolution', float())
        self.gyro_cross_axis_coupling = array.array('f', kwargs.get('gyro_cross_axis_coupling', []))
        self.gyro_bias = array.array('f', kwargs.get('gyro_bias', []))
        self.gyro_noise = array.array('f', kwargs.get('gyro_noise', []))
        self.gyro_random_walk = array.array('f', kwargs.get('gyro_random_walk', []))
        self.debug_acc_color = array.array('f', kwargs.get('debug_acc_color', []))
        self.debug_acc_scale = kwargs.get('debug_acc_scale', float())
        self.debug_gyro_color = array.array('f', kwargs.get('debug_gyro_color', []))
        self.debug_gyro_scale = kwargs.get('debug_gyro_scale', float())

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
        if self.noisy_options != other.noisy_options:
            return False
        if self.acc_resolution != other.acc_resolution:
            return False
        if self.acc_cross_axis_coupling != other.acc_cross_axis_coupling:
            return False
        if self.acc_bias != other.acc_bias:
            return False
        if self.acc_noise != other.acc_noise:
            return False
        if self.acc_random_walk != other.acc_random_walk:
            return False
        if self.gyro_resolution != other.gyro_resolution:
            return False
        if self.gyro_cross_axis_coupling != other.gyro_cross_axis_coupling:
            return False
        if self.gyro_bias != other.gyro_bias:
            return False
        if self.gyro_noise != other.gyro_noise:
            return False
        if self.gyro_random_walk != other.gyro_random_walk:
            return False
        if self.debug_acc_color != other.debug_acc_color:
            return False
        if self.debug_acc_scale != other.debug_acc_scale:
            return False
        if self.debug_gyro_color != other.debug_gyro_color:
            return False
        if self.debug_gyro_scale != other.debug_gyro_scale:
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
    def noisy_options(self):
        """Message field 'noisy_options'."""
        return self._noisy_options

    @noisy_options.setter
    def noisy_options(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import NoisySensorOptions
            assert \
                isinstance(value, NoisySensorOptions), \
                "The 'noisy_options' field must be a sub message of type 'NoisySensorOptions'"
        self._noisy_options = value

    @builtins.property
    def acc_resolution(self):
        """Message field 'acc_resolution'."""
        return self._acc_resolution

    @acc_resolution.setter
    def acc_resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acc_resolution' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acc_resolution' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acc_resolution = value

    @builtins.property
    def acc_cross_axis_coupling(self):
        """Message field 'acc_cross_axis_coupling'."""
        return self._acc_cross_axis_coupling

    @acc_cross_axis_coupling.setter
    def acc_cross_axis_coupling(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'acc_cross_axis_coupling' array.array() must have the type code of 'f'"
            self._acc_cross_axis_coupling = value
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
                "The 'acc_cross_axis_coupling' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._acc_cross_axis_coupling = array.array('f', value)

    @builtins.property
    def acc_bias(self):
        """Message field 'acc_bias'."""
        return self._acc_bias

    @acc_bias.setter
    def acc_bias(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'acc_bias' array.array() must have the type code of 'f'"
            self._acc_bias = value
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
                "The 'acc_bias' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._acc_bias = array.array('f', value)

    @builtins.property
    def acc_noise(self):
        """Message field 'acc_noise'."""
        return self._acc_noise

    @acc_noise.setter
    def acc_noise(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'acc_noise' array.array() must have the type code of 'f'"
            self._acc_noise = value
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
                "The 'acc_noise' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._acc_noise = array.array('f', value)

    @builtins.property
    def acc_random_walk(self):
        """Message field 'acc_random_walk'."""
        return self._acc_random_walk

    @acc_random_walk.setter
    def acc_random_walk(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'acc_random_walk' array.array() must have the type code of 'f'"
            self._acc_random_walk = value
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
                "The 'acc_random_walk' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._acc_random_walk = array.array('f', value)

    @builtins.property
    def gyro_resolution(self):
        """Message field 'gyro_resolution'."""
        return self._gyro_resolution

    @gyro_resolution.setter
    def gyro_resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_resolution' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_resolution' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_resolution = value

    @builtins.property
    def gyro_cross_axis_coupling(self):
        """Message field 'gyro_cross_axis_coupling'."""
        return self._gyro_cross_axis_coupling

    @gyro_cross_axis_coupling.setter
    def gyro_cross_axis_coupling(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'gyro_cross_axis_coupling' array.array() must have the type code of 'f'"
            self._gyro_cross_axis_coupling = value
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
                "The 'gyro_cross_axis_coupling' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_cross_axis_coupling = array.array('f', value)

    @builtins.property
    def gyro_bias(self):
        """Message field 'gyro_bias'."""
        return self._gyro_bias

    @gyro_bias.setter
    def gyro_bias(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'gyro_bias' array.array() must have the type code of 'f'"
            self._gyro_bias = value
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
                "The 'gyro_bias' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_bias = array.array('f', value)

    @builtins.property
    def gyro_noise(self):
        """Message field 'gyro_noise'."""
        return self._gyro_noise

    @gyro_noise.setter
    def gyro_noise(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'gyro_noise' array.array() must have the type code of 'f'"
            self._gyro_noise = value
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
                "The 'gyro_noise' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_noise = array.array('f', value)

    @builtins.property
    def gyro_random_walk(self):
        """Message field 'gyro_random_walk'."""
        return self._gyro_random_walk

    @gyro_random_walk.setter
    def gyro_random_walk(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'gyro_random_walk' array.array() must have the type code of 'f'"
            self._gyro_random_walk = value
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
                "The 'gyro_random_walk' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_random_walk = array.array('f', value)

    @builtins.property
    def debug_acc_color(self):
        """Message field 'debug_acc_color'."""
        return self._debug_acc_color

    @debug_acc_color.setter
    def debug_acc_color(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'debug_acc_color' array.array() must have the type code of 'f'"
            self._debug_acc_color = value
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
                "The 'debug_acc_color' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._debug_acc_color = array.array('f', value)

    @builtins.property
    def debug_acc_scale(self):
        """Message field 'debug_acc_scale'."""
        return self._debug_acc_scale

    @debug_acc_scale.setter
    def debug_acc_scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'debug_acc_scale' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'debug_acc_scale' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._debug_acc_scale = value

    @builtins.property
    def debug_gyro_color(self):
        """Message field 'debug_gyro_color'."""
        return self._debug_gyro_color

    @debug_gyro_color.setter
    def debug_gyro_color(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'debug_gyro_color' array.array() must have the type code of 'f'"
            self._debug_gyro_color = value
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
                "The 'debug_gyro_color' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._debug_gyro_color = array.array('f', value)

    @builtins.property
    def debug_gyro_scale(self):
        """Message field 'debug_gyro_scale'."""
        return self._debug_gyro_scale

    @debug_gyro_scale.setter
    def debug_gyro_scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'debug_gyro_scale' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'debug_gyro_scale' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._debug_gyro_scale = value
