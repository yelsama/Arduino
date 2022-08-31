int motspeed = 2;
int dir1 = 3;
int dir2 = 4;
int xcont = A8;
int ycont = A9;
int thespeed = 255;
float aspeed;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(motspeed, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(xcont, INPUT);
pinMode(ycont, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("X: ");
  Serial.println(analogRead(xcont));
  Serial.println(analogRead(ycont));
  if (analogRead(xcont)> 519)
  {
    firstdir();
  }
  else if (analogRead(xcont) < 511)
   {
    seconddir();
   }
  else
    analogWrite(motspeed, 0);
}
void firstdir()
{
digitalWrite(dir2, HIGH);
digitalWrite(dir1, LOW);
analogWrite(motspeed, 255);
delay(10);
while (analogRead(xcont) > 520)
{
  aspeed = analogRead(xcont)* (150./500.)- 55.;
  analogWrite(motspeed, aspeed);
  delay(80);
}
}
void seconddir()
{
digitalWrite(dir1, HIGH);
digitalWrite(dir2, LOW);
analogWrite(motspeed, 255);
delay(10);
while (analogRead(xcont) < 510)
{
  aspeed = 255. - (analogRead(xcont)/2);
  analogWrite(motspeed, aspeed);
  delay(80);
} 
}
