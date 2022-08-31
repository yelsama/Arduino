int speedpin = 2;
int dir1 = 3;
int dir2 = 4;
int motSpeed = 120;
void setup() {
  // put your setup code here, to run once:
 pinMode(speedpin, OUTPUT);
 pinMode(dir1, OUTPUT);
 pinMode(dir2, OUTPUT);
 digitalWrite(dir2, HIGH);
 digitalWrite(dir1, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(speedpin, 255);
  delay(30);
  analogWrite(speedpin, motSpeed);
  delay(5000);
}
