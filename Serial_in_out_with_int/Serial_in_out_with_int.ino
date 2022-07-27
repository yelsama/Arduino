int anumber;
String msg = "Enter a number:";
String msg2 = "The number is: ";
void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println (msg);
  while (Serial.available() == 0)
  {
    
  }
  anumber = Serial.parseInt();
  Serial.print(msg2);
  Serial.println(anumber);
}
