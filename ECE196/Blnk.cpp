/*
  Morse.cpp - Library for flashing Morse code.
  Created by Ivan Ferrier 10/15/2018
  public domain
*/

#include "Arduino.h"
#include "Blnk.h"

Blnk::Blnk(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Blnk::start()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);  
}