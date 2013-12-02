"""autogenerated by genpy from baxter_msgs/GripperCommand.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class GripperCommand(genpy.Message):
  _md5sum = "aab4b9ef6eae9ca1c0ec13b5899a5379"
  _type = "baxter_msgs/GripperCommand"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """## General electric gripper command message
float32 position # position, as a percentage of max position;      0=closed - 100=open
float32 force    # force limit, as a percentage of max force;      0=none   - 100=max
float32 velocity # velocity, as a percentage of max velocity;      0=none   - 100=max
float32 holding  # holding force, as a percentage of max velocity; 0=none   - 100=max
float32 deadZone # dead zone, as a percentage of max position;     0=none   - 100=max
"""
  __slots__ = ['position','force','velocity','holding','deadZone']
  _slot_types = ['float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       position,force,velocity,holding,deadZone

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(GripperCommand, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.position is None:
        self.position = 0.
      if self.force is None:
        self.force = 0.
      if self.velocity is None:
        self.velocity = 0.
      if self.holding is None:
        self.holding = 0.
      if self.deadZone is None:
        self.deadZone = 0.
    else:
      self.position = 0.
      self.force = 0.
      self.velocity = 0.
      self.holding = 0.
      self.deadZone = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_5f.pack(_x.position, _x.force, _x.velocity, _x.holding, _x.deadZone))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 20
      (_x.position, _x.force, _x.velocity, _x.holding, _x.deadZone,) = _struct_5f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_5f.pack(_x.position, _x.force, _x.velocity, _x.holding, _x.deadZone))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 20
      (_x.position, _x.force, _x.velocity, _x.holding, _x.deadZone,) = _struct_5f.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_5f = struct.Struct("<5f")