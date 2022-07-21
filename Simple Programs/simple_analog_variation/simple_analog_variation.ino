int pin3 = 3;
int pin4 = 4;
int fullbright = 100;
int setdelay = 500;

void setup() {
  // Activate two pins to show variations
pinMode (pin3, OUTPUT);
pinMode (pin4, OUTPUT);
}

void loop() {
  // two leds one goes from total dim to totla bright the other viceversa:

for (int i = 0; i < fullbright + 1; i++)
{
analogWrite (pin3, fullbright - i);
analogWrite (pin4, i);
delay (setdelay);
}
}
