#include <Servo.h> 

Servo SR;
Servo SL;
  
int PR = 1;
int PL = 0;
int val;

void setup()
{
  SR.attach(9);
  SL.attach(10);
}

void loop()
{
  val = analogRead(PR);
  val = map(val, 0, 1023, 0, 180);
  SR.write(val);
  val = analogRead(PL);
  val = map(val, 0, 1023, 0, 180);
  SL.write(val);
  delay(10);
}
