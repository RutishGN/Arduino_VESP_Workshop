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


//CODE 2 
// C++ code
//
#include <Adafruit_LiquidCrystal.h>


Adafruit_LiquidCrystal lcd_1(0);

void setup()
{
  lcd_1.begin(16, 2);

  lcd_1.print("MSBTE");
}

void loop()
{
  lcd_1.setCursor(0, 1);
  lcd_1.setBacklight(1);
  
  
}
