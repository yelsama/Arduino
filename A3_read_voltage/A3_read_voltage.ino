int readPin = A3;
int readval;
float V2 = 0;
int dtime = 500; 
void setup() {
  // put your setup code here, to run once:
pinMode (readPin, INPUT);
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readval = analogRead (readPin);
V2 = (5. / 1023.) * readval;
Serial.println(V2);
delay(dtime);
}
