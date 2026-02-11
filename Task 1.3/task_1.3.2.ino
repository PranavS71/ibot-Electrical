a#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display(128,64, &Wire, -1);
#define grid_size 8
int x=8;
int y=4;

int up=2;
int down=3;
int right=4;
int left=5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  pinMode(up,INPUT_PULLUP);
  pinMode(down,INPUT_PULLUP);
  pinMode(right,INPUT_PULLUP);
  pinMode(left,INPUT_PULLUP);
  display.clearDisplay();


}

void loop() {
  // put your main code here, to run repeatedly:
  int valUp = digitalRead(up);
  int valDown = digitalRead(down);
  
  // Print to Serial Monitor to test hardware
  // 1 = Not pressed, 0 = Pressed
  Serial.print("Up: "); Serial.print(valUp);
  Serial.print(" | Down: "); Serial.println(valDown);
  if (digitalRead(up) == LOW)    y--;
  if (digitalRead(down) == LOW)  y++;
  if (digitalRead(left) == LOW)  x--;
  if (digitalRead(right) == LOW) x++;

  if (x < 0) x = 15;
  if (x >= 16) x = 0;

  if (y < 0) y = 7;
  if (y >= 8) y = 0;

  display.clearDisplay();
  display.fillRect(x*grid_size,y*grid_size,grid_size,grid_size,SSD1306_WHITE);
  display.display();
  delay(100);
}