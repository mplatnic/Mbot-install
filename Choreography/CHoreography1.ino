//Student work for Infrared A,B,C and 3,6 buttons
//Example of writting in 8,9

#include <Wire.h>
#include <SoftwareSerial.h>
#include <MeMCore.h>

MeBuzzer buzzer;
MeIR ir;
MeDCMotor motor3(M1);
MeDCMotor motor4(M2);

int motorSpeed = 100;
int motorSpeen = 100;
char outDat;

void setup(){
    Serial.begin(9600);
    Serial.println("Infrared Receiver Start!");
    ir.begin();
}

void loop(){
    if(ir.keyPressed(69)){     //"A" pressed on the remote control
        buzzer.tone(523, 10);
        motorSpeen =  -250;
        moveA(); //Motor runs
        motorSpeen =  150;
        moveA(); //Motor runs  
    }
    if(ir.keyPressed(70)){     //"B" pressed on the remote control
        buzzer.tone(523, 10);
        motorSpeed = 200;
        moveB(); //Motor runs
        motorSpeed = -200;
        moveB(); //Motor runs
        motorSpeed = -100;
        moveB(); //Motor runs
    }
    if(ir.keyPressed(71)){     //"C" pressed on the remote control
        buzzer.tone(523, 10);
        moveC();
    }
    if(ir.keyPressed(94)){     //"3" pressed on the remote control
        buzzer.tone(523, 10);
        move3();
    }
    if(ir.keyPressed(90)){     //"6" pressed on the remote control
        buzzer.tone(220, 10);
        move6();
    }
    if(ir.keyPressed(82)){     //"8" pressed on the remote control
        buzzer.tone(720, 10);
        move8();
    }
    if(ir.keyPressed(74)){     //"9" pressed on the remote control
        buzzer.tone(720, 10);
        move9();
    }
    ir.loop();
}

void moveC(){
  motor3.run(motorSpeed);
  motor4.run(motorSpeed);
  delay(2000);
  motor3.stop();
  motor4.stop();
  motor3.run(motorSpeed);
  motor4.run(-motorSpeed); 
  delay(2000);
  motor3.stop();
  motor4.stop();
}
  
void moveA(){
  motor3.run(motorSpeed);
  motor4.run(-motorSpeed);
  delay(2500);
  motor3.stop();
  motor4.stop();
  delay(10);
}

void moveB(){
  motor3.run(motorSpeen);
  motor4.run(motorSpeen);
  delay(2500);
  motor3.stop();
  motor4.stop();
  delay(10);
}

void move3(){
   motor3.run(motorSpeed);
  motor4.run(-motorSpeed);
  delay(200);
  motor3.stop();
  motor4.stop();
}

void move6(){
 motor3.run(-100);
  motor4.run(100);
  delay(200);
  motor3.stop();
  motor4.stop();
}

   
void move8(){
  motor3.run(-300);
  motor4.run(300);
  delay(200);
  motor3.run(-300);
  motor4.run(-350);
  delay(1000);
  motor3.stop();
  motor4.stop();
  delay(300);
  motor3.run(-300);
  motor4.run(300);
  delay(200);
  motor3.run(300);
  motor4.run(350);
  delay(1000);
  motor3.stop();
  motor4.stop();
  delay(300);

  motor3.run(-400);
  motor4.run(400);
  delay(400);
  motor3.run(-300);
  motor4.run(-350);
  delay(400);
  motor3.stop();
  motor4.stop();
  delay(100);
  motor3.run(300);
  motor4.run(-300);
  delay(400);
  motor3.run(300);
  motor4.run(350);
  delay(400);
  motor3.stop();
  motor4.stop();
  delay(300);
}

void move9(){
  move9run(300, -300, 500, 10);
  move9run(300, 300, 1500, 200);
  move9run(-300, -300, 700, 10);
  move9run(-300, 300, 600, 400);
  move9run(300, -300, 200, 10);
  move9run(200, 200, 1000, 100);
}

void move9run(int mot3, int mot4, int runtime, int wait)
{
  Serial.println("moveB9");
  motor3.run(mot3);
  motor4.run(mot4);
  delay(runtime);
  motor3.stop();
  motor4.stop();
  delay(wait);
  Serial.println("moveE9");
}
