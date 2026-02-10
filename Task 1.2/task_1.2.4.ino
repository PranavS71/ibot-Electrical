#include <Servo.h>
int mpin=9;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(mpin);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int angle=0;angle<=255;angle++)
  {
    myservo.write(angle);
    delay(10);
  }
  for(int angle=255;angle>=0;angle--)
  {
    myservo.write(angle);
    delay(10);
  }
}
