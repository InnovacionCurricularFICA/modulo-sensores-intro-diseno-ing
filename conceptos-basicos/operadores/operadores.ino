void setup() {
  // Código para configurar la placa.
  // Se ejecuta una sola vez, luego de que la placa se energiza.
}

void loop() {
  // Las variables sólo se declaran una vez.
  int numero1 = 20;
  int numero2 = 5;
  int resultado = 0;
  
  // Cuando ya fueron declaradas y se quieren
  // usar nuevamente, se usan sólo con el nombre.
  resultado = numero1 % numero2; // Resto de la división entre 20 y 5 -> resultado = 0
  resultado = numero1 + numero2; // resultado = 20 + 5 = 25
  resultado = numero1 - numero2; // resultado = 20 - 5 = 15
  resultado = numero1 * numero2; // resultado = 20 * 5 = 100
  resultado = numero1 / numero2; // resultado = 20 / 5 = 4

  resultado += numero1; // resultado = resultado + numero1 = 4 + 20 = 24
  resultado -= numero2; // resultado = resultado - numero2 = 24 - 5 = 19
  resultado *= numero2; // resultado = resultado * numero2 = 19 * 5 = 95 
  resultado /= numero2; // resultado = resultado / numero2 = 95 / 5 = 19
 
  resultado++; // resultado = resultado + 1 = 19 + 1 = 20
  resultado--; // resultado = resultado - 1 = 20 - 1 = 19

  resultado == 19; // Verdadero o 1, porque es igual 19.
  resultado != 19; // Falso o 0, porque no es distinto a 19.
  resultado > 19; // Falso o 0, porque no es mayor a 19. 
  resultado < 19; // Falso o 0, porque no es menor a 19. 
  resultado >= 19; // Verdadero o 1, porque es mayor o igual a 19. 
  resultado <= 19; // Verdadero o 1, porque es menor o igual a 19.

  resultado == 19 && numero1 == 20; // Verdadero o 1, porque ambas se cumplen.
  resultado == 19 && numero1 > 20; // Falso o 0, porque no se cumplen ambas.
  numero1 == 20 || numero2 > 5; // Verdadero o 1, porque se cumple al menos una.
  numero1 == 19 || numero2 > 5; // Falso o 0, porque no se cumple ninguna de las dos.
}