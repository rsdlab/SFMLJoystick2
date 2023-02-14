// -*- C++ -*-
// <rtc-template block="description">
/*!
 * @file  SFMLJoystick2.h
 * @brief Joystick Component using SFML Library
 *
 * @author Sugar Sweet Robotics
 *
 * LGPL
 *
 */
// </rtc-template>

#ifndef SFMLJOYSTICK2_H
#define SFMLJOYSTICK2_H

#include <rtm/idl/BasicDataTypeSkel.h>
#include <rtm/idl/ExtendedDataTypesSkel.h>
#include <rtm/idl/InterfaceDataTypesSkel.h>

// Service implementation headers
// <rtc-template block="service_impl_h">

// </rtc-template>

// Service Consumer stub headers
// <rtc-template block="consumer_stub_h">
#include "BasicDataTypeStub.h"

// </rtc-template>

#include <rtm/Manager.h>
#include <rtm/DataFlowComponentBase.h>
#include <rtm/CorbaPort.h>
#include <rtm/DataInPort.h>
#include <rtm/DataOutPort.h>


// <rtc-template block="component_description">
/*!
 * @class SFMLJoystick2
 * @brief Joystick Component using SFML Library
 *
 * SFML Joystick Component. Before you build, set SFML_ROOT
 * environment variable to find SFML-2.3.2 directory (so you can
 * find "include" directory with $SFML_ROOT/include). Button
 * alignment can not be configured automatically. Use debug
 * configuration to output the input data from Joystick Hardware
 * on console.
 *
 * Output: Joystick State.
 *
 */
// </rtc-template>
class SFMLJoystick2
  : public RTC::DataFlowComponentBase
{
 public:
  /*!
   * @brief constructor
   * @param manager Maneger Object
   */
  SFMLJoystick2(RTC::Manager* manager);

  /*!
   * @brief destructor
   */
  ~SFMLJoystick2() override;

  // <rtc-template block="public_attribute">
  
  // </rtc-template>

  // <rtc-template block="public_operation">
  
  // </rtc-template>

  // <rtc-template block="activity">
  /***
   *
   * The initialize action (on CREATED->ALIVE transition)
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
   RTC::ReturnCode_t onInitialize() override;

  /***
   *
   * The finalize action (on ALIVE->END transition)
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // RTC::ReturnCode_t onFinalize() override;

  /***
   *
   * The startup action when ExecutionContext startup
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // RTC::ReturnCode_t onStartup(RTC::UniqueId ec_id) override;

  /***
   *
   * The shutdown action when ExecutionContext stop
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // RTC::ReturnCode_t onShutdown(RTC::UniqueId ec_id) override;

  /***
   *
   * The activated action (Active state entry action)
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
   RTC::ReturnCode_t onActivated(RTC::UniqueId ec_id) override;

  /***
   *
   * The deactivated action (Active state exit action)
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
   RTC::ReturnCode_t onDeactivated(RTC::UniqueId ec_id) override;

  /***
   *
   * The execution action that is invoked periodically
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
   RTC::ReturnCode_t onExecute(RTC::UniqueId ec_id) override;

  /***
   *
   * The aborting action when main logic error occurred.
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // RTC::ReturnCode_t onAborting(RTC::UniqueId ec_id) override;

  /***
   *
   * The error action in ERROR state
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // RTC::ReturnCode_t onError(RTC::UniqueId ec_id) override;

  /***
   *
   * The reset action that is invoked resetting
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // RTC::ReturnCode_t onReset(RTC::UniqueId ec_id) override;
  
  /***
   *
   * The state update action that is invoked after onExecute() action
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // RTC::ReturnCode_t onStateUpdate(RTC::UniqueId ec_id) override;

  /***
   *
   * The action that is invoked when execution context's rate is changed
   *
   * @param ec_id target ExecutionContext Id
   *
   * @return RTC::ReturnCode_t
   * 
   * 
   */
  // RTC::ReturnCode_t onRateChanged(RTC::UniqueId ec_id) override;
  // </rtc-template>


 protected:
  // <rtc-template block="protected_attribute">
  
  // </rtc-template>

  // <rtc-template block="protected_operation">
  
  // </rtc-template>

  // Configuration variable declaration
  // <rtc-template block="config_declare">
  /*!
   * If you want to confirm the input value from joystick, set 1.
   * - Name:  debug
   * - DefaultValue: 0
   */
  int m_debug;
  /*!
   * ID of Joystick. If you want to use multiple joysticks, use
   * this value.
   * - Name:  id
   * - DefaultValue: 0
   */
  int m_id;
  /*!
   * Max Value of Axis.
   * - Name:  axis_max
   * - DefaultValue: 100
   */
  int m_axis_max;
  /*!
   * This value defines the output style of buttons OutPort. If
   * this configuration is event, the buttons port sends value
   * only when the button states are changed. If this is
   * continuous, the button port sends buttons state evely
   * onExecute step.
   * - Name:  buttonOutputStyle
   * - DefaultValue: event
   */
  std::string m_buttonOutputStyle;

  // </rtc-template>

  // DataInPort declaration
  // <rtc-template block="inport_declare">
  
  // </rtc-template>


  // DataOutPort declaration
  // <rtc-template block="outport_declare">
  RTC::TimedLongSeq m_axis;
  /*!
   * Axis of Joystick. Sequence is alligned as X, Y, Z, R, U, V,
   * PovX, PovY.
   */
  RTC::OutPort<RTC::TimedLongSeq> m_axisOut;
  RTC::TimedBooleanSeq m_buttons;
  /*!
   * Buttons. The number of button is automatically detected by
   * SFML.
   */
  RTC::OutPort<RTC::TimedBooleanSeq> m_buttonsOut;
  
  // </rtc-template>

  // CORBA Port declaration
  // <rtc-template block="corbaport_declare">
  
  // </rtc-template>

  // Service declaration
  // <rtc-template block="service_declare">
  
  // </rtc-template>

  // Consumer declaration
  // <rtc-template block="consumer_declare">
  
  // </rtc-template>


 private:
  // <rtc-template block="private_attribute">
  
  // </rtc-template>

  // <rtc-template block="private_operation">
  
  // </rtc-template>

 bool m_buttonsBuffer[256];
};


extern "C"
{
  DLL_EXPORT void SFMLJoystick2Init(RTC::Manager* manager);
};

#endif // SFMLJOYSTICK2_H
