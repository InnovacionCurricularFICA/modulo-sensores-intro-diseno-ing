void setup() {
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  analogWrite(3, 26);
  analogWrite(5, 213);
  analogWrite(6, 43);
  delay(1000);
  analogWrite(3, 213);
  analogWrite(5, 26);
  analogWrite(6, 210);
  delay(1000);
}
