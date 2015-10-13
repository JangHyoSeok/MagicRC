#include <SoftwareSerial.h>
#include <MagicRC.h>

MagicRC omRobot(8, 9, 3, 4, 5, 6); // Bluetooth TX, RX

void setup() {
  omRobot.begin(9600); // Bluetooth baudrate
}

void loop() {
  omRobot.run();
}
