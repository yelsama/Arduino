#include <Stepper.h>
int spr = 2038;
int motspeed = 10;
Stepper mystepmot(spr, 2,4,3,5);
int pb = 7;
int pbstatus = 1;
int state = 1;
int dirs = 2038 ;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(pb, INPUT);
digitalWrite(pb, HIGH);
mystepmot.setSpeed(motspeed);
}
void loop() {
Serial.println(pbstatus);
Serial.println(dirs);
  // for fully stop and delay with push use commented code:
// while (digitalRead(pb) == 0)
// {
//   pbstatus = 0;
//   delay(10);
// }
// if (pbstatus == 0)
//   dirs *= -1;
// mystepmot.step(dirs/60);
// pbstatus = 1;

pbstatus = digitalRead(pb);
if (pbstatus == 0 && state == 1)
  dirs *= -1;
mystepmot.step(dirs/60);
state = pbstatus;
}
