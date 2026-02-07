int pin = 2;
int ledpin = 13;

void setup() {
  pinMode(pin, INPUT);
  pinMode(ledpin, OUTPUT);
}

void loop() {
  int sound = digitalRead(soundPin);
  Serial.println(sound);
  if (soundState == HIGH) {
    digitalWrite(ledpin, HIGH);
    delay(2000);              
    digitalWrite(ledpin, LOW);
  
    delay(300);               
  }
}
