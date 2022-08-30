void setup() {
  Serial.begin(9600);
  pinMode(7, OUTPUT);
}

void loop() {
  int potenciometro = analogRead(A0);
  if (potenciometro > 512) {
    digitalWrite(7, HIGH);
  } else {
    digitalWrite(7, LOW);
  }
}
