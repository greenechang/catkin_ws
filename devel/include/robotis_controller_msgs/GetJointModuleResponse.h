// Generated by gencpp from file robotis_controller_msgs/GetJointModuleResponse.msg
// DO NOT EDIT!


#ifndef ROBOTIS_CONTROLLER_MSGS_MESSAGE_GETJOINTMODULERESPONSE_H
#define ROBOTIS_CONTROLLER_MSGS_MESSAGE_GETJOINTMODULERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotis_controller_msgs
{
template <class ContainerAllocator>
struct GetJointModuleResponse_
{
  typedef GetJointModuleResponse_<ContainerAllocator> Type;

  GetJointModuleResponse_()
    : joint_name()
    , module_name()  {
    }
  GetJointModuleResponse_(const ContainerAllocator& _alloc)
    : joint_name(_alloc)
    , module_name(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_name_type;
  _joint_name_type joint_name;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _module_name_type;
  _module_name_type module_name;





  typedef boost::shared_ptr< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetJointModuleResponse_

typedef ::robotis_controller_msgs::GetJointModuleResponse_<std::allocator<void> > GetJointModuleResponse;

typedef boost::shared_ptr< ::robotis_controller_msgs::GetJointModuleResponse > GetJointModuleResponsePtr;
typedef boost::shared_ptr< ::robotis_controller_msgs::GetJointModuleResponse const> GetJointModuleResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robotis_controller_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'robotis_controller_msgs': ['/home/robotis/catkin_ws/src/ROBOTIS-Framework-msgs/robotis_controller_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1f9dc32600ec95afe667839e777ecbdd";
  }

  static const char* value(const ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1f9dc32600ec95afULL;
  static const uint64_t static_value2 = 0xe667839e777ecbddULL;
};

template<class ContainerAllocator>
struct DataType< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotis_controller_msgs/GetJointModuleResponse";
  }

  static const char* value(const ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string[] joint_name\n\
string[] module_name\n\
";
  }

  static const char* value(const ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_name);
      stream.next(m.module_name);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetJointModuleResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotis_controller_msgs::GetJointModuleResponse_<ContainerAllocator>& v)
  {
    s << indent << "joint_name[]" << std::endl;
    for (size_t i = 0; i < v.joint_name.size(); ++i)
    {
      s << indent << "  joint_name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_name[i]);
    }
    s << indent << "module_name[]" << std::endl;
    for (size_t i = 0; i < v.module_name.size(); ++i)
    {
      s << indent << "  module_name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.module_name[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTIS_CONTROLLER_MSGS_MESSAGE_GETJOINTMODULERESPONSE_H