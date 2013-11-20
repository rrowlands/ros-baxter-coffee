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
 * Auto-generated by gensrv_cpp from file /home/p/peth8881/robotics/ws_moveit/src/moveit_msgs/srv/GetCartesianPath.srv
 *
 */


#ifndef MOVEIT_MSGS_MESSAGE_GETCARTESIANPATH_H
#define MOVEIT_MSGS_MESSAGE_GETCARTESIANPATH_H

#include <ros/service_traits.h>


#include <moveit_msgs/GetCartesianPathRequest.h>
#include <moveit_msgs/GetCartesianPathResponse.h>


namespace moveit_msgs
{

struct GetCartesianPath
{

typedef GetCartesianPathRequest Request;
typedef GetCartesianPathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetCartesianPath
} // namespace moveit_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::moveit_msgs::GetCartesianPath > {
  static const char* value()
  {
    return "5c9a54219f0d91a804e7670bc0e118f1";
  }

  static const char* value(const ::moveit_msgs::GetCartesianPath&) { return value(); }
};

template<>
struct DataType< ::moveit_msgs::GetCartesianPath > {
  static const char* value()
  {
    return "moveit_msgs/GetCartesianPath";
  }

  static const char* value(const ::moveit_msgs::GetCartesianPath&) { return value(); }
};


// service_traits::MD5Sum< ::moveit_msgs::GetCartesianPathRequest> should match 
// service_traits::MD5Sum< ::moveit_msgs::GetCartesianPath > 
template<>
struct MD5Sum< ::moveit_msgs::GetCartesianPathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::moveit_msgs::GetCartesianPath >::value();
  }
  static const char* value(const ::moveit_msgs::GetCartesianPathRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::moveit_msgs::GetCartesianPathRequest> should match 
// service_traits::DataType< ::moveit_msgs::GetCartesianPath > 
template<>
struct DataType< ::moveit_msgs::GetCartesianPathRequest>
{
  static const char* value()
  {
    return DataType< ::moveit_msgs::GetCartesianPath >::value();
  }
  static const char* value(const ::moveit_msgs::GetCartesianPathRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::moveit_msgs::GetCartesianPathResponse> should match 
// service_traits::MD5Sum< ::moveit_msgs::GetCartesianPath > 
template<>
struct MD5Sum< ::moveit_msgs::GetCartesianPathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::moveit_msgs::GetCartesianPath >::value();
  }
  static const char* value(const ::moveit_msgs::GetCartesianPathResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::moveit_msgs::GetCartesianPathResponse> should match 
// service_traits::DataType< ::moveit_msgs::GetCartesianPath > 
template<>
struct DataType< ::moveit_msgs::GetCartesianPathResponse>
{
  static const char* value()
  {
    return DataType< ::moveit_msgs::GetCartesianPath >::value();
  }
  static const char* value(const ::moveit_msgs::GetCartesianPathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_GETCARTESIANPATH_H
