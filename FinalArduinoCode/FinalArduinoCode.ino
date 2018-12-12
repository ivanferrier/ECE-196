#include <Servo.h>

int button1Pin = 22; // this is a digital pin on the areuino that will be for button 1
int button2Pin = 23; // this is a digital pin on the areuino that will be for button 2

//these arrays will work allow us to check for transition between states
// if the first element of the aray is one value while the other is a different one
// then we know that the array transitioned from high to low or low to high
// the transition direction depends on which element is a one and which is a zero
//int b1Array[2]; 
//int b2Array[2];
//we actually don't need these because we are going check for this on in Python instead



// these values are going to be used for each potentiometer
int ar0;
int ar1;
int ar2;
int ar3;
int ar4;
int ar5;
int ar6;
int ar7;
int ar8;

void setup() {  // the setup only runs one time
// this opens the Serial port
Serial.begin(9600);
// it allows the Arduino to send data to a port on the computer that can then be viewed
// this data can only be viewed by one sorce at a time, so if the serial monotor is opened 
// in the Tools section at the top of the Arduino IDE, no other program will be able
// to read the data. This includes Blender, so if the port is opened with the Arduino,
// Blender will not be able to access the port, rather it will get an error saying
// "Access Denied". Closing the serial port in the Arduino IDE should fix this issue



// In order for the Arduino to be able to read a value, it has to be declared in the set up

// these values are for the potentiometers on the armature
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
pinMode(A3,INPUT);
pinMode(A4,INPUT);
pinMode(A5,INPUT);

// these values are for the potentiometers on the sacling pad
pinMode(A6,INPUT);
pinMode(A7,INPUT);
pinMode(A8,INPUT);

// these values are for the buttons
pinMode(button1Pin, INPUT);
pinMode(button2Pin, INPUT);

}


void loop() {  // after the setup runs once, the loop will run repeatedly

// This is where we actually get the values of the Potentiometers
ar0=analogRead(A0);
ar1=analogRead(A1);
ar2=analogRead(A2);
ar3=analogRead(A3);
ar4=analogRead(A4);
ar5=analogRead(A5);
ar6=analogRead(A6);
ar7=analogRead(A7);
ar8=analogRead(A8);

This is where we actually get the values of the Buttons



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
Serial.print(ar6);
Serial.print(" ");
Serial.print(ar7);
Serial.print(" ");
Serial.print(ar8);
Serial.print(" ");
Serial.print(digitalRead(button1Pin)); // this syntax also works, rather than stroing what we read to a variable before it is printed
Serial.print(" ");
Serial.print(digitalRead(button2Pin));
Serial.print(" ");
Serial.print("\n"); // this moves the data to the next line it is the char for enter or new line 
// all of these Serial.print lines will print the 9 analog values and two digital values with a space between each one
// it will look something like this

// 1023 900 735 26 104 367 465 988 512 1 0

// we can seperate the values with anything 
// as long as it is not a digit, then we can
// use Python to seperate the data with the
// character that we chose to seperate our data

delay(20); // this makes the system delay for 20 milliseconds
// we add this in so that we don't print an unnesicary amount of
// values to the serial port.

} 
///////////////////// end of main loop ///////////////////////////////////////





// if we wanted to make it so that our system would toggle, we could check for transitions, but it works better for this project to do this with python, so we dont need any of this
//b1Array[0] = b1Array[1];
//b1Array[1] = ;
//
//b2Array[0] = b2Array[1];
//b2Array[1] = );
