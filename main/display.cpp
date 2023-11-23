#include "display.h"
#include "led.h"

#include "esp_log.h"

void Display::changeNumber(int pole[7], Led a, Led b,Led c,Led d,Led e,Led f,Led g){

    a.togglePin(pole[0]);
    b.togglePin(pole[1]);
    c.togglePin(pole[2]);
    d.togglePin(pole[3]);
    e.togglePin(pole[4]);
    f.togglePin(pole[5]);
    g.togglePin(pole[6]);
}

