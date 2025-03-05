const int motorPin = 9; // Motor PWM pin
const int potPin = A0;  // Potentiometer pin

void setup() {
  pinMode(motorPin, OUTPUT);
}

void loop() {
  int speedValue = analogRead(potPin) / 4; // Read and scale value
  analogWrite(motorPin, speedValue);
}
