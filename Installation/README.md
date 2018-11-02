Mbot-install
How to install Mbot robot for Windows

There are at least 2 ways to connect the Mbot from a PC, from Mblock or from Arduino IDE.

When using Arduino IDE only, sometimes the Mbot port is not recognized by the PC, it is then advised to first install Mblock 3 which solves the problem.

-----------------------------

Mblock installation: (based on Scratch) Installation example using Mblock can be found at: https://www.youtube.com/watch?v=u5p5COCcmLQ Link for Mblock installation: http://www.mblock.cc/mblock-5-software/ and then choose Mblock 3 for PC, windows 7 and above

-----------------------------

Arduino installation: (Arduino IDE) Link for sofware download: https://www.arduino.cc/en/Main/Software 
Choose the 1.8.7 version, the Windows installer

- Then download the Mbot library from: https://github.com/Makeblock-official/Makeblock-Libraries 
Choose to download the Zip version of the file for the green button on the right side. Put the Makeblock-Libraries-master.zip on the desktop
- Then open the Arduino IDE, from "Sketch" - "Include Library" - "Add .zip Library" select the Makeblock-Libraries-master.zip from the desktop
- Then connect the Arduino using the USB cable, switch on the board 
- check that from the menu: "Tools" - "Board" is "Arduino-uno" and that port is selected.


Test:
- Connect the 2 motors to M1 and M2 output on the Board
- From the menu "File" - "Examples" - "MakeBlockDrive" - "Me_DCMotor" choose the "DCMotorDriverTest" download a code and test it
