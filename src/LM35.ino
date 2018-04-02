#include "lm35.h"

lm35 temperatura;

int tmpC;
void setup()
{

}

void loop()
{
 tmpC=temperatura.tempC(A0);
}
