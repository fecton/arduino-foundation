#define POTENTIOMETR_PIN A2
#define RED_LED 11
#define YELLOW_LED 10
#define GREEN_LED 9

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  float potentional = analogRead(POTENTIOMETR_PIN);
  // 1023 / 4 = 255 (analogMax)
  // 255 = 1 (analogMax = digitalMax)
  float LED_TO_WRITE = potentional / 4;

  analogWrite(RED_LED, LED_TO_WRITE);
  analogWrite(YELLOW_LED, LED_TO_WRITE);
  analogWrite(GREEN_LED, LED_TO_WRITE);

  Serial.println(LED_TO_WRITE);
  delay(100);

}
