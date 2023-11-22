#include "led.h"

Led::Led(gpio_num_t outputPin){
    this->outputPin = outputPin;
}

void Led::togglePin(int level){
    gpio_set_level(this->outputPin, level);
}