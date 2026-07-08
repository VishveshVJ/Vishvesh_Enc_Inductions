# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gs_ros_interfaces:srv/IKTarget.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'init_robot_pos'
# Member 'dofs_idx_local'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IKTarget_Request(type):
    """Metaclass of message 'IKTarget_Request'."""

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
                'gs_ros_interfaces.srv.IKTarget_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ik_target__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ik_target__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ik_target__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ik_target__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ik_target__request

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IKTarget_Request(metaclass=Metaclass_IKTarget_Request):
    """Message class 'IKTarget_Request'."""

    __slots__ = [
        '_robot_name',
        '_target_link_name',
        '_position',
        '_orientation',
        '_init_robot_pos',
        '_request_joint_limit',
        '_max_samples',
        '_max_solver_iterartions',
        '_damping',
        '_pos_tol',
        '_rot_tol',
        '_pos_mask',
        '_rot_mask',
        '_max_step_size',
        '_dofs_idx_local',
        '_visualize',
        '_execute',
    ]

    _fields_and_field_types = {
        'robot_name': 'string',
        'target_link_name': 'string',
        'position': 'geometry_msgs/Point',
        'orientation': 'geometry_msgs/Quaternion',
        'init_robot_pos': 'sequence<double>',
        'request_joint_limit': 'boolean',
        'max_samples': 'int32',
        'max_solver_iterartions': 'int32',
        'damping': 'double',
        'pos_tol': 'double',
        'rot_tol': 'double',
        'pos_mask': 'sequence<boolean>',
        'rot_mask': 'sequence<boolean>',
        'max_step_size': 'double',
        'dofs_idx_local': 'sequence<int32>',
        'visualize': 'boolean',
        'execute': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int32')),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robot_name = kwargs.get('robot_name', str())
        self.target_link_name = kwargs.get('target_link_name', str())
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        self.init_robot_pos = array.array('d', kwargs.get('init_robot_pos', []))
        self.request_joint_limit = kwargs.get('request_joint_limit', bool())
        self.max_samples = kwargs.get('max_samples', int())
        self.max_solver_iterartions = kwargs.get('max_solver_iterartions', int())
        self.damping = kwargs.get('damping', float())
        self.pos_tol = kwargs.get('pos_tol', float())
        self.rot_tol = kwargs.get('rot_tol', float())
        self.pos_mask = kwargs.get('pos_mask', [])
        self.rot_mask = kwargs.get('rot_mask', [])
        self.max_step_size = kwargs.get('max_step_size', float())
        self.dofs_idx_local = array.array('i', kwargs.get('dofs_idx_local', []))
        self.visualize = kwargs.get('visualize', bool())
        self.execute = kwargs.get('execute', bool())

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
        if self.target_link_name != other.target_link_name:
            return False
        if self.position != other.position:
            return False
        if self.orientation != other.orientation:
            return False
        if self.init_robot_pos != other.init_robot_pos:
            return False
        if self.request_joint_limit != other.request_joint_limit:
            return False
        if self.max_samples != other.max_samples:
            return False
        if self.max_solver_iterartions != other.max_solver_iterartions:
            return False
        if self.damping != other.damping:
            return False
        if self.pos_tol != other.pos_tol:
            return False
        if self.rot_tol != other.rot_tol:
            return False
        if self.pos_mask != other.pos_mask:
            return False
        if self.rot_mask != other.rot_mask:
            return False
        if self.max_step_size != other.max_step_size:
            return False
        if self.dofs_idx_local != other.dofs_idx_local:
            return False
        if self.visualize != other.visualize:
            return False
        if self.execute != other.execute:
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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @builtins.property
    def init_robot_pos(self):
        """Message field 'init_robot_pos'."""
        return self._init_robot_pos

    @init_robot_pos.setter
    def init_robot_pos(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'init_robot_pos' array.array() must have the type code of 'd'"
            self._init_robot_pos = value
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
                "The 'init_robot_pos' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._init_robot_pos = array.array('d', value)

    @builtins.property
    def request_joint_limit(self):
        """Message field 'request_joint_limit'."""
        return self._request_joint_limit

    @request_joint_limit.setter
    def request_joint_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'request_joint_limit' field must be of type 'bool'"
        self._request_joint_limit = value

    @builtins.property
    def max_samples(self):
        """Message field 'max_samples'."""
        return self._max_samples

    @max_samples.setter
    def max_samples(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_samples' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_samples' field must be an integer in [-2147483648, 2147483647]"
        self._max_samples = value

    @builtins.property
    def max_solver_iterartions(self):
        """Message field 'max_solver_iterartions'."""
        return self._max_solver_iterartions

    @max_solver_iterartions.setter
    def max_solver_iterartions(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_solver_iterartions' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'max_solver_iterartions' field must be an integer in [-2147483648, 2147483647]"
        self._max_solver_iterartions = value

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
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'damping' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._damping = value

    @builtins.property
    def pos_tol(self):
        """Message field 'pos_tol'."""
        return self._pos_tol

    @pos_tol.setter
    def pos_tol(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_tol' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pos_tol' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pos_tol = value

    @builtins.property
    def rot_tol(self):
        """Message field 'rot_tol'."""
        return self._rot_tol

    @rot_tol.setter
    def rot_tol(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rot_tol' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rot_tol' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rot_tol = value

    @builtins.property
    def pos_mask(self):
        """Message field 'pos_mask'."""
        return self._pos_mask

    @pos_mask.setter
    def pos_mask(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'pos_mask' field must be a set or sequence and each value of type 'bool'"
        self._pos_mask = value

    @builtins.property
    def rot_mask(self):
        """Message field 'rot_mask'."""
        return self._rot_mask

    @rot_mask.setter
    def rot_mask(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'rot_mask' field must be a set or sequence and each value of type 'bool'"
        self._rot_mask = value

    @builtins.property
    def max_step_size(self):
        """Message field 'max_step_size'."""
        return self._max_step_size

    @max_step_size.setter
    def max_step_size(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_step_size' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_step_size' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_step_size = value

    @builtins.property
    def dofs_idx_local(self):
        """Message field 'dofs_idx_local'."""
        return self._dofs_idx_local

    @dofs_idx_local.setter
    def dofs_idx_local(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'i', \
                "The 'dofs_idx_local' array.array() must have the type code of 'i'"
            self._dofs_idx_local = value
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
                "The 'dofs_idx_local' field must be a set or sequence and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._dofs_idx_local = array.array('i', value)

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


# Import statements for member types

# Member 'joint_angles'
# already imported above
# import array

# already imported above
# import builtins

# already imported above
# import math

# already imported above
# import rosidl_parser.definition


class Metaclass_IKTarget_Response(type):
    """Metaclass of message 'IKTarget_Response'."""

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
                'gs_ros_interfaces.srv.IKTarget_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__ik_target__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__ik_target__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__ik_target__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__ik_target__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__ik_target__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IKTarget_Response(metaclass=Metaclass_IKTarget_Response):
    """Message class 'IKTarget_Response'."""

    __slots__ = [
        '_success',
        '_solution_found',
        '_joint_angles',
        '_target_pos_error',
        '_target_quat_error',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'solution_found': 'boolean',
        'joint_angles': 'sequence<double>',
        'target_pos_error': 'double',
        'target_quat_error': 'double',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.solution_found = kwargs.get('solution_found', bool())
        self.joint_angles = array.array('d', kwargs.get('joint_angles', []))
        self.target_pos_error = kwargs.get('target_pos_error', float())
        self.target_quat_error = kwargs.get('target_quat_error', float())
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
        if self.solution_found != other.solution_found:
            return False
        if self.joint_angles != other.joint_angles:
            return False
        if self.target_pos_error != other.target_pos_error:
            return False
        if self.target_quat_error != other.target_quat_error:
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
    def solution_found(self):
        """Message field 'solution_found'."""
        return self._solution_found

    @solution_found.setter
    def solution_found(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'solution_found' field must be of type 'bool'"
        self._solution_found = value

    @builtins.property
    def joint_angles(self):
        """Message field 'joint_angles'."""
        return self._joint_angles

    @joint_angles.setter
    def joint_angles(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'joint_angles' array.array() must have the type code of 'd'"
            self._joint_angles = value
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
                "The 'joint_angles' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._joint_angles = array.array('d', value)

    @builtins.property
    def target_pos_error(self):
        """Message field 'target_pos_error'."""
        return self._target_pos_error

    @target_pos_error.setter
    def target_pos_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_pos_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_pos_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_pos_error = value

    @builtins.property
    def target_quat_error(self):
        """Message field 'target_quat_error'."""
        return self._target_quat_error

    @target_quat_error.setter
    def target_quat_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_quat_error' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'target_quat_error' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._target_quat_error = value

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


class Metaclass_IKTarget(type):
    """Metaclass of service 'IKTarget'."""

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
                'gs_ros_interfaces.srv.IKTarget')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__ik_target

            from gs_ros_interfaces.srv import _ik_target
            if _ik_target.Metaclass_IKTarget_Request._TYPE_SUPPORT is None:
                _ik_target.Metaclass_IKTarget_Request.__import_type_support__()
            if _ik_target.Metaclass_IKTarget_Response._TYPE_SUPPORT is None:
                _ik_target.Metaclass_IKTarget_Response.__import_type_support__()


class IKTarget(metaclass=Metaclass_IKTarget):
    from gs_ros_interfaces.srv._ik_target import IKTarget_Request as Request
    from gs_ros_interfaces.srv._ik_target import IKTarget_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
