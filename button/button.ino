#define BUTTON_PIN 2
#define LED_PIN 11

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println(digitalRead(BUTTON_PIN));

  if(digitalRead(BUTTON_PIN) == 1) {
    analogWrite(LED_PIN, 255);
    delay(1000);
  }
  else {
    analogWrite(LED_PIN, 0);
    delay(1000);
  }

  delay(100);




}
