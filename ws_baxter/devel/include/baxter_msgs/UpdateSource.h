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
 * Auto-generated by genmsg_cpp from file /home/p/peth8881/robotics/ws_baxter/src/baxter_common/baxter_msgs/msg/UpdateSource.msg
 *
 */


#ifndef BAXTER_MSGS_MESSAGE_UPDATESOURCE_H
#define BAXTER_MSGS_MESSAGE_UPDATESOURCE_H


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
struct UpdateSource_
{
  typedef UpdateSource_<ContainerAllocator> Type;

  UpdateSource_()
    : devname()
    , filename()
    , version()
    , uuid()  {
    }
  UpdateSource_(const ContainerAllocator& _alloc)
    : devname(_alloc)
    , filename(_alloc)
    , version(_alloc)
    , uuid(_alloc)  {
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _devname_type;
  _devname_type devname;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _filename_type;
  _filename_type filename;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _version_type;
  _version_type version;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _uuid_type;
  _uuid_type uuid;




  typedef boost::shared_ptr< ::baxter_msgs::UpdateSource_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::baxter_msgs::UpdateSource_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct UpdateSource_

typedef ::baxter_msgs::UpdateSource_<std::allocator<void> > UpdateSource;

typedef boost::shared_ptr< ::baxter_msgs::UpdateSource > UpdateSourcePtr;
typedef boost::shared_ptr< ::baxter_msgs::UpdateSource const> UpdateSourceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::baxter_msgs::UpdateSource_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::baxter_msgs::UpdateSource_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::baxter_msgs::UpdateSource_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::baxter_msgs::UpdateSource_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_msgs::UpdateSource_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::baxter_msgs::UpdateSource_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_msgs::UpdateSource_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::baxter_msgs::UpdateSource_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::baxter_msgs::UpdateSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "88ad69e3ed4d619e167c9d83e6d9310f";
  }

  static const char* value(const ::baxter_msgs::UpdateSource_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x88ad69e3ed4d619eULL;
  static const uint64_t static_value2 = 0x167c9d83e6d9310fULL;
};

template<class ContainerAllocator>
struct DataType< ::baxter_msgs::UpdateSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "baxter_msgs/UpdateSource";
  }

  static const char* value(const ::baxter_msgs::UpdateSource_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::baxter_msgs::UpdateSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string  devname\n\
string  filename\n\
string  version\n\
string  uuid\n\
\n\
";
  }

  static const char* value(const ::baxter_msgs::UpdateSource_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::baxter_msgs::UpdateSource_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.devname);
      stream.next(m.filename);
      stream.next(m.version);
      stream.next(m.uuid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct UpdateSource_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::baxter_msgs::UpdateSource_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::baxter_msgs::UpdateSource_<ContainerAllocator>& v)
  {
    s << indent << "devname: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.devname);
    s << indent << "filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.filename);
    s << indent << "version: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.version);
    s << indent << "uuid: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.uuid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BAXTER_MSGS_MESSAGE_UPDATESOURCE_H
