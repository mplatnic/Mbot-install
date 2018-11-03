#include <SoftwareSerial.h>

#define NOTE_Duration  50

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
    play();//Play the music.
  }
  delay(300);//Pause for a while.
}

void play()
{
  tone(8, outDat,NOTE_Duration);
}
