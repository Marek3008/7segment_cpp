#pragma once

#include "driver/gpio.h"

class Button
{
public:
    static const char *TAG;
    gpio_num_t inputPin;
    Button(gpio_num_t inputPin);
    bool buttonPressed();
};