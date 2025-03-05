// Experiment 1: Interface RGB LED with Arduino board
// This program alternates the RGB LED colors with a delay

const int redPin = 9;   // Red LED connected to pin 9
const int greenPin = 10; // Green LED connected to pin 10
const int bluePin = 11;  // Blue LED connected to pin 11

void setup() {
    pinMode(redPin, OUTPUT);
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
}

void loop() {
    digitalWrite(redPin, HIGH);   // Turn on Red
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    delay(1000);
    
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH); // Turn on Green
    delay(1000);
    
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);  // Turn on Blue
    delay(1000);
}