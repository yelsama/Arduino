int pushButton = 7;
int outTogele = 8;
int stat;
int mode = 0;
int wait = 100;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pushButton, INPUT);
  pinMode(outTogele, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  stat = digitalRead(pushButton);
  Serial.println(stat);
  while (digitalRead(pushButton) == 0)
  {
    delay(10);
  }
  if (stat == 0 && mode == 0)
  {
    digitalWrite(outTogele, HIGH);
    mode = 1;
  }
   else if (stat == 0 && mode == 1)
  {
    digitalWrite(outTogele, LOW);
    mode = 0;
  }
  delay(wait);
}
