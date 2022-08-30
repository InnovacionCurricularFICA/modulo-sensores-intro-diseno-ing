void setup() {
  Serial.begin(9600);
}

void loop() {
  int potenciometro = analogRead(A0);
  Serial.println(potenciometro);
  delay(1000);
}
