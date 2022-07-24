int mypin = A3;
int redpin = 8;
float  valueread;
float v2;
int wait = 750;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode (mypin, INPUT);
pinMode (redpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
valueread = analogRead (mypin);
v2 = (5. / 1023.) * valueread;
Serial.print ("Voltage is ");
Serial.println (v2);
if (v2 > 3.5)
{
  digitalWrite (redpin, HIGH);
}
if (v2 <= 3.5)
{
  digitalWrite (redpin, LOW);
}
delay (wait);
}
