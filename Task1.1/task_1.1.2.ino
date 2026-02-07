int ldr=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(ldr,OUTPUT);
  Serial.begin(9600);k
}

void loop() {
  // put your main code here, to run repeatedly:
  val=analogRead(ldr);
  Serial.println(val);
}
