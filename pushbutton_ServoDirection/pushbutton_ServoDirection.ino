#include <Stepper.h>
int spr = 2038;
int motspeed = 10;
Stepper mystepmot(spr, 2,4,3,5);
int pb = 7;
int pbstatus = 1;
int dirs = 2038 ;
int wait = 500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pb, INPUT);
digitalWrite(pb, HIGH);
mystepmot.setSpeed(motspeed);
}
void loop() {
  // put your main code here, to run repeatedly:
while (digitalRead(pb) == 0)
{
  pbstatus = 0;
  delay(10);
}
Serial.println(pbstatus);
Serial.println(dirs);
if (pbstatus == 0)
{
  dirs *= -1;
}
mystepmot.step(dirs/60);
pbstatus = 1;
}
