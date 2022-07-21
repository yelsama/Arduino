int led = 13;
int Longd = 1000;
int Shortd = 200;
int Intervald = 2000;
void setup() {
  // put your setup code here, to run once:
  pinMode (led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 3; i++)
    shortdot();
  
  delay (Shortd);

  for (int i = 0; i < 3; i++)
    longdot();

  for (int i = 0; i < 3; i++)
    shortdot();
  
  delay (Intervald);
}

void shortdot()
{
  digitalWrite(led, HIGH);
  delay (Shortd);
  digitalWrite (led, LOW);
  delay (Shortd);
}

void longdot()
{
  digitalWrite (led, HIGH);
  delay (Longd);
  digitalWrite (led, LOW);
  delay (Longd);
}
