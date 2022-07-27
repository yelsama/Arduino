String aname;
String msg = "What is your name?";
String msg1 = "Hello ";
String msg2 = ", Welcome to Serial input";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available() == 0)
{
  
}
aname = Serial.readString();
Serial.print(msg1);
Serial.print(aname);
Serial.println(msg2);
}
