# 📌 Biblioteca LED

Biblioteca simples para controlar LEDs em Arduino.

---

## 🚀 Funcionalidades

- Ligar LED → `led.acender()`
- Desligar LED → `led.apagar()`
- Ligar por tempo determinado → `led.acender(tempo_ms)`
- Alternar estado → `led.alternar()`
- Piscar (padrão) → `led.piscar()`
- Piscar com frequência → `led.piscar(freq)`
- Piscar com repetições → `led.piscar(freq, repeticoes)`

⚠️ Sempre chame `led.update()` no `loop()`.

---

## ⚙️ Como usar

```c
#include "LED.h"

Led led(13);

void setup() {}

void loop() {
    led.update();
}
