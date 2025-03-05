#include <Stepper.h>

#define STEPS 200  // Define motor steps per revolution

Stepper stepper(STEPS, 8, 9, 10, 11); // Define stepper motor control pins

void setup() {
  stepper.setSpeed(10); // Set motor speed (RPM)
}

void loop() {
  stepper.step(100);  // Rotate 100 steps forward
  delay(1000);
  stepper.step(-100); // Rotate 100 steps backward
  delay(1000);
}
