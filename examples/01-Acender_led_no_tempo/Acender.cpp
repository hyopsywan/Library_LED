#include <LED.h>

Led LedBranco(21); //Use a funcao Led() para adicionar em qual pino seu LED esta conectado na placa.

void setup() 
{
    LedBranco.acender(2); //Use a funcao acender(tempoLigado) para adicionar o tempo em segundos em que o LED ira acender.
}

void loop()
{
    LedBranco.update(); //A funcao update deve estar sempre presente no loop.
}