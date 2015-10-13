#include <SoftwareSerial.h>
#include <MagicRC.h>

MagicRC omRobot(8, 9, 3, 4, 5, 6); // Bluetooth TX, RX

void setup() {
  omRobot.begin(9600); // Bluetooth baudrate
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    switch (c) {
      case 'a':
        omRobot.forward();
        break;
      case 'b':
        omRobot.backward();
        break;
      case 'c':
        omRobot.turnLeft();
        break;
      case 'd':
        omRobot.turnRight();
        break;
      case 'e':
        omRobot.stop();
        break;
      case 'f':
        int speed = Serial.parseInt();
        omRobot.setSpeed(speed);
        break;
    }
  }
}
