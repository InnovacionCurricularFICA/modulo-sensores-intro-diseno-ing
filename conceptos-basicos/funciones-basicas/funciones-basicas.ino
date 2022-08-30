void setup() {
  Serial.begin(9600); // Se inicializa la comunicación con el PC.
  pinMode(7, OUTPUT); // Se define el pin 7 como salida.
}

void loop() {
  int year = 2022; // Variable entera que almacena el año.   
  Serial.print("Ejecutando este programa en el año "); // Imprime mensaje por pantalla sin realizar un salto de línea.
  Serial.println(year); // Imprime el año y realiza un salto de línea (ENTER).  
  digitalWrite(7, HIGH); // Escribe un valor digital 1/encendido en el pin 7.
  delay(1000); // Detiene la ejecución del programa por 1 segundo.
  digitalWrite(7, LOW); // Escribe un valor digital 0/apagado en el pin 7.
  delay(1000); // Detiene la ejecución del programa por 1 segundo.
}