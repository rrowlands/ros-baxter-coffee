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
 * Auto-generated by genmsg_cpp from file /home/p/peth8881/robotics/ws_baxter/src/baxter_common/baxter_msgs/srv/SolvePositionIK.srv
 *
 */


#ifndef BAXTER_MSGS_MESSAGE_SOLVEPOSITIONIKRESPONSE_H
#define BAXTER_MSGS_MESSAGE_SOLVEPOSITIONIKRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <baxter_msgs/JointPositions.h>

namespace baxter_msgs
{
template <class ContainerAllocator>
struct SolvePositionIKResponse_
{
  typedef SolvePositionIKResponse_<ContainerAllocator> Type;

  SolvePositionIKResponse_()
    : joints()
    , isValid()  {
    }
  SolvePositionIKResponse_(const ContainerAllocator& _alloc)
    : joints(_alloc)
    , isValid(_alloc)  {
    }



   typedef std::vector< ::baxter_msgs::JointPositions_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::baxter_msgs::JointPositions_<ContainerAllocator> >::other >  _joints_type;
  _joints_type joints;

   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _isValid_type;
  _isValid_type isValid;




  typedef boost::shared_ptr< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct SolvePositionIKResponse_

typedef ::baxter_msgs::SolvePositionIKResponse_<std::allocator<void> > SolvePositionIKResponse;

typedef boost::shared_ptr< ::baxter_msgs::SolvePositionIKResponse > SolvePositionIKResponsePtr;
typedef boost::shared_ptr< ::baxter_msgs::SolvePositionIKResponse const> SolvePositionIKResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace baxter_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'baxter_msgs': ['/home/p/peth8881/robotics/ws_baxter/src/baxter_common/baxter_msgs/msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/hydro/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fff7836a31ef390040c7cd2eb0e4eb04";
  }

  static const char* value(const ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfff7836a31ef3900ULL;
  static const uint64_t static_value2 = 0x40c7cd2eb0e4eb04ULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_msgs/SolvePositionIKResponse";
  }

  static const char* value(const ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_msgs/JointPositions[] joints\n\
bool[] isValid\n\
\n\
\n\
================================================================================\n\
MSG: baxter_msgs/JointPositions\n\
# Joint angles in radians:\n\
float64[] angles\n\
# A list of names associated with the above angles\n\
string[]  names\n\
";
  }

  static const char* value(const ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joints);
      stream.next(m.isValid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SolvePositionIKResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_msgs::SolvePositionIKResponse_<ContainerAllocator>& v)
  {
    s << indent << "joints[]" << std::endl;
    for (size_t i = 0; i < v.joints.size(); ++i)
    {
      s << indent << "  joints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::baxter_msgs::JointPositions_<ContainerAllocator> >::stream(s, indent + "    ", v.joints[i]);
    }
    s << indent << "isValid[]" << std::endl;
    for (size_t i = 0; i < v.isValid.size(); ++i)
    {
      s << indent << "  isValid[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.isValid[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_MSGS_MESSAGE_SOLVEPOSITIONIKRESPONSE_H
