#include <Servo.h>
int servoPin = 5;
int servoPos = 0;
Servo servoOne;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servoOne.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Put in numbers needed servo pos");
  while(Serial.available() == 0)
    { }
   servoPos = Serial.parseInt();
  servoOne.write(servoPos);
}
