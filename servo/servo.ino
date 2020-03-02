#include <Servo.h>

void setup() {
  Servo servo;
  servo.attach(7);
}

void loop() {
  for (int i = 0; i < 180; i++) {
    servo.write(i);       
    delay(20);           
  }
  for (pos = 180; pos >= 0; pos -= 1) { 
    servo.write(i);         
    delay(20);
  }
}
