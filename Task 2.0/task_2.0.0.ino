#include <Arduino.h>

const int led = 15;

// LEDC (PWM) configuration
const int pwmChannel = 0;
const int pwmFreq = 5000;   
const int pwmResolution = 10; 

void setup() {
  Serial.begin(115200);

  // Attach pin to LEDC channel
  ledcAttachChannel(led, pwmFreq, pwmResolution, pwmChannel);

  Serial.println("Hello, ESP32!");
}

void loop() {
  for (int i = 0; i < 1024; i++) {
    ledcWrite(pwmChannel, i);
  }
  for (int i = 1023; i > 0; i--) {
    ledcWrite(pwmChannel, i);
  }
  delay(100);
}