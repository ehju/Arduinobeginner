int led1 = 3; // the pin that the LED is attached to
int led2 = 6;
int led3 = 9;
int brightness1 = 0; // how bright the LED is
int brightness2 = 0;
int brightness3 = 0;
int fadeAmount1 = 5;// how many points to fade the LED by
int fadeAmount2 = 51;
int fadeAmount3 = 85;
void setup() {
  pinMode(led1, OUTPUT); // declare pin to be an output:
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}
void loop() {
  analogWrite(led1, brightness1); // set the brightness of pin 9:
  brightness1 = brightness1 + fadeAmount1; // change brightness for next time through loop:
  if (brightness1 == 0 || brightness1 == 255) { // reverse the direction of the fading :
    fadeAmount1 = -fadeAmount1 ;
  }
  delay(30); // wait for 30 milliseconds to see the dimming effect
  analogWrite(led2, brightness2); // set the brightness of pin 9:
  brightness2 = brightness2 + fadeAmount2; // change brightness for next time through loop:
  if (brightness2 == 0 || brightness2 == 255) { // reverse the direction of the fading :
    fadeAmount2 = -fadeAmount2 ;
  }
  delay(30); // wait for 30 milliseconds to see the dimming effect
  analogWrite(led3, brightness3); // set the brightness of pin 9:
  brightness3 = brightness3 + fadeAmount3; // change brightness for next time through loop:
  if (brightness3 == 0 || brightness3 == 255) { // reverse the direction of the fading :
    fadeAmount3 = -fadeAmount3 ;
  }
  delay(30); // wait for 30 milliseconds to see the dimming effect
}
