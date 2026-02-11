#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

const int audioPin = A0;        

void setup() {
  Serial.begin(9600);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.display();
}

void loop() {
  
  int value = analogRead(audioPin);

  int amplitude = map(value, 0, 1023, 0, 32;
  amplitude = constrain(amplitude, 0, 32);
  Serial.println(amplitude);
  
  int topY = 32 - amplitude;
  int totalHeight = amplitude * 2;


  display.clearDisplay();
  display.fillRect( 58, topY, 12, totalHeight, SSD1306_WHITE);


  display.display();
  delay(50); 
}