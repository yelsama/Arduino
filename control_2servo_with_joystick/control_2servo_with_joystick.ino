#include <Servo.h>
int pb = 3;
int x = A0;
int y = A1;
int srv1pin = 6;
int srv2pin = 7;
Servo servo1;
Servo servo2;
int wait = 100;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pb, INPUT);
  pinMode(x, INPUT);
  pinMode(y, INPUT);
  servo1.attach(srv1pin);
  servo2.attach(srv2pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("the x is ");
  Serial.print(analogRead(x) * (180. /1022.));
  Serial.print(" Y is ");
  Serial.println(analogRead(y) * (180. /1022.)); 
  servo1.write(analogRead(x) * (180. /1022.));
  servo2.write(analogRead(y) * (180. /1022.));
  delay(wait);

}
