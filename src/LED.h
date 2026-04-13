#include <Arduino.h>

#ifndef LED_h
#define LED_h

/**
* @class Led
* @brief Classe para controle nao bloqueante de um LED.
*
* Permite ligar, desligar, ligar por um tempo,
* piscar continuamente e piscar por quantidade.
*
* @param pin pino ao qual o LED foi conectado.
* @note O método update() deve ser chamado continuamente 
*/
class Led 
{
    private:
        uint8_t pino;
        bool estado;
        bool apagarNoTempo;
        uint32_t apagarNoMomento;

        bool estadoPiscar;
        uint32_t tempoEspera;
        uint32_t tempoAnteriorPiscar;
        uint16_t repeticoes;
        
        void funcaoApagarNoTempo();
        void funcaoPiscar();

    public:


    Led(uint8_t pin); //METODO CONSTRUTOR
    
    void acender();
    void acender(uint32_t tempoLigado);
    
    void apagar();
    void piscar();
    void piscar(float freq);
    void piscar(float freq, uint16_t repeticoes);

    void alternar();

    void setEstado(bool estado);

    uint8_t getPino();

    void update();
    
};


#endif