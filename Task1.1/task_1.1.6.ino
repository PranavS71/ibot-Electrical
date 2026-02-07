int fl=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(fl,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val=digitalRead(fl);
  Serial.println(val);
}
