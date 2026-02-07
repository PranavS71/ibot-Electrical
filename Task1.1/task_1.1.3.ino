int pir=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(pir,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val=digitalRead(pir);
  Serial.println(val);
}
