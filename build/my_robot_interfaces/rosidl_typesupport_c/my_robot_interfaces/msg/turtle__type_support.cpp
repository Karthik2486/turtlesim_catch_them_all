// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from my_robot_interfaces:msg/Turtle.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "my_robot_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "my_robot_interfaces/msg/detail/turtle__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace my_robot_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _Turtle_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Turtle_type_support_ids_t;

static const _Turtle_type_support_ids_t _Turtle_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _Turtle_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Turtle_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Turtle_type_support_symbol_names_t _Turtle_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, my_robot_interfaces, msg, Turtle)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, my_robot_interfaces, msg, Turtle)),
  }
};

typedef struct _Turtle_type_support_data_t
{
  void * data[2];
} _Turtle_type_support_data_t;

static _Turtle_type_support_data_t _Turtle_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Turtle_message_typesupport_map = {
  2,
  "my_robot_interfaces",
  &_Turtle_message_typesupport_ids.typesupport_identifier[0],
  &_Turtle_message_typesupport_symbol_names.symbol_name[0],
  &_Turtle_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Turtle_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Turtle_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace my_robot_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_my_robot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, my_robot_interfaces, msg, Turtle)() {
  return &::my_robot_interfaces::msg::rosidl_typesupport_c::Turtle_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
