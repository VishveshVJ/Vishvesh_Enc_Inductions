# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:srv/SuctionSwitch.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SuctionSwitch_Request(type):
    """Metaclass of message 'SuctionSwitch_Request'."""

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
                'gs_ros_interfaces.srv.SuctionSwitch_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__suction_switch__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__suction_switch__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__suction_switch__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__suction_switch__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__suction_switch__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SuctionSwitch_Request(metaclass=Metaclass_SuctionSwitch_Request):
    """Message class 'SuctionSwitch_Request'."""

    __slots__ = [
        '_entity_one',
        '_link_one',
        '_entity_two',
        '_link_two',
        '_command',
    ]

    _fields_and_field_types = {
        'entity_one': 'string',
        'link_one': 'string',
        'entity_two': 'string',
        'link_two': 'string',
        'command': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.entity_one = kwargs.get('entity_one', str())
        self.link_one = kwargs.get('link_one', str())
        self.entity_two = kwargs.get('entity_two', str())
        self.link_two = kwargs.get('link_two', str())
        self.command = kwargs.get('command', bool())

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
        if self.entity_one != other.entity_one:
            return False
        if self.link_one != other.link_one:
            return False
        if self.entity_two != other.entity_two:
            return False
        if self.link_two != other.link_two:
            return False
        if self.command != other.command:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def entity_one(self):
        """Message field 'entity_one'."""
        return self._entity_one

    @entity_one.setter
    def entity_one(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'entity_one' field must be of type 'str'"
        self._entity_one = value

    @builtins.property
    def link_one(self):
        """Message field 'link_one'."""
        return self._link_one

    @link_one.setter
    def link_one(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'link_one' field must be of type 'str'"
        self._link_one = value

    @builtins.property
    def entity_two(self):
        """Message field 'entity_two'."""
        return self._entity_two

    @entity_two.setter
    def entity_two(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'entity_two' field must be of type 'str'"
        self._entity_two = value

    @builtins.property
    def link_two(self):
        """Message field 'link_two'."""
        return self._link_two

    @link_two.setter
    def link_two(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'link_two' field must be of type 'str'"
        self._link_two = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'command' field must be of type 'bool'"
        self._command = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SuctionSwitch_Response(type):
    """Metaclass of message 'SuctionSwitch_Response'."""

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
                'gs_ros_interfaces.srv.SuctionSwitch_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__suction_switch__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__suction_switch__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__suction_switch__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__suction_switch__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__suction_switch__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SuctionSwitch_Response(metaclass=Metaclass_SuctionSwitch_Response):
    """Message class 'SuctionSwitch_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SuctionSwitch(type):
    """Metaclass of service 'SuctionSwitch'."""

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
                'gs_ros_interfaces.srv.SuctionSwitch')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__suction_switch

            from gs_ros_interfaces.srv import _suction_switch
            if _suction_switch.Metaclass_SuctionSwitch_Request._TYPE_SUPPORT is None:
                _suction_switch.Metaclass_SuctionSwitch_Request.__import_type_support__()
            if _suction_switch.Metaclass_SuctionSwitch_Response._TYPE_SUPPORT is None:
                _suction_switch.Metaclass_SuctionSwitch_Response.__import_type_support__()


class SuctionSwitch(metaclass=Metaclass_SuctionSwitch):
    from gs_ros_interfaces.srv._suction_switch import SuctionSwitch_Request as Request
    from gs_ros_interfaces.srv._suction_switch import SuctionSwitch_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
