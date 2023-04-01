// Generated by gencpp from file xarm_msgs/MoveVelocityRequest.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_MOVEVELOCITYREQUEST_H
#define XARM_MSGS_MESSAGE_MOVEVELOCITYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace xarm_msgs
{
template <class ContainerAllocator>
struct MoveVelocityRequest_
{
  typedef MoveVelocityRequest_<ContainerAllocator> Type;

  MoveVelocityRequest_()
    : speeds()
    , is_sync(false)
    , is_tool_coord(false)
    , duration(0.0)  {
    }
  MoveVelocityRequest_(const ContainerAllocator& _alloc)
    : speeds(_alloc)
    , is_sync(false)
    , is_tool_coord(false)
    , duration(0.0)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _speeds_type;
  _speeds_type speeds;

   typedef uint8_t _is_sync_type;
  _is_sync_type is_sync;

   typedef uint8_t _is_tool_coord_type;
  _is_tool_coord_type is_tool_coord;

   typedef float _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> const> ConstPtr;

}; // struct MoveVelocityRequest_

typedef ::xarm_msgs::MoveVelocityRequest_<std::allocator<void> > MoveVelocityRequest;

typedef boost::shared_ptr< ::xarm_msgs::MoveVelocityRequest > MoveVelocityRequestPtr;
typedef boost::shared_ptr< ::xarm_msgs::MoveVelocityRequest const> MoveVelocityRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator1> & lhs, const ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator2> & rhs)
{
  return lhs.speeds == rhs.speeds &&
    lhs.is_sync == rhs.is_sync &&
    lhs.is_tool_coord == rhs.is_tool_coord &&
    lhs.duration == rhs.duration;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator1> & lhs, const ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace xarm_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3ff5ed26eb25726c663dac7efa05cc61";
  }

  static const char* value(const ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3ff5ed26eb25726cULL;
  static const uint64_t static_value2 = 0x663dac7efa05cc61ULL;
};

template<class ContainerAllocator>
struct DataType< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "xarm_msgs/MoveVelocityRequest";
  }

  static const char* value(const ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# request: command specification for velocity executions.\n"
"# Units:\n"
"#	joint space/angles: radian/s\n"
"#	Cartesian space: mm/s, radian/s.\n"
"\n"
"# velocities: the velocity list of the joints/tcp\n"
"#   For velo_move_joint_timed service: [joint1_velocity, ..., joint7_velocity]\n"
"#   For velo_move_line_timed service: [x_velocity, y_velocity, z_velocity, rx_velocity, ry_velocity, rz_velocity (axis-angle)]\n"
"float32[] speeds\n"
"\n"
"# is_sync: this is special for velo_move_joint service, meaning whether all joints accelerate and decelerate synchronously, true for yes, false for no.\n"
"# avaiable for service velo_move_joint_timed\n"
"bool is_sync\n"
"\n"
"# is_tool_coord: this is special for velo_move_line service, meaning whether motion is in tool coordinate(true) or not(false)\n"
"# avaiable for service velo_move_line_timed\n"
"bool is_tool_coord\n"
"\n"
"# the maximum duration of the speed, over this time will automatically set the speed to 0\n"
"#   duration > 0: seconds, indicates the maximum number of seconds that this speed can be maintained\n"
"#   duration == 0: always effective, will not stop automativally\n"
"#   duration < 0: default value, only used to be compatible with the old protocol, equivalent to 0\n"
"# avaiable for firmware_version >= 1.8.0\n"
"float32 duration\n"
"\n"
;
  }

  static const char* value(const ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.speeds);
      stream.next(m.is_sync);
      stream.next(m.is_tool_coord);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MoveVelocityRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::xarm_msgs::MoveVelocityRequest_<ContainerAllocator>& v)
  {
    s << indent << "speeds[]" << std::endl;
    for (size_t i = 0; i < v.speeds.size(); ++i)
    {
      s << indent << "  speeds[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.speeds[i]);
    }
    s << indent << "is_sync: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_sync);
    s << indent << "is_tool_coord: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_tool_coord);
    s << indent << "duration: ";
    Printer<float>::stream(s, indent + "  ", v.duration);
  }
};

} // namespace message_operations
} // namespace ros

#endif // XARM_MSGS_MESSAGE_MOVEVELOCITYREQUEST_H
