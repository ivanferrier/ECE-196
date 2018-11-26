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
  
  servoMain.write(160);
  check(1000);
  servoMain.write(120);
  check(1000);
  servoMain.write(50);
  check(1000);
  }

boolean  check(int input){
    delay(200);
    lightLevel= analogRead(photoPin);
  while(lightLevel>60){
    lightLevel= analogRead(photoPin);
    Serial.println(lightLevel);
    Serial.print("waiting");
    digitalWrite(7,HIGH);
    delay(50);
    }
    digitalWrite(7,LOW);
    Serial.println(lightLevel);
    delay(input);
    
    
    }
