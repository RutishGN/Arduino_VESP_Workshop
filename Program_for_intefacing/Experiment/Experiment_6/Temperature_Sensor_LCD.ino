
//LM35 Interface 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
const int tempPin = A0; // Temperature sensor pin

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  int reading = analogRead(tempPin);
  float voltage = reading * (5.0 / 1023.0);
  float temperature = voltage * 100.0; // Convert voltage to temperature

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print("C");

  delay(1000);
}
