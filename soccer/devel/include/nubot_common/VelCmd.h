// Generated by gencpp from file nubot_common/VelCmd.msg
// DO NOT EDIT!


#ifndef NUBOT_COMMON_MESSAGE_VELCMD_H
#define NUBOT_COMMON_MESSAGE_VELCMD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace nubot_common
{
template <class ContainerAllocator>
struct VelCmd_
{
  typedef VelCmd_<ContainerAllocator> Type;

  VelCmd_()
    : Vx(0.0)
    , Vy(0.0)
    , w(0.0)  {
    }
  VelCmd_(const ContainerAllocator& _alloc)
    : Vx(0.0)
    , Vy(0.0)
    , w(0.0)  {
  (void)_alloc;
    }



   typedef float _Vx_type;
  _Vx_type Vx;

   typedef float _Vy_type;
  _Vy_type Vy;

   typedef float _w_type;
  _w_type w;




  typedef boost::shared_ptr< ::nubot_common::VelCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nubot_common::VelCmd_<ContainerAllocator> const> ConstPtr;

}; // struct VelCmd_

typedef ::nubot_common::VelCmd_<std::allocator<void> > VelCmd;

typedef boost::shared_ptr< ::nubot_common::VelCmd > VelCmdPtr;
typedef boost::shared_ptr< ::nubot_common::VelCmd const> VelCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nubot_common::VelCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nubot_common::VelCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nubot_common

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nubot_common': ['/home/vuwij/soccerbot/soccer/src/soccer_field/nubot_common/msgs'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nubot_common::VelCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nubot_common::VelCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nubot_common::VelCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nubot_common::VelCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::VelCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nubot_common::VelCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nubot_common::VelCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "914217797e9c6227112d1ec2a4b462eb";
  }

  static const char* value(const ::nubot_common::VelCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x914217797e9c6227ULL;
  static const uint64_t static_value2 = 0x112d1ec2a4b462ebULL;
};

template<class ContainerAllocator>
struct DataType< ::nubot_common::VelCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nubot_common/VelCmd";
  }

  static const char* value(const ::nubot_common::VelCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nubot_common::VelCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 Vx\n\
float32 Vy\n\
float32 w\n\
";
  }

  static const char* value(const ::nubot_common::VelCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nubot_common::VelCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.Vx);
      stream.next(m.Vy);
      stream.next(m.w);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VelCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nubot_common::VelCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nubot_common::VelCmd_<ContainerAllocator>& v)
  {
    s << indent << "Vx: ";
    Printer<float>::stream(s, indent + "  ", v.Vx);
    s << indent << "Vy: ";
    Printer<float>::stream(s, indent + "  ", v.Vy);
    s << indent << "w: ";
    Printer<float>::stream(s, indent + "  ", v.w);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NUBOT_COMMON_MESSAGE_VELCMD_H
