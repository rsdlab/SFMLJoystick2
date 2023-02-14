// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  SFMLJoystick2Test.cpp
 * @brief Joystick Component using SFML Library (test code)
 *
 * @author Sugar Sweet Robotics
 *
 * LGPL
 *
 */
// </rtc-template>

#include "SFMLJoystick2Test.h"

// Module specification
// <rtc-template block="module_spec">
#if RTM_MAJOR_VERSION >= 2
static const char* const sfmljoystick2_spec[] =
#else
static const char* sfmljoystick2_spec[] =
#endif
  {
    "implementation_id", "SFMLJoystick2Test",
    "type_name",         "SFMLJoystick2Test",
    "description",       "Joystick Component using SFML Library",
    "version",           "1.0.0",
    "vendor",            "rsdlab",
    "category",          "HumanInterface",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "15",
    "language",          "C++",
    "lang_type",         "compile",
    // Configuration variables
    "conf.default.debug", "0",
    "conf.default.id", "0",
    "conf.default.axis_max", "100",
    "conf.default.buttonOutputStyle", "event",

    // Widget
    "conf.__widget__.debug", "text",
    "conf.__widget__.id", "text",
    "conf.__widget__.axis_max", "text",
    "conf.__widget__.buttonOutputStyle", "spin",
    // Constraints

    "conf.__type__.debug", "int",
    "conf.__type__.id", "int",
    "conf.__type__.axis_max", "int",
    "conf.__type__.buttonOutputStyle", "string",

    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
SFMLJoystick2Test::SFMLJoystick2Test(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_axisIn("axis", m_axis),
    m_buttonsIn("buttons", m_buttons)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
SFMLJoystick2Test::~SFMLJoystick2Test()
{
}



RTC::ReturnCode_t SFMLJoystick2Test::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("axis", m_axisIn);
  addInPort("buttons", m_buttonsIn);
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // Bind variables and configuration variable
  bindParameter("debug", m_debug, "0");
  bindParameter("id", m_id, "0");
  bindParameter("axis_max", m_axis_max, "100");
  bindParameter("buttonOutputStyle", m_buttonOutputStyle, "event");
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t SFMLJoystick2Test::onFinalize()
{
  return RTC::RTC_OK;
}
*/


//RTC::ReturnCode_t SFMLJoystick2Test::onStartup(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SFMLJoystick2Test::onShutdown(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


RTC::ReturnCode_t SFMLJoystick2Test::onActivated(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t SFMLJoystick2Test::onDeactivated(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t SFMLJoystick2Test::onExecute(RTC::UniqueId /*ec_id*/)
{
  return RTC::RTC_OK;
}


//RTC::ReturnCode_t SFMLJoystick2Test::onAborting(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SFMLJoystick2Test::onError(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SFMLJoystick2Test::onReset(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SFMLJoystick2Test::onStateUpdate(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


//RTC::ReturnCode_t SFMLJoystick2Test::onRateChanged(RTC::UniqueId /*ec_id*/)
//{
//  return RTC::RTC_OK;
//}


bool SFMLJoystick2Test::runTest()
{
    return true;
}


extern "C"
{
 
  void SFMLJoystick2TestInit(RTC::Manager* manager)
  {
    coil::Properties profile(sfmljoystick2_spec);
    manager->registerFactory(profile,
                             RTC::Create<SFMLJoystick2Test>,
                             RTC::Delete<SFMLJoystick2Test>);
  }
  
}
