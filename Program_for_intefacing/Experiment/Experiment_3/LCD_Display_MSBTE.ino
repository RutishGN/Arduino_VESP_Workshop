// Experiment 3: Interface 16x2 LCD module with Arduino
// Displays "MSBTE" on the LCD

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0, 0);
    lcd.print("MSBTE");
}

void loop() {}

