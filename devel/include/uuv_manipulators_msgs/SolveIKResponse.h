// Generated by gencpp from file uuv_manipulators_msgs/SolveIKResponse.msg
// DO NOT EDIT!


#ifndef UUV_MANIPULATORS_MSGS_MESSAGE_SOLVEIKRESPONSE_H
#define UUV_MANIPULATORS_MSGS_MESSAGE_SOLVEIKRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <sensor_msgs/JointState.h>

namespace uuv_manipulators_msgs
{
template <class ContainerAllocator>
struct SolveIKResponse_
{
  typedef SolveIKResponse_<ContainerAllocator> Type;

  SolveIKResponse_()
    : joints()
    , isValid(false)  {
    }
  SolveIKResponse_(const ContainerAllocator& _alloc)
    : joints(_alloc)
    , isValid(false)  {
  (void)_alloc;
    }



   typedef  ::sensor_msgs::JointState_<ContainerAllocator>  _joints_type;
  _joints_type joints;

   typedef uint8_t _isValid_type;
  _isValid_type isValid;





  typedef boost::shared_ptr< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SolveIKResponse_

typedef ::uuv_manipulators_msgs::SolveIKResponse_<std::allocator<void> > SolveIKResponse;

typedef boost::shared_ptr< ::uuv_manipulators_msgs::SolveIKResponse > SolveIKResponsePtr;
typedef boost::shared_ptr< ::uuv_manipulators_msgs::SolveIKResponse const> SolveIKResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator1> & lhs, const ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator2> & rhs)
{
  return lhs.joints == rhs.joints &&
    lhs.isValid == rhs.isValid;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator1> & lhs, const ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace uuv_manipulators_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a57abfd77e0408ae11a6fe4dd5adf1fc";
  }

  static const char* value(const ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa57abfd77e0408aeULL;
  static const uint64_t static_value2 = 0x11a6fe4dd5adf1fcULL;
};

template<class ContainerAllocator>
struct DataType< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uuv_manipulators_msgs/SolveIKResponse";
  }

  static const char* value(const ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/JointState joints\n"
"bool isValid\n"
"\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/JointState\n"
"# This is a message that holds data to describe the state of a set of torque controlled joints. \n"
"#\n"
"# The state of each joint (revolute or prismatic) is defined by:\n"
"#  * the position of the joint (rad or m),\n"
"#  * the velocity of the joint (rad/s or m/s) and \n"
"#  * the effort that is applied in the joint (Nm or N).\n"
"#\n"
"# Each joint is uniquely identified by its name\n"
"# The header specifies the time at which the joint states were recorded. All the joint states\n"
"# in one message have to be recorded at the same time.\n"
"#\n"
"# This message consists of a multiple arrays, one for each part of the joint state. \n"
"# The goal is to make each of the fields optional. When e.g. your joints have no\n"
"# effort associated with them, you can leave the effort array empty. \n"
"#\n"
"# All arrays in this message should have the same size, or be empty.\n"
"# This is the only way to uniquely associate the joint name with the correct\n"
"# states.\n"
"\n"
"\n"
"Header header\n"
"\n"
"string[] name\n"
"float64[] position\n"
"float64[] velocity\n"
"float64[] effort\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joints);
      stream.next(m.isValid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SolveIKResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::uuv_manipulators_msgs::SolveIKResponse_<ContainerAllocator>& v)
  {
    s << indent << "joints: ";
    s << std::endl;
    Printer< ::sensor_msgs::JointState_<ContainerAllocator> >::stream(s, indent + "  ", v.joints);
    s << indent << "isValid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isValid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UUV_MANIPULATORS_MSGS_MESSAGE_SOLVEIKRESPONSE_H
