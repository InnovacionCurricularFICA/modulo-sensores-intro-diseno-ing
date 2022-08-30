void setup() {
  Serial.begin(9600); // Se inicializa la comunicación con el PC.
}

void loop() {
  int numero = 0; // Variable numérica entera.
  
  /*
  Mientras el número sea menor o igual a 5 se imprimirá 
  por pantalla y luego se aumentará su valor en una unidad
  para volver a evaluar la condición.
  */ 
  while(numero <= 5){
    Serial.println(numero);
    numero++;
  }
  delay(2000);   
}