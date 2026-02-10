#include <LiquidCrystal.h>

// RS, E, D4, D5, D6, D7
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);      // 16x2 LCD

  lcd.setCursor(0, 0);   // top row
  lcd.print("Hello World");

  lcd.setCursor(0, 1);   // bottom row
  lcd.print("Pranav S");
}

void loop() {
  // nothing needed
}

