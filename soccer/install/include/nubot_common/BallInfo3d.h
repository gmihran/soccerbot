// Generated by gencpp from file nubot_common/BallInfo3d.msg
// DO NOT EDIT!


#ifndef NUBOT_COMMON_MESSAGE_BALLINFO3D_H
#define NUBOT_COMMON_MESSAGE_BALLINFO3D_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <nubot_common/Point3d.h>
#include <nubot_common/Point3d.h>

namespace nubot_common
{
template <class ContainerAllocator>
struct BallInfo3d_
{
  typedef BallInfo3d_<ContainerAllocator> Type;

  BallInfo3d_()
    : header()
    , pos()
    , velocity()
    , pos_known_3d(false)
    , pos_known_2d(false)
    , velocity_known(false)  {
    }
  BallInfo3d_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , pos(_alloc)
    , velocity(_alloc)
    , pos_known_3d(false)
    , pos_known_2d(false)
    , velocity_known(false)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::nubot_common::Point3d_<ContainerAllocator>  _pos_type;
  _pos_type pos;

   typedef  ::nubot_common::Point3d_<ContainerAllocator>  _velocity_type;
  _velocity_type velocity;

   typedef uint8_t _pos_known_3d_type;
  _pos_known_3d_type pos_known_3d;

   typedef uint8_t _pos_known_2d_type;
  _pos_known_2d_type pos_known_2d;

   typedef uint8_t _velocity_known_type;
  _velocity_known_type velocity_known;




  typedef boost::shared_ptr< ::nubot_common::BallInfo3d_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nubot_common::BallInfo3d_<ContainerAllocator> const> ConstPtr;

}; // struct BallInfo3d_

typedef ::nubot_common::BallInfo3d_<std::allocator<void> > BallInfo3d;

typedef boost::shared_ptr< ::nubot_common::BallInfo3d > BallInfo3dPtr;
typedef boost::shared_ptr< ::nubot_common::BallInfo3d const> BallInfo3dConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nubot_common::BallInfo3d_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nubot_common::BallInfo3d_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::nubot_common::BallInfo3d_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nubot_common::BallInfo3d_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nubot_common::BallInfo3d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nubot_common::BallInfo3d_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::BallInfo3d_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::BallInfo3d_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nubot_common::BallInfo3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6634a529c2fba000f06cf99f5ab31312";
  }

  static const char* value(const ::nubot_common::BallInfo3d_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6634a529c2fba000ULL;
  static const uint64_t static_value2 = 0xf06cf99f5ab31312ULL;
};

template<class ContainerAllocator>
struct DataType< ::nubot_common::BallInfo3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nubot_common/BallInfo3d";
  }

  static const char* value(const ::nubot_common::BallInfo3d_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nubot_common::BallInfo3d_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
Point3d   pos\n\
Point3d   velocity\n\
bool      pos_known_3d\n\
bool      pos_known_2d\n\
bool      velocity_known\n\
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
MSG: nubot_common/Point3d\n\
float32 x\n\
float32 y\n\
float32 z\n\
";
  }

  static const char* value(const ::nubot_common::BallInfo3d_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nubot_common::BallInfo3d_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.pos);
      stream.next(m.velocity);
      stream.next(m.pos_known_3d);
      stream.next(m.pos_known_2d);
      stream.next(m.velocity_known);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BallInfo3d_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nubot_common::BallInfo3d_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nubot_common::BallInfo3d_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "pos: ";
    s << std::endl;
    Printer< ::nubot_common::Point3d_<ContainerAllocator> >::stream(s, indent + "  ", v.pos);
    s << indent << "velocity: ";
    s << std::endl;
    Printer< ::nubot_common::Point3d_<ContainerAllocator> >::stream(s, indent + "  ", v.velocity);
    s << indent << "pos_known_3d: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pos_known_3d);
    s << indent << "pos_known_2d: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pos_known_2d);
    s << indent << "velocity_known: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.velocity_known);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NUBOT_COMMON_MESSAGE_BALLINFO3D_H
