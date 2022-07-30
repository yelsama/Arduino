int buzzer = 8;
int buztime = 500;
int dt1 = 1;
int dt2 = 2;
int intervalwait = 7000;
void setup() {
  // put your setup code here, to run once:
pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(buzzer, HIGH);
delay(buztime);
digitalWrite(buzzer, LOW);
delay(intervalwait);
for (int i = 0; i < 100; i++)
{
  digitalWrite(buzzer, HIGH);
  delay(dt1);
  digitalWrite(buzzer, LOW);
  delay(dt2);
}
delay(intervalwait);
}
