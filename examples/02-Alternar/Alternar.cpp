#include <Arduino.h>
#include "LED.h"

Led led(13);

unsigned long tempoAnterior = 0;

void setup() 
{
    
}

void loop() 
{
    if (millis() - tempoAnterior >= 500) 
    {
        tempoAnterior = millis();
        led.alternar();
    }

    led.update();
}
