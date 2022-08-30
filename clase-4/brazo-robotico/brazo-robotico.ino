#include <Servo.h>

Servo servoMotor;
Servo servoMotor2;

void setup() {
  Serial.begin(9600);
  servoMotor.attach(6);
  servoMotor2.attach(9);
}

void loop() {
  int vertical = analogRead(A0);
  int horizontal = analogRead(A1);
  Serial.println(vertical);
  Serial.println(horizontal);
  vertical = map(vertical, 0, 1023, 0, 180);
  horizontal = map(horizontal, 0, 1023, 0, 180);
  Serial.println(vertical);
  Serial.println(horizontal);
  Serial.println("--------------");
  servoMotor.write(vertical);
  servoMotor2.write(horizontal);
  delay(300);
}
