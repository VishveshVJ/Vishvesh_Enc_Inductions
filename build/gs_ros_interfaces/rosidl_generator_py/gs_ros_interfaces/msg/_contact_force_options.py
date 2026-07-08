# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:msg/ContactForceOptions.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'min_force'
# Member 'max_force'
# Member 'debug_color'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ContactForceOptions(type):
    """Metaclass of message 'ContactForceOptions'."""

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
                'gs_ros_interfaces.msg.ContactForceOptions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__contact_force_options
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__contact_force_options
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__contact_force_options
            cls._TYPE_SUPPORT = module.type_support_msg__msg__contact_force_options
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__contact_force_options

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


class ContactForceOptions(metaclass=Metaclass_ContactForceOptions):
    """Message class 'ContactForceOptions'."""

    __slots__ = [
        '_options',
        '_ros_options',
        '_rigid_options',
        '_noisy_options',
        '_min_force',
        '_max_force',
        '_debug_color',
        '_debug_scale',
    ]

    _fields_and_field_types = {
        'options': 'gs_ros_interfaces/GeneralSensorOptions',
        'ros_options': 'gs_ros_interfaces/RosSensorOptions',
        'rigid_options': 'gs_ros_interfaces/RigidSensorOptions',
        'noisy_options': 'gs_ros_interfaces/NoisySensorOptions',
        'min_force': 'sequence<float>',
        'max_force': 'sequence<float>',
        'debug_color': 'sequence<float>',
        'debug_scale': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'GeneralSensorOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'RosSensorOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'RigidSensorOptions'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'NoisySensorOptions'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
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
        self.min_force = array.array('f', kwargs.get('min_force', []))
        self.max_force = array.array('f', kwargs.get('max_force', []))
        self.debug_color = array.array('f', kwargs.get('debug_color', []))
        self.debug_scale = kwargs.get('debug_scale', float())

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
        if self.min_force != other.min_force:
            return False
        if self.max_force != other.max_force:
            return False
        if self.debug_color != other.debug_color:
            return False
        if self.debug_scale != other.debug_scale:
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
    def min_force(self):
        """Message field 'min_force'."""
        return self._min_force

    @min_force.setter
    def min_force(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'min_force' array.array() must have the type code of 'f'"
            self._min_force = value
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
                "The 'min_force' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._min_force = array.array('f', value)

    @builtins.property
    def max_force(self):
        """Message field 'max_force'."""
        return self._max_force

    @max_force.setter
    def max_force(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'max_force' array.array() must have the type code of 'f'"
            self._max_force = value
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
                "The 'max_force' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._max_force = array.array('f', value)

    @builtins.property
    def debug_color(self):
        """Message field 'debug_color'."""
        return self._debug_color

    @debug_color.setter
    def debug_color(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'f', \
                "The 'debug_color' array.array() must have the type code of 'f'"
            self._debug_color = value
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
                "The 'debug_color' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._debug_color = array.array('f', value)

    @builtins.property
    def debug_scale(self):
        """Message field 'debug_scale'."""
        return self._debug_scale

    @debug_scale.setter
    def debug_scale(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'debug_scale' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'debug_scale' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._debug_scale = value
