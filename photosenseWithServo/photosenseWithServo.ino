#include <Servo.h>
int photosense = A0;
int servopos = 0;
int servoPin = 5;
int degree;
int wait = 1000; 
Servo aservo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(photosense, INPUT);
  aservo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(photosense));
  degree = (analogRead(photosense) - 110) * 9 / 16;
  Serial.println(degree);
  aservo.write(degree);
  delay(wait);
}
