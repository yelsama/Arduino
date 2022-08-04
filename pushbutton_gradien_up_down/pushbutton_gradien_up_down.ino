int redLed = 8;
int lowering = 6;
int increasing = 7;
int state = 0;
int wait = 40;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lowering, INPUT);
pinMode(increasing, INPUT);
pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (digitalRead(lowering) == 0 || digitalRead(increasing) == 0)
  {
    while (digitalRead(lowering) == 0 && digitalRead(increasing) == 1 && state >= 0)
    {
        analogWrite(redLed, state);
        Serial.println(state);
        if (state > 0)
          state--;
        delay(wait);
    }
    while (digitalRead(lowering) == 1 && digitalRead(increasing) == 0 && state <= 255)
    {
       analogWrite(redLed, state);
       Serial.println(state);
       state++;
       delay(wait);
    }
  }

}
