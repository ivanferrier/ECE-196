#include <Servo.h>
int servo_pin = 2 ;
Servo servo0; // Create object
Servo servo1;
Servo servo2;
Servo servo3;

int ar0;
int ar1;
int ar2;
int ar3;

void setup() {
Serial.begin(9600);
servo0.attach( 11 );
servo1.attach( 10 );
servo2.attach( 9 );
servo3.attach( 8 );
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);

}
void loop() {
ar0=analogRead(A0);
ar1=analogRead(A1);
ar2=analogRead(A2);
ar3=analogRead(A3);
Serial.print(ar0*18/100);
Serial.print("\t");
Serial.print("\n");
servo0.write(ar0*18/100); // Highest angle
servo1.write(180-ar1*18/100);
servo2.write(180-ar2*18/100);
servo3.write(ar3*18/100);
delay(20);

}
