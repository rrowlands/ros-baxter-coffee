/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /home/p/peth8881/robotics/ws_baxter/src/baxter_common/baxter_msgs/msg/GripperProperties.msg
 *
 */


#ifndef BAXTER_MSGS_MESSAGE_GRIPPERPROPERTIES_H
#define BAXTER_MSGS_MESSAGE_GRIPPERPROPERTIES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace baxter_msgs
{
template <class ContainerAllocator>
struct GripperProperties_
{
  typedef GripperProperties_<ContainerAllocator> Type;

  GripperProperties_()
    : hasForce(false)
    , hasPosition(false)
    , isReverse(false)  {
    }
  GripperProperties_(const ContainerAllocator& _alloc)
    : hasForce(false)
    , hasPosition(false)
    , isReverse(false)  {
    }



   typedef uint8_t _hasForce_type;
  _hasForce_type hasForce;

   typedef uint8_t _hasPosition_type;
  _hasPosition_type hasPosition;

   typedef uint8_t _isReverse_type;
  _isReverse_type isReverse;




  typedef boost::shared_ptr< ::baxter_msgs::GripperProperties_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_msgs::GripperProperties_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct GripperProperties_

typedef ::baxter_msgs::GripperProperties_<std::allocator<void> > GripperProperties;

typedef boost::shared_ptr< ::baxter_msgs::GripperProperties > GripperPropertiesPtr;
typedef boost::shared_ptr< ::baxter_msgs::GripperProperties const> GripperPropertiesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_msgs::GripperProperties_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_msgs::GripperProperties_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'baxter_msgs': ['/home/p/peth8881/robotics/ws_baxter/src/baxter_common/baxter_msgs/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/hydro/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_msgs::GripperProperties_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_msgs::GripperProperties_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_msgs::GripperProperties_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_msgs::GripperProperties_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_msgs::GripperProperties_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_msgs::GripperProperties_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_msgs::GripperProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d3b24964f2ce5ed7da642fe492f91d45";
  }

  static const char* value(const ::baxter_msgs::GripperProperties_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd3b24964f2ce5ed7ULL;
  static const uint64_t static_value2 = 0xda642fe492f91d45ULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_msgs::GripperProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_msgs/GripperProperties";
  }

  static const char* value(const ::baxter_msgs::GripperProperties_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_msgs::GripperProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Gripper properties\n\
#\n\
bool   hasForce             # true if the gripper has force control\n\
bool   hasPosition          # true if the gripper has position control\n\
bool   isReverse	    # true if the gripper grips when opened\n\
\n\
\n\
";
  }

  static const char* value(const ::baxter_msgs::GripperProperties_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_msgs::GripperProperties_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.hasForce);
      stream.next(m.hasPosition);
      stream.next(m.isReverse);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GripperProperties_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_msgs::GripperProperties_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_msgs::GripperProperties_<ContainerAllocator>& v)
  {
    s << indent << "hasForce: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hasForce);
    s << indent << "hasPosition: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hasPosition);
    s << indent << "isReverse: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isReverse);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_MSGS_MESSAGE_GRIPPERPROPERTIES_H
