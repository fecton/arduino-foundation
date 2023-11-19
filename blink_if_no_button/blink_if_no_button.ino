#define POTENTIOMETR_PIN A2
#define RED_LED 11
#define YELLOW_LED 10
#define GREEN_LED 9

#define LEDS_AMOUNT 3

byte LEDs[LEDS_AMOUNT] = {RED_LED, YELLOW_LED, GREEN_LED};

#define BUTTON 2

#define ANALOG_MAX 255
#define ANALOG_MIN 0

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void toogleLEDS(int ANALOG_VALUE = 0) {
    analogWrite(RED_LED, ANALOG_VALUE);
    analogWrite(YELLOW_LED, ANALOG_VALUE);
    analogWrite(GREEN_LED, ANALOG_VALUE);

    delay(100);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(BUTTON)) {
    analogWrite(YELLOW_LED, ANALOG_MAX);
    delay(1000);
    analogWrite(YELLOW_LED, ANALOG_MIN);
    if(digitalRead(BUTTON)) {
      analogWrite(RED_LED, ANALOG_MAX);
      delay(1000);
      analogWrite(RED_LED, ANALOG_MIN);
      if(digitalRead(BUTTON)) {
        analogWrite(GREEN_LED, ANALOG_MAX);
        delay(1000);
        analogWrite(GREEN_LED, ANALOG_MIN);
      }
    }
  }
  else {
    toogleLEDS(255);
    toogleLEDS(0);
  }


}
