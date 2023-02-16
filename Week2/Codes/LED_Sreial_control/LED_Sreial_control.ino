#define LED_PIN 3

void setup() {
  Serial.begin(9600);

  pinMode(LED_PIN, OUTPUT);
}

int state = 0;

void loop() {
  if(Serial.available()) {
    state = Serial.parseInt();
  }

  digitalWrite(LED_PIN, state);
}
