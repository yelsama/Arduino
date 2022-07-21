int pin;
int shortd = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode (8, OUTPUT);
  pinMode (9, OUTPUT);
  pinMode (10, OUTPUT);
  pinMode (11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 8; i < 12; i++)
  {
    pin = i;
    digitalWrite (pin, HIGH);
    delay (shortd);
    digitalWrite (pin, LOW);
  }
}
