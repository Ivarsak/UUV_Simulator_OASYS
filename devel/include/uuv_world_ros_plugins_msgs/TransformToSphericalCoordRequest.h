// Generated by gencpp from file uuv_world_ros_plugins_msgs/TransformToSphericalCoordRequest.msg
// DO NOT EDIT!


#ifndef UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_TRANSFORMTOSPHERICALCOORDREQUEST_H
#define UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_TRANSFORMTOSPHERICALCOORDREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>

namespace uuv_world_ros_plugins_msgs
{
template <class ContainerAllocator>
struct TransformToSphericalCoordRequest_
{
  typedef TransformToSphericalCoordRequest_<ContainerAllocator> Type;

  TransformToSphericalCoordRequest_()
    : input()  {
    }
  TransformToSphericalCoordRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TransformToSphericalCoordRequest_

typedef ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<std::allocator<void> > TransformToSphericalCoordRequest;

typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest > TransformToSphericalCoordRequestPtr;
typedef boost::shared_ptr< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest const> TransformToSphericalCoordRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator1> & lhs, const ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator1> & lhs, const ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_world_ros_plugins_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "62dfe86eef80ef12ae4c9c8bf6763cb7";
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x62dfe86eef80ef12ULL;
  static const uint64_t static_value2 = 0xae4c9c8bf6763cb7ULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_world_ros_plugins_msgs/TransformToSphericalCoordRequest";
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Copyright (c) 2016 The UUV Simulator Authors.\n"
"# All rights reserved.\n"
"#\n"
"# Licensed under the Apache License, Version 2.0 (the \"License\");\n"
"# you may not use this file except in compliance with the License.\n"
"# You may obtain a copy of the License at\n"
"#\n"
"#     http://www.apache.org/licenses/LICENSE-2.0\n"
"#\n"
"# Unless required by applicable law or agreed to in writing, software\n"
"# distributed under the License is distributed on an \"AS IS\" BASIS,\n"
"# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.\n"
"# See the License for the specific language governing permissions and\n"
"# limitations under the License.\n"
"\n"
"geometry_msgs/Vector3 input\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TransformToSphericalCoordRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_world_ros_plugins_msgs::TransformToSphericalCoordRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_WORLD_ROS_PLUGINS_MSGS_MESSAGE_TRANSFORMTOSPHERICALCOORDREQUEST_H
