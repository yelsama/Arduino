int redled = 8;
int yellowled = 9;
int shortwait = 300;
int longwait = 1000;
void setup() {
  // put your setup code here, to run once:
pinMode (redled, OUTPUT);
pinMode (yellowled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 3; i++)
  {
    onespan (redled, shortwait);
  }

delay (longwait);

 for (int i = 0; i < 3; i++)
  {
    onespan (yellowled, shortwait);
  }
  
delay (longwait);
}
void onespan(int led, int wait)
{
    digitalWrite (led, HIGH);
    delay(wait);
    digitalWrite (led, LOW);
    delay (wait);
}
