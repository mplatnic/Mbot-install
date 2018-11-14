//This is an example that uses all the keys of the remote control 
// it is based on the default program that comes with the mBot


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
}

void loop(){
    if(ir.keyPressed(22)){     //"0" pressed on the remote control
        buzzer.tone(523, 10);
    }
    
    if(ir.keyPressed(12)){     //"1" pressed on the remote control
        buzzer.tone(220, 10);
    }
    
    if(ir.keyPressed(24)){     //"2" pressed on the remote control
        buzzer.tone(247, 10);
    }
    
    if(ir.keyPressed(94)){     //"3" pressed on the remote control
        buzzer.tone(262, 10);
    }
    
    if(ir.keyPressed(8)){     //"4" pressed on the remote control
        buzzer.tone(294, 10);
    }
    
    if(ir.keyPressed(28)){     //"5" pressed on the remote control
        buzzer.tone(330, 10);
    }
    ir.loop();
}

