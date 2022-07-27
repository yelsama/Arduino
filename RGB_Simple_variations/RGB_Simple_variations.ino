int redLed = 3;
int greenLed = 5;
int blueLed = 6;
int wait = 10;
void setup() {
  // put your setup code here, to run once:
pinMode(redLed, OUTPUT);
pinMode(greenLed, OUTPUT);
pinMode(blueLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int r = 0;
int g = 0;
int b = 0;
for (r; r < 256; r++)
{
  g = r + 1;
  for (g; g < 256; g++)
  {
    b = g + 1;
    for (b; b < 256; b++)
    {
      analogWrite(redLed, r);
      analogWrite(greenLed, g);
      analogWrite(blueLed, b);
      delay(wait);
    }
  }
}
//analogWrite(redLed, 0);
//analogWrite(greenLed, 250);
//analogWrite(blueLed, 250);
}
