void setup() {
  Serial.begin(9600); // Se inicializa la comunicación con el PC.
}

void loop() {
  int numero = 12; // Variable numérica entera.
  if(numero > 10){
      numero += 5;
  }
  Serial.println(numero);
}