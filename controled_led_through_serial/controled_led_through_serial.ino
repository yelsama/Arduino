int n;
int redLed = 8;
int shortwait = 300;
String msg = "Enter a number to be blinked:";
String msg2 = "The number of blinks aquired: ";
void setup() {
  // put your setup code here, to run once:
pinMode (redLed, OUTPUT);
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println (msg);
  while (Serial.available() == 0)
  {
    
  }
  n = Serial.parseInt();
  Serial.print(msg2);
  Serial.println(n);
  blinks (redLed, n, shortwait);
}

void blinks(int led,int  n,int wait)
{
  for (int i = 0; i < n; i++)
  {
    digitalWrite (led, HIGH);
    delay (wait);
    digitalWrite (led, LOW);
    delay (wait);
  }
}
