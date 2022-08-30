void setup() {
  Serial.begin(9600); // Se inicializa la comunicación con el PC.
}

void loop() {
  int numero = 0; // Variable numérica entera.

  /*
  Se imprimirá por pantalla "Hola mundo!" y luego se aumentará el valor
  de la variable en una unidad para posteriormente evaluar la condición.
  Notar que "numero" pudo ser desde un principio mayor o igual a 3 pero 
  igual se hubiera impreso "Hola mundo!" por pantalla por lo menos una vez.
  */ 
  do {
    Serial.println("Hola mundo!");
    numero++;
  } while (numero < 3);
  delay(2000);   
}