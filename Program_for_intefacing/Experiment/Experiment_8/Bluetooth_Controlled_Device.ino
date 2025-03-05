#include <SoftwareSerial.h>

SoftwareSerial BTSerial(10, 11); // RX, TX for HC-05

const int relayPin = 7;

void setup() {
  pinMode(relayPin, OUTPUT);
  BTSerial.begin(9600);
}

void loop() {
  if (BTSerial.available()) {
    char command = BTSerial.read(); // Read Bluetooth input

    if (command == '1') {
      digitalWrite(relayPin, HIGH); // Turn ON device
    } else if (command == '0') {
      digitalWrite(relayPin, LOW);  // Turn OFF device
    }
  }
}
