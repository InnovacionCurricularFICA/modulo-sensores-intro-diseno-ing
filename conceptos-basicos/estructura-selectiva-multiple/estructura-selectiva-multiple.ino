void setup() {
  Serial.begin(9600); // Se inicializa la comunicación con el PC.
}

void loop() {
  int numero = 10; // Variable numérica entera.
  if(numero <= 50){
      Serial.print("Número entre 0 y 50: ");
      Serial.println(numero);
  } else if(numero <= 100) {
      Serial.print("Número entre 51 y 100: ");
      Serial.println(numero);
  } else {
      Serial.print("Número mayor a 100: ");
      Serial.println(numero);
  }
}