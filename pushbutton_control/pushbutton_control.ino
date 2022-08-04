int readPin = 7;
int redLed = 8;
int pushStatus;
int wait = 500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(readPin, INPUT);
pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  pushStatus = digitalRead(readPin);
  Serial.println(pushStatus);
  if(pushStatus == LOW)
  {
    for (int i = 0; i < 5; i++)
    {
      digitalWrite(redLed, HIGH);
      delay(wait);
      digitalWrite(redLed, LOW);
      delay(wait);
    }
  }

}
