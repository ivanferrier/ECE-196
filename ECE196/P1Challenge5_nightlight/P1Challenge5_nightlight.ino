#include <Servo.h>

int servo_pin = 2;

Servo servoMain; 

void setup(){
    servoMain.attach(servo_pin);
  }
void loop(){
  servoMain.write(180);
  delay(1000);
  servoMain.write(0);
  delay(1000);
  }
