#include <Servo.h>

int ar0;
int ar1;
int ar2;
int ar3;
int ar4;
int ar5;

void setup() {
Serial.begin(9600);

pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(A5,INPUT);

}
void loop() {
ar0=analogRead(A0);
ar1=analogRead(A1);
ar2=analogRead(A2);
ar3=analogRead(A3);
ar4=analogRead(A4);
ar5=analogRead(A5);
Serial.print(ar0);
Serial.print(" ");
Serial.print(ar1);
Serial.print(" ");
Serial.print(ar2);
Serial.print(" ");
Serial.print(ar3);
Serial.print(" ");
Serial.print(ar4);
Serial.print(" ");
Serial.print(ar5);
Serial.print(" ");
Serial.print("\n");
delay(20);

}
