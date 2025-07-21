# generated from rosidl_generator_py/resource/_idl.py.em
# with input from liorf:msg/CloudInfo.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CloudInfo(type):
    """Metaclass of message 'CloudInfo'."""

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
            module = import_type_support('liorf')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'liorf.msg.CloudInfo')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cloud_info
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cloud_info
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cloud_info
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cloud_info
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cloud_info

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CloudInfo(metaclass=Metaclass_CloudInfo):
    """Message class 'CloudInfo'."""

    __slots__ = [
        '_header',
        '_imuavailable',
        '_odomavailable',
        '_imurollinit',
        '_imupitchinit',
        '_imuyawinit',
        '_initialguessx',
        '_initialguessy',
        '_initialguessz',
        '_initialguessroll',
        '_initialguesspitch',
        '_initialguessyaw',
        '_cloud_deskewed',
        '_cloud_corner',
        '_cloud_surface',
        '_key_frame_cloud',
        '_key_frame_color',
        '_key_frame_poses',
        '_key_frame_map',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'imuavailable': 'int64',
        'odomavailable': 'int64',
        'imurollinit': 'float',
        'imupitchinit': 'float',
        'imuyawinit': 'float',
        'initialguessx': 'float',
        'initialguessy': 'float',
        'initialguessz': 'float',
        'initialguessroll': 'float',
        'initialguesspitch': 'float',
        'initialguessyaw': 'float',
        'cloud_deskewed': 'sensor_msgs/PointCloud2',
        'cloud_corner': 'sensor_msgs/PointCloud2',
        'cloud_surface': 'sensor_msgs/PointCloud2',
        'key_frame_cloud': 'sensor_msgs/PointCloud2',
        'key_frame_color': 'sensor_msgs/PointCloud2',
        'key_frame_poses': 'sensor_msgs/PointCloud2',
        'key_frame_map': 'sensor_msgs/PointCloud2',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.imuavailable = kwargs.get('imuavailable', int())
        self.odomavailable = kwargs.get('odomavailable', int())
        self.imurollinit = kwargs.get('imurollinit', float())
        self.imupitchinit = kwargs.get('imupitchinit', float())
        self.imuyawinit = kwargs.get('imuyawinit', float())
        self.initialguessx = kwargs.get('initialguessx', float())
        self.initialguessy = kwargs.get('initialguessy', float())
        self.initialguessz = kwargs.get('initialguessz', float())
        self.initialguessroll = kwargs.get('initialguessroll', float())
        self.initialguesspitch = kwargs.get('initialguesspitch', float())
        self.initialguessyaw = kwargs.get('initialguessyaw', float())
        from sensor_msgs.msg import PointCloud2
        self.cloud_deskewed = kwargs.get('cloud_deskewed', PointCloud2())
        from sensor_msgs.msg import PointCloud2
        self.cloud_corner = kwargs.get('cloud_corner', PointCloud2())
        from sensor_msgs.msg import PointCloud2
        self.cloud_surface = kwargs.get('cloud_surface', PointCloud2())
        from sensor_msgs.msg import PointCloud2
        self.key_frame_cloud = kwargs.get('key_frame_cloud', PointCloud2())
        from sensor_msgs.msg import PointCloud2
        self.key_frame_color = kwargs.get('key_frame_color', PointCloud2())
        from sensor_msgs.msg import PointCloud2
        self.key_frame_poses = kwargs.get('key_frame_poses', PointCloud2())
        from sensor_msgs.msg import PointCloud2
        self.key_frame_map = kwargs.get('key_frame_map', PointCloud2())

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
        if self.header != other.header:
            return False
        if self.imuavailable != other.imuavailable:
            return False
        if self.odomavailable != other.odomavailable:
            return False
        if self.imurollinit != other.imurollinit:
            return False
        if self.imupitchinit != other.imupitchinit:
            return False
        if self.imuyawinit != other.imuyawinit:
            return False
        if self.initialguessx != other.initialguessx:
            return False
        if self.initialguessy != other.initialguessy:
            return False
        if self.initialguessz != other.initialguessz:
            return False
        if self.initialguessroll != other.initialguessroll:
            return False
        if self.initialguesspitch != other.initialguesspitch:
            return False
        if self.initialguessyaw != other.initialguessyaw:
            return False
        if self.cloud_deskewed != other.cloud_deskewed:
            return False
        if self.cloud_corner != other.cloud_corner:
            return False
        if self.cloud_surface != other.cloud_surface:
            return False
        if self.key_frame_cloud != other.key_frame_cloud:
            return False
        if self.key_frame_color != other.key_frame_color:
            return False
        if self.key_frame_poses != other.key_frame_poses:
            return False
        if self.key_frame_map != other.key_frame_map:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def imuavailable(self):
        """Message field 'imuavailable'."""
        return self._imuavailable

    @imuavailable.setter
    def imuavailable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'imuavailable' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'imuavailable' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._imuavailable = value

    @property
    def odomavailable(self):
        """Message field 'odomavailable'."""
        return self._odomavailable

    @odomavailable.setter
    def odomavailable(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'odomavailable' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'odomavailable' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._odomavailable = value

    @property
    def imurollinit(self):
        """Message field 'imurollinit'."""
        return self._imurollinit

    @imurollinit.setter
    def imurollinit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imurollinit' field must be of type 'float'"
        self._imurollinit = value

    @property
    def imupitchinit(self):
        """Message field 'imupitchinit'."""
        return self._imupitchinit

    @imupitchinit.setter
    def imupitchinit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imupitchinit' field must be of type 'float'"
        self._imupitchinit = value

    @property
    def imuyawinit(self):
        """Message field 'imuyawinit'."""
        return self._imuyawinit

    @imuyawinit.setter
    def imuyawinit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imuyawinit' field must be of type 'float'"
        self._imuyawinit = value

    @property
    def initialguessx(self):
        """Message field 'initialguessx'."""
        return self._initialguessx

    @initialguessx.setter
    def initialguessx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initialguessx' field must be of type 'float'"
        self._initialguessx = value

    @property
    def initialguessy(self):
        """Message field 'initialguessy'."""
        return self._initialguessy

    @initialguessy.setter
    def initialguessy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initialguessy' field must be of type 'float'"
        self._initialguessy = value

    @property
    def initialguessz(self):
        """Message field 'initialguessz'."""
        return self._initialguessz

    @initialguessz.setter
    def initialguessz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initialguessz' field must be of type 'float'"
        self._initialguessz = value

    @property
    def initialguessroll(self):
        """Message field 'initialguessroll'."""
        return self._initialguessroll

    @initialguessroll.setter
    def initialguessroll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initialguessroll' field must be of type 'float'"
        self._initialguessroll = value

    @property
    def initialguesspitch(self):
        """Message field 'initialguesspitch'."""
        return self._initialguesspitch

    @initialguesspitch.setter
    def initialguesspitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initialguesspitch' field must be of type 'float'"
        self._initialguesspitch = value

    @property
    def initialguessyaw(self):
        """Message field 'initialguessyaw'."""
        return self._initialguessyaw

    @initialguessyaw.setter
    def initialguessyaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'initialguessyaw' field must be of type 'float'"
        self._initialguessyaw = value

    @property
    def cloud_deskewed(self):
        """Message field 'cloud_deskewed'."""
        return self._cloud_deskewed

    @cloud_deskewed.setter
    def cloud_deskewed(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'cloud_deskewed' field must be a sub message of type 'PointCloud2'"
        self._cloud_deskewed = value

    @property
    def cloud_corner(self):
        """Message field 'cloud_corner'."""
        return self._cloud_corner

    @cloud_corner.setter
    def cloud_corner(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'cloud_corner' field must be a sub message of type 'PointCloud2'"
        self._cloud_corner = value

    @property
    def cloud_surface(self):
        """Message field 'cloud_surface'."""
        return self._cloud_surface

    @cloud_surface.setter
    def cloud_surface(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'cloud_surface' field must be a sub message of type 'PointCloud2'"
        self._cloud_surface = value

    @property
    def key_frame_cloud(self):
        """Message field 'key_frame_cloud'."""
        return self._key_frame_cloud

    @key_frame_cloud.setter
    def key_frame_cloud(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'key_frame_cloud' field must be a sub message of type 'PointCloud2'"
        self._key_frame_cloud = value

    @property
    def key_frame_color(self):
        """Message field 'key_frame_color'."""
        return self._key_frame_color

    @key_frame_color.setter
    def key_frame_color(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'key_frame_color' field must be a sub message of type 'PointCloud2'"
        self._key_frame_color = value

    @property
    def key_frame_poses(self):
        """Message field 'key_frame_poses'."""
        return self._key_frame_poses

    @key_frame_poses.setter
    def key_frame_poses(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'key_frame_poses' field must be a sub message of type 'PointCloud2'"
        self._key_frame_poses = value

    @property
    def key_frame_map(self):
        """Message field 'key_frame_map'."""
        return self._key_frame_map

    @key_frame_map.setter
    def key_frame_map(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'key_frame_map' field must be a sub message of type 'PointCloud2'"
        self._key_frame_map = value
