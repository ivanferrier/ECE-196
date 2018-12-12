#include <Servo.h>

int servo_pin = 2;
int photoPin=A1;
int lightLevel;

Servo servoMain; 

void setup(){
    servoMain.attach(servo_pin);
    Serial.begin(9600);
    pinMode(7,OUTPUT);
  }
void loop(){
  lightLevel = analogRead(photoPin);
  Serial.println(lightLevel);
  servoMain.write(lightLevel/2);
  }


    
    
