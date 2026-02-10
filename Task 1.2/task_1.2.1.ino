int buz=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUtPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  noTone(buz);
  delay(1000);
  tone(buz,500);
  delay(1000);
}