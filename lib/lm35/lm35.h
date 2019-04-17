
#ifndef lm35_h
#define lm35_h

#include "Arduino.h"

class lm35
{
  public:
    
	  int pinA;
    lm35();
    int tempC(int pinA);

  private:

    int _analogPin;//pin used
    int _val;
    int _T;
};
#endif
