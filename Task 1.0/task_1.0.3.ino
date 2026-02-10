int ledpin = 10;
int buttonpin = 13;
int prevval = 1;
int val = 0;
int status = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
  pinMode(buttonpin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(buttonpin);
  if (val == 0 && prevval == 1)
  {
    status = 1 - status;
    prevval = val;
  }
  else
  {
    prevval = val;
  }
  Serial.println(val);

  if (status == 1)
  {
    digitalWrite(ledpin, HIGH);
  }
  else
  {
    digitalWrite(ledpin, LOW);
  }

}
