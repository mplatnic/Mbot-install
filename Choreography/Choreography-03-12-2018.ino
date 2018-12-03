//Student work for Infrared A,B,C and 3,6 buttons
//Example of writting in 8,9 by Michel
//Robotic Class - Ron Vardit School
//Final code students made after 6 classes on MBot
//to be loaded on 9 Mbots and controlled with Infrared remote control

//NOTE: All motors shoud be connected the same way:
//       left weel connected to M2
//   --
//  -------
//  |     |
//  -------
//   --
//       right weel connected to M2

//03-12-2018 Michel Platnic



//libraries
#include <Wire.h>
#include <SoftwareSerial.h>
#include <MeMCore.h>

//definitions
MeBuzzer buzzer;
MeIR ir;
MeDCMotor motor3(M1);
MeDCMotor motor4(M2);

//Variables
int motorSpeed = 150;
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
    if(ir.keyPressed(12)){     //"1" pressed on the remote control
        motor3.run(-motorSpeed);
        motor4.run(motorSpeed);   //this should be transferred to a function
        delay(300);               //motorSpeed can be changed all the time
        motor3.run(motorSpeed);
        delay(450);
        motor3.run(motorSpeed);
        motor4.run(-motorSpeed);
        delay(250);
        motor4.run(motorSpeed);
        delay(200);
        motor3.run(-motorSpeed);
        delay(275);
        motor3.stop();
        motor4.stop();
        delay(600);
        motorSpeed=200;
        motor3.run(-motorSpeed);
        motor4.run(motorSpeed);
        delay(250);
        motor3.run(motorSpeed);
        delay(350);
        motor4.run(motorSpeed);
        motor3.run(-motorSpeed);
        delay(225);
        motor4.run(motorSpeed);
        delay(175);
        motor3.run(-motorSpeed);
        delay(225);
        motorSpeed=150;
        motor3.stop();
        motor4.stop();
    }
    if(ir.keyPressed(24)){     //"2" pressed on the remote control
        motor3.run(motorSpeed);
        motor4.run(-motorSpeed);
        delay(1500);
        motor4.stop();
        motor3.stop();
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
     if(ir.keyPressed(22)){     //"0" pressed on the remote control
        buzzer.tone(523, 10);
        move0() ; 
     }
     if(ir.keyPressed(12)){     //"1" pressed on the remote control
        motor3.run(-motorSpeed);
        motor4.run(motorSpeed);  //this should be transferred to a function
        delay(300);               //motorSpeed can be changed all the time
        motor3.run(motorSpeed);
        delay(450);
        motor3.run(motorSpeed);
        motor4.run(-motorSpeed);
        delay(250);
        motor4.run(motorSpeed);
        delay(200);
        motor3.run(-motorSpeed);
        delay(275);
        motor3.stop();
        motor4.stop();
        delay(600);
        motorSpeed=200;
        motor3.run(-motorSpeed);
        motor4.run(motorSpeed);
        delay(250);
        motor3.run(motorSpeed);
        delay(350);
        motor4.run(motorSpeed);
        motor3.run(-motorSpeed);
        delay(225);
        motor4.run(motorSpeed);
        delay(175);
        motor3.run(-motorSpeed);
        delay(225);
        motorSpeed=150;
        motor3.stop();
        motor4.stop();
     }
     if(ir.keyPressed(24)){     //"2" pressed on the remote control
        motor3.run(motorSpeed);
        motor4.run(-motorSpeed);
        delay(1500);
        motor4.stop();
        motor3.stop();
     }
     if(ir.keyPressed(7)){          //"<"  pressed on the remote control
        motor3.run(-motorSpeed);
        motor4.run(-motorSpeed);   //this should be transferred to a function
        delay(3000);               //motorSpeed can be changed all the time
        motor3.run(+motorSpeed);
        motor4.run(-motorSpeed);
        delay(2000);
        motor3.stop();
        motor4.stop();
        delay(500);
        motor3.run(+motorSpeed);
        motor4.run(+motorSpeed);
        delay(500);
        motor3.run(-motorSpeed);
        motor4.run(-motorSpeed);
        delay(500);
        motor3.run(+motorSpeed);
        motor4.run(+motorSpeed);
        delay(500);
         motor3.run(-motorSpeed);
        motor4.run(-motorSpeed);
        delay(500);
        motor3.run(+motorSpeed);
        motor4.run(+motorSpeed);
        delay(500);
         motor3.run(-motorSpeed);
        motor4.run(-motorSpeed);
        delay(500);
        motor3.run(+motorSpeed);
        motor4.run(+motorSpeed);
        delay(500);
         motor3.run(-motorSpeed);
        motor4.run(-motorSpeed);
        delay(500);
        motor3.run(+motorSpeed);
        motor4.run(+motorSpeed);
        delay(500);
         motor3.run(-motorSpeed);
        motor4.run(-motorSpeed);
        delay(500);
        motor3.run(+motorSpeed);
        motor4.run(+motorSpeed);
        delay(500);
        buzzer.tone(7);
    }
    if(ir.keyPressed(21)){    //"*"
        motor3.run(-motorSpeed);   //this should be transferred to a function
        delay(300);               //motorSpeed can be changed all the time
        motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
        motor4.stop();
        delay(300);
        motor3.run(-motorSpeed);
        delay(300);
        motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
        motor4.stop();
        delay(300);
        motor3.run(-motorSpeed);
        delay(300);
        motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
        motor4.stop();
        delay(300);
        motor3.run(-motorSpeed);
        delay(300);
        motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
        motor4.stop();
        delay(300);
        motor3.run(-motorSpeed);
        delay(300);
        motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
           motor4.stop();
        delay(300);
       motor3.run(-motorSpeed);
        delay(300);
           motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
           motor4.stop();
        delay(300);
         motor3.run(-motorSpeed);
        delay(300);
           motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
           motor4.stop();
        delay(300);
       motor3.run(-motorSpeed);
        delay(300);
           motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
           motor4.stop();
        delay(300);
         motor3.run(-motorSpeed);
        delay(300);
           motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
           motor4.stop();
        delay(300);
       motor3.run(-motorSpeed);
        delay(300);
           motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
           motor4.stop();
        delay(300);
         motor3.run(-motorSpeed);
        delay(300);
           motor3.stop();
        delay(3000);
        motor4.run(+motorSpeed);
        delay(300);
           motor4.stop();
        delay(300);
       motor3.run(-motorSpeed);
        delay(300);
           motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
           motor4.stop();
        delay(300);
         motor3.run(-motorSpeed);
        delay(300);
           motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
           motor3.stop();
        delay(300);
       motor3.run(-motorSpeed);
        delay(300);
           motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
          motor4.stop();
       delay(300);
        motor3.run(-motorSpeed);
        delay(300);
       motor3.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
        motor4.stop();
        delay(300);
       motor3.run(-motorSpeed);
        delay(300);
        motor4.stop();
        delay(300);
        motor4.run(+motorSpeed);
        delay(300);
        motor4.stop();
        delay(300);
    }
    ir.loop();
}

void move0() {
moverun(-300,300,2000,500);
moverun(-300,0,1000,500);
moverun(-140,300,3000,500);
moverun(200,-200,800,20);
moverun(-200,200,800,20);
buzzer.tone(1500,1000);
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
  motor3.run(-300);     //example of function, not efficient
  motor4.run(300);      //look at example 9
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
  moverun(300, -300, 500, 10);
  moverun(300, 300, 1500, 200);
  moverun(-300, -300, 700, 10);
  moverun(-300, 300, 600, 400);
  moverun(300, -300, 200, 10);
  moverun(200, 200, 1000, 100);
}

void moverun(int mot3, int mot4, int runtime, int wait)
{
  //Serial.println("moveB9");
  motor3.run(mot3);
  motor4.run(mot4);
  delay(runtime);
  motor3.stop();
  motor4.stop();
  delay(wait);
  //Serial.println("moveE9");
}
