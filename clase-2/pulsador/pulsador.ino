void setup() {
  Serial.begin(9600);
}

void loop() {
  int pulsador = digitalRead(3);
  Serial.println(pulsador);
  delay(1000);
}
