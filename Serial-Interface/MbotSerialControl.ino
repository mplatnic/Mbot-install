#include "MeMCore.h"

MeDCMotor motor3(M1);
MeDCMotor motor4(M2);

uint8_t motorSpeed = 100;
char outDat;

void setup() {
  Serial.begin(9600);
  Serial.println("Serial Start!");
}

void loop() {
  if(Serial.available() )
  {
    outDat = Serial.read();
    Serial.println(outDat);
    MotorRun(); //Motor runs
  }
  delay(300);//Pause for a while.
}

void MotorRun(){
  motor3.run(motorSpeed);
  motor4.run(motorSpeed);
  delay(2000);
  motor3.stop();
  motor4.stop();
}
