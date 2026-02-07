int ir=A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ir,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(ir);
  Serialprintln(val);
}
