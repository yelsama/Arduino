int pbuzzer = 8;
int control = A3;
int buzztime;
int wait;
int longwait = 3000;
void setup() {
  // put your setup code here, to run once:
pinMode(pbuzzer, OUTPUT);
pinMode(control, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
wait = analogRead(control);
for(int i = 0; i < 500; i++)
{
  digitalWrite(pbuzzer, HIGH);
  delayMicroseconds(wait);
  digitalWrite(pbuzzer, LOW);
  delayMicroseconds(wait);
}
delay(longwait);
}
