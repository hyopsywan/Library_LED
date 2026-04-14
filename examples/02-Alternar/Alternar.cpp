#include <LED.h>

Led LedBranco(21); //Use a funcao Led() para adicionar em qual pino seu LED esta conectado na placa.

estadoLedBranco = false;

void setup() 
{

}

void loop()
{
    LedBranco.update(); //A funcao update deve estar sempre presente no loop.

    if(LedBranco)
        LedBranco.alternar();
    else
        LedBranco.alternar();

}