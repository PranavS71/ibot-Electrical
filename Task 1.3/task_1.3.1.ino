#include <LiquidCrystal.h>

#include <Adafruit_LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
int ldr=13;
int buz=9;
int laser=8;
// C++ code
//
void setup()
{
  pinMode(ldr,INPUT);
  pinMode(buz,OUTPUT);
  lcd.begin(16, 2);
  Serial.begin(9600);
} 

void loop()
{
  digitalWrite(laser,HIGH);
  int val=analogRead(ldr);
  Serial.println(val);
  if(val>=300)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("No Interference");
    delay(1000);
  }
  else
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Interference detected");
    noTone(buz);
    tone(buz,500);
    delay(1000);

  }
}
