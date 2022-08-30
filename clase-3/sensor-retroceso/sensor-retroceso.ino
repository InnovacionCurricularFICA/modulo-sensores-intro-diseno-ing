int trigger = 2;
int echo = 3;
int buzzer = 11;

void setup() {
  Serial.begin(9600);
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  digitalWrite(trigger, LOW);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  float tiempo;
  int distancia;

  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);

  tiempo = pulseIn(echo, HIGH);
  distancia = 0.01715 * tiempo;

  Serial.print("Distancia: ");
  Serial.print(distancia);
  Serial.print("cm");
  Serial.println();

  if(distancia < 20){
    tone(buzzer, 500, 500);
    noTone(buzzer);
  }

  delay(10);
}
