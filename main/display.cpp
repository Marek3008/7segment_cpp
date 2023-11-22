#include "display.h"
#include "led.h"

#include "esp_log.h"

/*
Display::Display(int parameter){
    this->cisielko = parameter;
}*/

void Display::changeNumber(int pole[7], Led a, Led b,Led c,Led d,Led e,Led f,Led g){
    gpio_set_level(a.outputPin, pole[0]);
    gpio_set_level(b.outputPin, pole[1]);
    gpio_set_level(c.outputPin, pole[2]);
    gpio_set_level(d.outputPin, pole[3]);
    gpio_set_level(e.outputPin, pole[4]);
    gpio_set_level(f.outputPin, pole[5]);
    gpio_set_level(g.outputPin, pole[6]);
}

