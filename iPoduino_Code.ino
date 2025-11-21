#include <HardwareSerial.h>
#include <DFRobotDFPlayerMini.h>

const int TX_PIN = 21;
const int RX_PIN = 20;
const int PAUSE = 4;
const int SKIP = 3;
bool isPlaying = 1;
int song = 1;
int stop;
int next;


HardwareSerial mySerial1(1);

DFRobotDFPlayerMini player;


void setup() {

  pinMode(PAUSE, INPUT_PULLUP);
  pinMode(SKIP, INPUT_PULLUP);
  Serial.begin(115200);
  mySerial1.begin(9600, SERIAL_8N1, RX_PIN, TX_PIN);
  delay(1000);


  player.begin(mySerial1);

  if (!player.begin(mySerial1)){
        Serial.println("Connecting to DFPlayer Mini failed!");
    }

  player.volume(30);
  player.play(1);

}

void loop() {

  next = digitalRead(SKIP);
  if(next == LOW) {
    player.next();
  }

  stop = digitalRead(PAUSE);

  if(stop == LOW) {
    if (isPlaying) {
      player.pause();
      isPlaying = 0;
    } else {
      player.start();
      isPlaying = 1;
    }
  }

}