#pragma once

#include "driver/gpio.h"

class Led{
public:
    gpio_num_t outputPin;
    Led(gpio_num_t outputPin);
    void togglePin(int level);
};