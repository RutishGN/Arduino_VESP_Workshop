#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd1(0x27, 16, 2);
LiquidCrystal_I2C lcd2(0x26, 16, 2);

void setup() {
  lcd1.init();
  lcd1.backlight();
  lcd1.setCursor(0, 0);
  lcd1.print("LCD 1 Ready");

  lcd2.init();
  lcd2.backlight();
  lcd2.setCursor(0, 0);
  lcd2.print("LCD 2 Ready");
}

void loop() {
  // No action needed
}
