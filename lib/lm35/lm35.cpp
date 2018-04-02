#include "Arduino.h"
#include "lm35.h"

lm35::lm35()
{
   
  _analogPin = pinA;  
}

int lm35::tempC(int pinA)
  {
    _val=analogRead(_analogPin);
    _T=(5*_val*100)/1024;

    return _T;
  }

