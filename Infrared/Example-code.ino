//This is an example that uses 2 keys of the remote control 
// it is based on the default program that comes with the mBot
// this shows the format expected


#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

#include <MeMCore.h>

MeBuzzer buzzer;
MeIR ir;

void setup(){
    Serial.begin(9600);
    Serial.println("Infrared Receiver Start!");
    ir.begin();
    rgb.setNumber(16);
    rgb.clear();
}

void loop(){
    if(ir.keyPressed(22)){     //"0" pressed on the remote control
        buzzer.tone(523, 10);
        rgb.setColor(10, 0, 0);
        move0();
    }
    
    if(ir.keyPressed(12)){     //"1" pressed on the remote control
        buzzer.tone(220, 10);
        move1();
        rgb.setColor(100, 0, 0);
    }
    ir.loop();
}


void move0(){
  //...
  //...
  //...
}

void move0(){
  //...
  //...
  //...
}
