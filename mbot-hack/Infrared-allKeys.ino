//This is an example that uses all the keys of the remote control 
// it is based on the default program that comes with the mBot


#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>

#include <MeMCore.h>

void Mode_Setting();
double State;
MeIR ir;
MeRGBLed rgbled_7(7, 7==7?2:4);
void Set_Speed();
MeBuzzer buzzer;
void mode_A();
void Initialise();


void Mode_Setting()
{
    if(ir.keyPressed(69)){
        State = 1;
    }
    
    if(ir.keyPressed(70)){
        State = 2;
    }
    
    if(ir.keyPressed(71)){
        State = 3;
    }
    
    if(ir.keyPressed(68)){
        State = 4;
    }
    
    if(ir.keyPressed(67)){
        State = 5;
    }
    
    if(ir.keyPressed(13)){
        State = 6;
    }
    
    if(ir.keyPressed(21)){
        State = 0;
        rgbled_7.setColor(0,0,0,0);
        rgbled_7.show();
    }
    Serial.println(State);
    delay(50);
}

void Set_Speed()
{
    if(ir.keyPressed(22)){
        buzzer.tone(523, 10);
    }
    
    if(ir.keyPressed(12)){
        buzzer.tone(220, 10);
    }
    
    if(ir.keyPressed(24)){
        buzzer.tone(247, 10);
    }
    
    if(ir.keyPressed(94)){
        buzzer.tone(262, 10);
    }
    
    if(ir.keyPressed(8)){
        buzzer.tone(294, 10);
    }
    
    if(ir.keyPressed(28)){
        buzzer.tone(330, 10);
    }
    
}

void mode_A()
{
    rgbled_7.setColor(0,60,0,0);
    rgbled_7.show();
    
    if((ir.keyPressed(64)) || ((ir.keyPressed(25)) || ((ir.keyPressed(7)) || (ir.keyPressed(9))))){
        if(ir.keyPressed(64)){
            rgbled_7.setColor(0,0,0,150);
            rgbled_7.show();
        }
        if(ir.keyPressed(7)){
            rgbled_7.setColor(2,60,0,0);
            rgbled_7.show();
        }
        if(ir.keyPressed(9)){
            rgbled_7.setColor(1,0,60,0);
            rgbled_7.show();
        }
        if(ir.keyPressed(25)){
            rgbled_7.setColor(0,60,60,0);
            rgbled_7.show();
        }
    }    
}

void Initialise()
{
    State = 0;
    
    rgbled_7.setColor(0,20,0,0);
    rgbled_7.show();
    
    delay(20);
    
    rgbled_7.setColor(0,0,20,0);
    rgbled_7.show();
    
    delay(20);
    
    rgbled_7.setColor(0,0,0,20);
    rgbled_7.show();
    
    delay(20);
    
    rgbled_7.setColor(0,0,0,0);
    rgbled_7.show();
    
}


void setup(){
    Serial.begin(9600);
    Serial.println("Infrared Receiver Start!");
    
    ir.begin();
    Initialise();
    buzzer.tone(523, 250);
    delay(20);
    buzzer.tone(1047, 250);
    delay(20);
    buzzer.tone(587, 500);
    delay(20);
    
}

void loop(){
    
    Set_Speed();
    Mode_Setting();
    if(((State)==(1))){
        mode_A();
    }
    if(((State)==(2))){
        mode_A();
    }
    if(((State)==(3))){
        mode_A();
    }
    if(((State)==(4))){
        mode_A();
    }
    if(((State)==(5))){
        mode_A();
    }
    ir.loop();
    
    
}

