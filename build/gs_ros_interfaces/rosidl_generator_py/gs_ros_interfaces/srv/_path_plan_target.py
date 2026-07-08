# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:srv/PathPlanTarget.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'goal_state'
# Member 'start_state'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PathPlanTarget_Request(type):
    """Metaclass of message 'PathPlanTarget_Request'."""

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
                'gs_ros_interfaces.srv.PathPlanTarget_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__path_plan_target__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__path_plan_target__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__path_plan_target__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__path_plan_target__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__path_plan_target__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathPlanTarget_Request(metaclass=Metaclass_PathPlanTarget_Request):
    """Message class 'PathPlanTarget_Request'."""

    __slots__ = [
        '_robot_name',
        '_attached_intity',
        '_target_link_name',
        '_goal_state',
        '_start_state',
        '_max_nodes',
        '_resolution',
        '_timeout',
        '_max_retries',
        '_smooth_path',
        '_num_waypoints',
        '_ignore_collision',
        '_planner',
        '_ee_link_name',
        '_visualize',
        '_execute',
        '_target_pos',
        '_tolerance',
    ]

    _fields_and_field_types = {
        'robot_name': 'string',
        'attached_intity': 'string',
        'target_link_name': 'string',
        'goal_state': 'sequence<double>',
        'start_state': 'sequence<double>',
        'max_nodes': 'int32',
        'resolution': 'double',
        'timeout': 'double',
        'max_retries': 'int32',
        'smooth_path': 'boolean',
        'num_waypoints': 'int32',
        'ignore_collision': 'boolean',
        'planner': 'string',
        'ee_link_name': 'string',
        'visualize': 'boolean',
        'execute': 'boolean',
        'target_pos': 'geometry_msgs/Point',
        'tolerance': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_name = kwargs.get('robot_name', str())
        self.attached_intity = kwargs.get('attached_intity', str())
        self.target_link_name = kwargs.get('target_link_name', str())
        self.goal_state = array.array('d', kwargs.get('goal_state', []))
        self.start_state = array.array('d', kwargs.get('start_state', []))
        self.max_nodes = kwargs.get('max_nodes', int())
        self.resolution = kwargs.get('resolution', float())
        self.timeout = kwargs.get('timeout', float())
        self.max_retries = kwargs.get('max_retries', int())
        self.smooth_path = kwargs.get('smooth_path', bool())
        self.num_waypoints = kwargs.get('num_waypoints', int())
        self.ignore_collision = kwargs.get('ignore_collision', bool())
        self.planner = kwargs.get('planner', str())
        self.ee_link_name = kwargs.get('ee_link_name', str())
        self.visualize = kwargs.get('visualize', bool())
        self.execute = kwargs.get('execute', bool())
        from geometry_msgs.msg import Point
        self.target_pos = kwargs.get('target_pos', Point())
        self.tolerance = kwargs.get('tolerance', float())

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
        if self.robot_name != other.robot_name:
            return False
        if self.attached_intity != other.attached_intity:
            return False
        if self.target_link_name != other.target_link_name:
            return False
        if self.goal_state != other.goal_state:
            return False
        if self.start_state != other.start_state:
            return False
        if self.max_nodes != other.max_nodes:
            return False
        if self.resolution != other.resolution:
            return False
        if self.timeout != other.timeout:
            return False
        if self.max_retries != other.max_retries:
            return False
        if self.smooth_path != other.smooth_path:
            return False
        if self.num_waypoints != other.num_waypoints:
            return False
        if self.ignore_collision != other.ignore_collision:
            return False
        if self.planner != other.planner:
            return False
        if self.ee_link_name != other.ee_link_name:
            return False
        if self.visualize != other.visualize:
            return False
        if self.execute != other.execute:
            return False
        if self.target_pos != other.target_pos:
            return False
        if self.tolerance != other.tolerance:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robot_name(self):
        """Message field 'robot_name'."""
        return self._robot_name

    @robot_name.setter
    def robot_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'robot_name' field must be of type 'str'"
        self._robot_name = value

    @builtins.property
    def attached_intity(self):
        """Message field 'attached_intity'."""
        return self._attached_intity

    @attached_intity.setter
    def attached_intity(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'attached_intity' field must be of type 'str'"
        self._attached_intity = value

    @builtins.property
    def target_link_name(self):
        """Message field 'target_link_name'."""
        return self._target_link_name

    @target_link_name.setter
    def target_link_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'target_link_name' field must be of type 'str'"
        self._target_link_name = value

    @builtins.property
    def goal_state(self):
        """Message field 'goal_state'."""
        return self._goal_state

    @goal_state.setter
    def goal_state(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'goal_state' array.array() must have the type code of 'd'"
            self._goal_state = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'goal_state' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._goal_state = array.array('d', value)

    @builtins.property
    def start_state(self):
        """Message field 'start_state'."""
        return self._start_state

    @start_state.setter
    def start_state(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'start_state' array.array() must have the type code of 'd'"
            self._start_state = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'start_state' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._start_state = array.array('d', value)

    @builtins.property
    def max_nodes(self):
        """Message field 'max_nodes'."""
        return self._max_nodes

    @max_nodes.setter
    def max_nodes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_nodes' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_nodes' field must be an integer in [-2147483648, 2147483647]"
        self._max_nodes = value

    @builtins.property
    def resolution(self):
        """Message field 'resolution'."""
        return self._resolution

    @resolution.setter
    def resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'resolution' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'resolution' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._resolution = value

    @builtins.property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'timeout' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'timeout' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._timeout = value

    @builtins.property
    def max_retries(self):
        """Message field 'max_retries'."""
        return self._max_retries

    @max_retries.setter
    def max_retries(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_retries' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_retries' field must be an integer in [-2147483648, 2147483647]"
        self._max_retries = value

    @builtins.property
    def smooth_path(self):
        """Message field 'smooth_path'."""
        return self._smooth_path

    @smooth_path.setter
    def smooth_path(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'smooth_path' field must be of type 'bool'"
        self._smooth_path = value

    @builtins.property
    def num_waypoints(self):
        """Message field 'num_waypoints'."""
        return self._num_waypoints

    @num_waypoints.setter
    def num_waypoints(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_waypoints' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'num_waypoints' field must be an integer in [-2147483648, 2147483647]"
        self._num_waypoints = value

    @builtins.property
    def ignore_collision(self):
        """Message field 'ignore_collision'."""
        return self._ignore_collision

    @ignore_collision.setter
    def ignore_collision(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ignore_collision' field must be of type 'bool'"
        self._ignore_collision = value

    @builtins.property
    def planner(self):
        """Message field 'planner'."""
        return self._planner

    @planner.setter
    def planner(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'planner' field must be of type 'str'"
        self._planner = value

    @builtins.property
    def ee_link_name(self):
        """Message field 'ee_link_name'."""
        return self._ee_link_name

    @ee_link_name.setter
    def ee_link_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ee_link_name' field must be of type 'str'"
        self._ee_link_name = value

    @builtins.property
    def visualize(self):
        """Message field 'visualize'."""
        return self._visualize

    @visualize.setter
    def visualize(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'visualize' field must be of type 'bool'"
        self._visualize = value

    @builtins.property
    def execute(self):
        """Message field 'execute'."""
        return self._execute

    @execute.setter
    def execute(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'execute' field must be of type 'bool'"
        self._execute = value

    @builtins.property
    def target_pos(self):
        """Message field 'target_pos'."""
        return self._target_pos

    @target_pos.setter
    def target_pos(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'target_pos' field must be a sub message of type 'Point'"
        self._target_pos = value

    @builtins.property
    def tolerance(self):
        """Message field 'tolerance'."""
        return self._tolerance

    @tolerance.setter
    def tolerance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tolerance' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tolerance' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tolerance = value


# Import statements for member types

# Member 'path'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_PathPlanTarget_Response(type):
    """Metaclass of message 'PathPlanTarget_Response'."""

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
                'gs_ros_interfaces.srv.PathPlanTarget_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__path_plan_target__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__path_plan_target__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__path_plan_target__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__path_plan_target__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__path_plan_target__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PathPlanTarget_Response(metaclass=Metaclass_PathPlanTarget_Response):
    """Message class 'PathPlanTarget_Response'."""

    __slots__ = [
        '_success',
        '_plan_found',
        '_message',
        '_path',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'plan_found': 'boolean',
        'message': 'string',
        'path': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.plan_found = kwargs.get('plan_found', bool())
        self.message = kwargs.get('message', str())
        self.path = array.array('d', kwargs.get('path', []))

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
        if self.plan_found != other.plan_found:
            return False
        if self.message != other.message:
            return False
        if self.path != other.path:
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
    def plan_found(self):
        """Message field 'plan_found'."""
        return self._plan_found

    @plan_found.setter
    def plan_found(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'plan_found' field must be of type 'bool'"
        self._plan_found = value

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

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'path' array.array() must have the type code of 'd'"
            self._path = value
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
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'path' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._path = array.array('d', value)


class Metaclass_PathPlanTarget(type):
    """Metaclass of service 'PathPlanTarget'."""

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
                'gs_ros_interfaces.srv.PathPlanTarget')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__path_plan_target

            from gs_ros_interfaces.srv import _path_plan_target
            if _path_plan_target.Metaclass_PathPlanTarget_Request._TYPE_SUPPORT is None:
                _path_plan_target.Metaclass_PathPlanTarget_Request.__import_type_support__()
            if _path_plan_target.Metaclass_PathPlanTarget_Response._TYPE_SUPPORT is None:
                _path_plan_target.Metaclass_PathPlanTarget_Response.__import_type_support__()


class PathPlanTarget(metaclass=Metaclass_PathPlanTarget):
    from gs_ros_interfaces.srv._path_plan_target import PathPlanTarget_Request as Request
    from gs_ros_interfaces.srv._path_plan_target import PathPlanTarget_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
