/**
 * \par Copyright (C), 2012-2016, MakeBlock
 * @file    DCMotorDriverTest.ino
 * @author  MakeBlock
 * @version V1.0.0
 * @date    2015/09/09
 * @brief   Description: this file is sample code for Me DC motor device.
 *
 * Function List:
 *    1. void MeDCMotor::run(int16_t speed)
 *    2. void MeDCMotor::stop(void)
 *
 * \par History:
 * <pre>
 * <Author>     <Time>        <Version>      <Descr>
 * Mark Yan     2015/09/09    1.0.0          rebuild the old lib
 * Michel Platnic 2018/10/02  1.0.1          Simplification for 2 motors only
 * </pre>
 */

#include "MeMCore.h"

MeDCMotor motor1(M1);
MeDCMotor motor2(M2);

uint8_t motorSpeed = 100;

void setup()
{
}

void loop()
{
  motor1.run(motorSpeed);
  motor2.run(-motorSpeed);
  delay(2000);
  motor1.stop();
  motor2.stop();
  delay(100);
  motor1.run(-motorSpeed);
  motor2.run(motorSpeed);
  delay(2000);
  motor1.stop();
  motor2.stop();
  delay(2000);
}
