# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:srv/SetSensorOptions.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetSensorOptions_Request(type):
    """Metaclass of message 'SetSensorOptions_Request'."""

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
                'gs_ros_interfaces.srv.SetSensorOptions_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_sensor_options__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_sensor_options__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_sensor_options__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_sensor_options__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_sensor_options__request

            from gs_ros_interfaces.msg import CameraOptions
            if CameraOptions.__class__._TYPE_SUPPORT is None:
                CameraOptions.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import ContactForceOptions
            if ContactForceOptions.__class__._TYPE_SUPPORT is None:
                ContactForceOptions.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import ContactOptions
            if ContactOptions.__class__._TYPE_SUPPORT is None:
                ContactOptions.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import ImuOptions
            if ImuOptions.__class__._TYPE_SUPPORT is None:
                ImuOptions.__class__.__import_type_support__()

            from gs_ros_interfaces.msg import LidarOptions
            if LidarOptions.__class__._TYPE_SUPPORT is None:
                LidarOptions.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSensorOptions_Request(metaclass=Metaclass_SetSensorOptions_Request):
    """Message class 'SetSensorOptions_Request'."""

    __slots__ = [
        '_entity',
        '_cameras',
        '_lidars',
        '_imus',
        '_contacts',
        '_contact_forces',
    ]

    _fields_and_field_types = {
        'entity': 'string',
        'cameras': 'sequence<gs_ros_interfaces/CameraOptions>',
        'lidars': 'sequence<gs_ros_interfaces/LidarOptions>',
        'imus': 'sequence<gs_ros_interfaces/ImuOptions>',
        'contacts': 'sequence<gs_ros_interfaces/ContactOptions>',
        'contact_forces': 'sequence<gs_ros_interfaces/ContactForceOptions>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'CameraOptions')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'LidarOptions')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'ImuOptions')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'ContactOptions')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['gs_ros_interfaces', 'msg'], 'ContactForceOptions')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.entity = kwargs.get('entity', str())
        self.cameras = kwargs.get('cameras', [])
        self.lidars = kwargs.get('lidars', [])
        self.imus = kwargs.get('imus', [])
        self.contacts = kwargs.get('contacts', [])
        self.contact_forces = kwargs.get('contact_forces', [])

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
        if self.entity != other.entity:
            return False
        if self.cameras != other.cameras:
            return False
        if self.lidars != other.lidars:
            return False
        if self.imus != other.imus:
            return False
        if self.contacts != other.contacts:
            return False
        if self.contact_forces != other.contact_forces:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def entity(self):
        """Message field 'entity'."""
        return self._entity

    @entity.setter
    def entity(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'entity' field must be of type 'str'"
        self._entity = value

    @builtins.property
    def cameras(self):
        """Message field 'cameras'."""
        return self._cameras

    @cameras.setter
    def cameras(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import CameraOptions
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
                 all(isinstance(v, CameraOptions) for v in value) and
                 True), \
                "The 'cameras' field must be a set or sequence and each value of type 'CameraOptions'"
        self._cameras = value

    @builtins.property
    def lidars(self):
        """Message field 'lidars'."""
        return self._lidars

    @lidars.setter
    def lidars(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import LidarOptions
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
                 all(isinstance(v, LidarOptions) for v in value) and
                 True), \
                "The 'lidars' field must be a set or sequence and each value of type 'LidarOptions'"
        self._lidars = value

    @builtins.property
    def imus(self):
        """Message field 'imus'."""
        return self._imus

    @imus.setter
    def imus(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import ImuOptions
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
                 all(isinstance(v, ImuOptions) for v in value) and
                 True), \
                "The 'imus' field must be a set or sequence and each value of type 'ImuOptions'"
        self._imus = value

    @builtins.property
    def contacts(self):
        """Message field 'contacts'."""
        return self._contacts

    @contacts.setter
    def contacts(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import ContactOptions
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
                 all(isinstance(v, ContactOptions) for v in value) and
                 True), \
                "The 'contacts' field must be a set or sequence and each value of type 'ContactOptions'"
        self._contacts = value

    @builtins.property
    def contact_forces(self):
        """Message field 'contact_forces'."""
        return self._contact_forces

    @contact_forces.setter
    def contact_forces(self, value):
        if __debug__:
            from gs_ros_interfaces.msg import ContactForceOptions
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
                 all(isinstance(v, ContactForceOptions) for v in value) and
                 True), \
                "The 'contact_forces' field must be a set or sequence and each value of type 'ContactForceOptions'"
        self._contact_forces = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetSensorOptions_Response(type):
    """Metaclass of message 'SetSensorOptions_Response'."""

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
                'gs_ros_interfaces.srv.SetSensorOptions_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_sensor_options__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_sensor_options__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_sensor_options__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_sensor_options__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_sensor_options__response

            from simulation_interfaces.msg import Result
            if Result.__class__._TYPE_SUPPORT is None:
                Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSensorOptions_Response(metaclass=Metaclass_SetSensorOptions_Response):
    """Message class 'SetSensorOptions_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'simulation_interfaces/Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['simulation_interfaces', 'msg'], 'Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from simulation_interfaces.msg import Result
        self.result = kwargs.get('result', Result())

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
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from simulation_interfaces.msg import Result
            assert \
                isinstance(value, Result), \
                "The 'result' field must be a sub message of type 'Result'"
        self._result = value


class Metaclass_SetSensorOptions(type):
    """Metaclass of service 'SetSensorOptions'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gs_ros_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gs_ros_interfaces.srv.SetSensorOptions')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_sensor_options

            from gs_ros_interfaces.srv import _set_sensor_options
            if _set_sensor_options.Metaclass_SetSensorOptions_Request._TYPE_SUPPORT is None:
                _set_sensor_options.Metaclass_SetSensorOptions_Request.__import_type_support__()
            if _set_sensor_options.Metaclass_SetSensorOptions_Response._TYPE_SUPPORT is None:
                _set_sensor_options.Metaclass_SetSensorOptions_Response.__import_type_support__()


class SetSensorOptions(metaclass=Metaclass_SetSensorOptions):
    from gs_ros_interfaces.srv._set_sensor_options import SetSensorOptions_Request as Request
    from gs_ros_interfaces.srv._set_sensor_options import SetSensorOptions_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
