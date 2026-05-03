#include <Arduino.h>
#include "LED.h"

Led led(13);

void setup()
{
    led.acender(2000);
}

void loop()
{
    led.update();
}
