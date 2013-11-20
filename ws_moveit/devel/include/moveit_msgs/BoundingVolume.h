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
 * Auto-generated by genmsg_cpp from file /home/p/peth8881/robotics/ws_moveit/src/moveit_msgs/msg/BoundingVolume.msg
 *
 */


#ifndef MOVEIT_MSGS_MESSAGE_BOUNDINGVOLUME_H
#define MOVEIT_MSGS_MESSAGE_BOUNDINGVOLUME_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <shape_msgs/SolidPrimitive.h>
#include <geometry_msgs/Pose.h>
#include <shape_msgs/Mesh.h>
#include <geometry_msgs/Pose.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct BoundingVolume_
{
  typedef BoundingVolume_<ContainerAllocator> Type;

  BoundingVolume_()
    : primitives()
    , primitive_poses()
    , meshes()
    , mesh_poses()  {
    }
  BoundingVolume_(const ContainerAllocator& _alloc)
    : primitives(_alloc)
    , primitive_poses(_alloc)
    , meshes(_alloc)
    , mesh_poses(_alloc)  {
    }



   typedef std::vector< ::shape_msgs::SolidPrimitive_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >::other >  _primitives_type;
  _primitives_type primitives;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _primitive_poses_type;
  _primitive_poses_type primitive_poses;

   typedef std::vector< ::shape_msgs::Mesh_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::shape_msgs::Mesh_<ContainerAllocator> >::other >  _meshes_type;
  _meshes_type meshes;

   typedef std::vector< ::geometry_msgs::Pose_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Pose_<ContainerAllocator> >::other >  _mesh_poses_type;
  _mesh_poses_type mesh_poses;




  typedef boost::shared_ptr< ::moveit_msgs::BoundingVolume_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::BoundingVolume_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct BoundingVolume_

typedef ::moveit_msgs::BoundingVolume_<std::allocator<void> > BoundingVolume;

typedef boost::shared_ptr< ::moveit_msgs::BoundingVolume > BoundingVolumePtr;
typedef boost::shared_ptr< ::moveit_msgs::BoundingVolume const> BoundingVolumeConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::BoundingVolume_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::BoundingVolume_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/hydro/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/hydro/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/p/peth8881/robotics/ws_moveit/devel/share/moveit_msgs/msg', '/home/p/peth8881/robotics/ws_moveit/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/hydro/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/hydro/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/hydro/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/hydro/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/hydro/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/hydro/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::BoundingVolume_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::BoundingVolume_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::BoundingVolume_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::BoundingVolume_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::BoundingVolume_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::BoundingVolume_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::BoundingVolume_<ContainerAllocator> >
{
  static const char* value()
  {
    return "22db94010f39e9198032cb4a1aeda26e";
  }

  static const char* value(const ::moveit_msgs::BoundingVolume_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x22db94010f39e919ULL;
  static const uint64_t static_value2 = 0x8032cb4a1aeda26eULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::BoundingVolume_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/BoundingVolume";
  }

  static const char* value(const ::moveit_msgs::BoundingVolume_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::BoundingVolume_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Define a volume in 3D\n\
\n\
# A set of solid geometric primitives that make up the volume to define (as a union)\n\
shape_msgs/SolidPrimitive[] primitives\n\
\n\
# The poses at which the primitives are located\n\
geometry_msgs/Pose[] primitive_poses\n\
\n\
# In addition to primitives, meshes can be specified to add to the bounding volume (again, as union)\n\
shape_msgs/Mesh[] meshes\n\
\n\
# The poses at which the meshes are located\n\
geometry_msgs/Pose[] mesh_poses\n\
\n\
================================================================================\n\
MSG: shape_msgs/SolidPrimitive\n\
# Define box, sphere, cylinder, cone \n\
# All shapes are defined to have their bounding boxes centered around 0,0,0.\n\
\n\
uint8 BOX=1\n\
uint8 SPHERE=2\n\
uint8 CYLINDER=3\n\
uint8 CONE=4\n\
\n\
# The type of the shape\n\
uint8 type\n\
\n\
\n\
# The dimensions of the shape\n\
float64[] dimensions\n\
\n\
# The meaning of the shape dimensions: each constant defines the index in the 'dimensions' array\n\
\n\
# For the BOX type, the X, Y, and Z dimensions are the length of the corresponding\n\
# sides of the box.\n\
uint8 BOX_X=0\n\
uint8 BOX_Y=1\n\
uint8 BOX_Z=2\n\
\n\
\n\
# For the SPHERE type, only one component is used, and it gives the radius of\n\
# the sphere.\n\
uint8 SPHERE_RADIUS=0\n\
\n\
\n\
# For the CYLINDER and CONE types, the center line is oriented along\n\
# the Z axis.  Therefore the CYLINDER_HEIGHT (CONE_HEIGHT) component\n\
# of dimensions gives the height of the cylinder (cone).  The\n\
# CYLINDER_RADIUS (CONE_RADIUS) component of dimensions gives the\n\
# radius of the base of the cylinder (cone).  Cone and cylinder\n\
# primitives are defined to be circular. The tip of the cone is\n\
# pointing up, along +Z axis.\n\
\n\
uint8 CYLINDER_HEIGHT=0\n\
uint8 CYLINDER_RADIUS=1\n\
\n\
uint8 CONE_HEIGHT=0\n\
uint8 CONE_RADIUS=1\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: shape_msgs/Mesh\n\
# Definition of a mesh\n\
\n\
# list of triangles; the index values refer to positions in vertices[]\n\
MeshTriangle[] triangles\n\
\n\
# the actual vertices that make up the mesh\n\
geometry_msgs/Point[] vertices\n\
\n\
================================================================================\n\
MSG: shape_msgs/MeshTriangle\n\
# Definition of a triangle's vertices\n\
uint32[3] vertex_indices\n\
\n\
";
  }

  static const char* value(const ::moveit_msgs::BoundingVolume_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::BoundingVolume_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.primitives);
      stream.next(m.primitive_poses);
      stream.next(m.meshes);
      stream.next(m.mesh_poses);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct BoundingVolume_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::BoundingVolume_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::BoundingVolume_<ContainerAllocator>& v)
  {
    s << indent << "primitives[]" << std::endl;
    for (size_t i = 0; i < v.primitives.size(); ++i)
    {
      s << indent << "  primitives[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >::stream(s, indent + "    ", v.primitives[i]);
    }
    s << indent << "primitive_poses[]" << std::endl;
    for (size_t i = 0; i < v.primitive_poses.size(); ++i)
    {
      s << indent << "  primitive_poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.primitive_poses[i]);
    }
    s << indent << "meshes[]" << std::endl;
    for (size_t i = 0; i < v.meshes.size(); ++i)
    {
      s << indent << "  meshes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::shape_msgs::Mesh_<ContainerAllocator> >::stream(s, indent + "    ", v.meshes[i]);
    }
    s << indent << "mesh_poses[]" << std::endl;
    for (size_t i = 0; i < v.mesh_poses.size(); ++i)
    {
      s << indent << "  mesh_poses[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "    ", v.mesh_poses[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_BOUNDINGVOLUME_H
