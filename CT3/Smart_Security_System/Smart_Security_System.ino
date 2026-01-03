#define PIR_PIN 13
#define LED_PIN 2

void setup() {
  Serial.begin(115200);
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);

  Serial.println("Security System Started");
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("⚠ Motion Detected!");
    delay(2000);   // alert duration
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
