#include <Servo.h>

Servo servo;

void setup() {
  servo.attach(6);
}

void loop() {
  servo.write(0);
  delay(1000);
  servo.write(180);
  delay(1000);
  servo.write(90);
  delay(10000);
}
