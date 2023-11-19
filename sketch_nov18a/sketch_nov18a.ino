#include <stdio.h>

#define LED 11

void DigitalDemo() {
  digitalWrite(LED, HIGH);
  delay(1000);

  digitalWrite(LED, LOW);
  delay(1000);
}

void AnalogDemo() {
  analogWrite(LED, 255);
  delay(1000);

  analogWrite(LED, 64);
  delay(1000);
  
  analogWrite(LED, 0);
  delay(1000);
}

void setup() {
  // Set LED pin to output
  pinMode(LED, OUTPUT);
}

void loop() {
  // DigitalDemo()
  // AnalogDemo()

  int FadeDelay = 1;

  for(int i=0;i<=255;i++) {
    analogWrite(LED, i);
    delay(FadeDelay);
  }

  delay(1000);

  for(int i=255;i>=0;i--) {
    analogWrite(LED, i);
    delay(FadeDelay);
  }

  delay(1000);
}
