void setup() {
  Serial.begin(9600); // Se inicializa la comunicación con el PC.
}

void loop() {
  int numero = 10; // Variable numérica entera.
  if(numero % 2 == 0){
      Serial.println("Par");
  } else {
      Serial.println("Impar");
  }
}