int readPin = A3;
int LightSense;
int redLed = 8;
int greenLed = 9;
int dtime = 1000; 
void setup() {
  // put your setup code here, to run once:
pinMode (readPin, INPUT);
pinMode (redLed, OUTPUT);
pinMode (greenLed, OUTPUT);
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
LightSense = analogRead (readPin);
Serial.println(LightSense);
if (LightSense <400 )
{
  digitalWrite(redLed, LOW);
  digitalWrite(greenLed, HIGH);
}
if (LightSense > 500)
{
    digitalWrite(greenLed, LOW);
  digitalWrite(redLed, HIGH);
}

delay(dtime);
}
