int redLed = 8;
int greenLed = 9;
int blueLed = 10;
int wait = 200;
int blinks = 5;
String color;
String msg = "What Color do you choose?";
String msg1 = "Red Green Blue";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redLed, OUTPUT);
pinMode(greenLed, OUTPUT);
pinMode(blueLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
Serial.println(msg1);
while (Serial.available() == 0)
{
  
}
color = Serial.readString();
ledon(color); 
}

void  ledon(String color)
{
  if (color == "Red" || color == "red")
      myswitch(redLed, blinks);
   else if (color == "Blue" || color == "blue")
      myswitch(blueLed, blinks);
   else if (color == "green" || color == "Green")
      myswitch(greenLed, blinks);
}
void  myswitch(int led, int blinks)
{
  for (int i = 0; i < blinks; i++)
  {
    digitalWrite (led, HIGH);
    delay(wait);
    digitalWrite (led, LOW);
    delay(wait);
  }
}
