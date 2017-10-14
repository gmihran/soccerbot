// Generated by gencpp from file nubot_common/OminiVisionInfo.msg
// DO NOT EDIT!


#ifndef NUBOT_COMMON_MESSAGE_OMINIVISIONINFO_H
#define NUBOT_COMMON_MESSAGE_OMINIVISIONINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <nubot_common/BallInfo.h>
#include <nubot_common/ObstaclesInfo.h>
#include <nubot_common/RobotInfo.h>

namespace nubot_common
{
template <class ContainerAllocator>
struct OminiVisionInfo_
{
  typedef OminiVisionInfo_<ContainerAllocator> Type;

  OminiVisionInfo_()
    : header()
    , ballinfo()
    , obstacleinfo()
    , robotinfo()  {
    }
  OminiVisionInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ballinfo(_alloc)
    , obstacleinfo(_alloc)
    , robotinfo(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::nubot_common::BallInfo_<ContainerAllocator>  _ballinfo_type;
  _ballinfo_type ballinfo;

   typedef  ::nubot_common::ObstaclesInfo_<ContainerAllocator>  _obstacleinfo_type;
  _obstacleinfo_type obstacleinfo;

   typedef std::vector< ::nubot_common::RobotInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::nubot_common::RobotInfo_<ContainerAllocator> >::other >  _robotinfo_type;
  _robotinfo_type robotinfo;




  typedef boost::shared_ptr< ::nubot_common::OminiVisionInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nubot_common::OminiVisionInfo_<ContainerAllocator> const> ConstPtr;

}; // struct OminiVisionInfo_

typedef ::nubot_common::OminiVisionInfo_<std::allocator<void> > OminiVisionInfo;

typedef boost::shared_ptr< ::nubot_common::OminiVisionInfo > OminiVisionInfoPtr;
typedef boost::shared_ptr< ::nubot_common::OminiVisionInfo const> OminiVisionInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nubot_common::OminiVisionInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nubot_common::OminiVisionInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nubot_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'nubot_common': ['/home/newton/soccerbot/soccer/src/soccer_gazebo/nubot_common/msgs'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nubot_common::OminiVisionInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nubot_common::OminiVisionInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nubot_common::OminiVisionInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nubot_common::OminiVisionInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::OminiVisionInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::OminiVisionInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nubot_common::OminiVisionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "71f66ce5416c122d9955b156151ea395";
  }

  static const char* value(const ::nubot_common::OminiVisionInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x71f66ce5416c122dULL;
  static const uint64_t static_value2 = 0x9955b156151ea395ULL;
};

template<class ContainerAllocator>
struct DataType< ::nubot_common::OminiVisionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nubot_common/OminiVisionInfo";
  }

  static const char* value(const ::nubot_common::OminiVisionInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nubot_common::OminiVisionInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
BallInfo ballinfo\n\
\n\
ObstaclesInfo obstacleinfo\n\
\n\
RobotInfo[]  robotinfo\n\
\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: nubot_common/BallInfo\n\
Header header\n\
int32     ballinfostate\n\
Point2d   pos\n\
PPoint    real_pos\n\
Point2d   velocity\n\
bool      pos_known\n\
bool      velocity_known\n\
\n\
\n\
================================================================================\n\
MSG: nubot_common/Point2d\n\
float32 x\n\
float32 y\n\
\n\
================================================================================\n\
MSG: nubot_common/PPoint\n\
float32 angle\n\
float32 radius\n\
\n\
================================================================================\n\
MSG: nubot_common/ObstaclesInfo\n\
Header header\n\
Point2d[] pos\n\
PPoint[] polar_pos\n\
\n\
\n\
================================================================================\n\
MSG: nubot_common/RobotInfo\n\
Header header\n\
int32    AgentID\n\
int32    targetNum1\n\
int32    targetNum2\n\
int32    targetNum3\n\
int32    targetNum4\n\
int32    staticpassNum\n\
int32    staticcatchNum\n\
Point2d  pos\n\
Angle    heading\n\
float32  vrot\n\
Point2d  vtrans\n\
bool     iskick     \n\
bool     isvalid \n\
bool     isstuck \n\
bool     isdribble\n\
char     current_role\n\
float32  role_time\n\
Point2d  target\n\
 \n\
\n\
================================================================================\n\
MSG: nubot_common/Angle\n\
float32 theta\n\
";
  }

  static const char* value(const ::nubot_common::OminiVisionInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nubot_common::OminiVisionInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ballinfo);
      stream.next(m.obstacleinfo);
      stream.next(m.robotinfo);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct OminiVisionInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nubot_common::OminiVisionInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nubot_common::OminiVisionInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ballinfo: ";
    s << std::endl;
    Printer< ::nubot_common::BallInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.ballinfo);
    s << indent << "obstacleinfo: ";
    s << std::endl;
    Printer< ::nubot_common::ObstaclesInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.obstacleinfo);
    s << indent << "robotinfo[]" << std::endl;
    for (size_t i = 0; i < v.robotinfo.size(); ++i)
    {
      s << indent << "  robotinfo[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::nubot_common::RobotInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.robotinfo[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // NUBOT_COMMON_MESSAGE_OMINIVISIONINFO_H
