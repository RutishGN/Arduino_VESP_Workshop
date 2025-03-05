// Experiment 2: Interface 4 switches and 4 LEDs with Arduino
// The LEDs turn on based on the switch positions

const int switches[] = {2, 3, 4, 5};  // Switches connected to these pins
const int leds[] = {6, 7, 8, 9};      // LEDs connected to these pins

void setup() {
    for (int i = 0; i < 4; i++) {
        pinMode(switches[i], INPUT_PULLUP); // Configure switches as inputs
        pinMode(leds[i], OUTPUT);          // Configure LEDs as outputs
    }
}

void loop() {
    for (int i = 0; i < 4; i++) {
        int switchState = digitalRead(switches[i]);
        digitalWrite(leds[i], !switchState); // Turn LED ON when switch is pressed
    }
}