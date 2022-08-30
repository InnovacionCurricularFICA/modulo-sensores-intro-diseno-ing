void setup() {
  Serial.begin(9600); // Se inicializa la comunicación con el PC.
}

void loop() {
  /*
  Se declara e inicializa la variable i con un valor igual a cero.
  Luego, se evalúa si i es menor a 100. Si cumple, se ejecuta la impresión
  por pantalla y posteriormente se le suma uno a i, para volver a evaluar la
  condición, y así sucesivamente hasta que i no sea menor que 100. 
  */ 
  for(int i = 0 ; i < 100 ; i++){
    Serial.println("Hola mundo!");
  }
  delay(2000);   
}