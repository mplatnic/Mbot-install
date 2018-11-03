
#define NOTE_D4  294
#define NOTE_Duration  50

void setup() {
}

void loop() {
  play();//Play the music.
  delay(300);//Pause for a while.
}

void play()
{
  tone(8, NOTE_D4,NOTE_Duration);
}
