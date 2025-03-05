int segmentPins[] = {2, 3, 4, 5, 6, 7, 8};  // Define segment pins

// Digit patterns for 0-9
byte numbers[10] = {
  0b00111111, // 0
  0b00000110, // 1
  0b01011011, // 2
  0b01001111, // 3
  0b01100110, // 4
  0b01101101, // 5
  0b01111101, // 6
  0b00000111, // 7
  0b01111111, // 8
  0b01101111  // 9
};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
}

void loop() {
  for (int num = 0; num < 10; num++) {
    for (int i = 0; i < 7; i++) {
      digitalWrite(segmentPins[i], bitRead(numbers[num], i));
    }
    delay(1000);
  }
}
