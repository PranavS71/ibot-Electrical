int oup=9;
void setup() {
  // put your setup code here, to run once:
  pinMode(oup,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=255;i++)
  {
    analogWrite(oup,i);
  }
  for(int i=255;i>=0;i--)
  {
    analogWrite(oup,i);
  }
}
