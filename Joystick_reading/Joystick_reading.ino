int x = A0;
int y = A1;
int pb = 9;
int wt = 300;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(x, INPUT);
  pinMode(y, INPUT);
  pinMode(pb, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("X = ");
  Serial.print(analogRead(x));
  Serial.print("  Y = ");
  Serial.print(analogRead(y));
  Serial.print(" P Status ");
  Serial.println(digitalRead(pb));
  delay(wt);
}
