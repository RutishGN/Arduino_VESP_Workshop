#define trigPin 9
#define echoPin 10
#define motorPin1 5
#define motorPin2 6

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duration = pulseIn(echoPin, HIGH);
  int distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 20) {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
  } else {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
  }

  delay(500);
}
