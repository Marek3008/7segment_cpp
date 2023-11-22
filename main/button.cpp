#include "button.h"

#include "driver/gpio.h"
#include "esp_log.h"

const char *Button::TAG = "BUTTON";

Button::Button(gpio_num_t inputPin){
    this->inputPin = inputPin;
    gpio_reset_pin(this->inputPin);
    gpio_set_direction(this->inputPin, GPIO_MODE_INPUT);
    gpio_set_pull_mode(this->inputPin, GPIO_PULLDOWN_ONLY);
    ESP_LOGI(TAG, "creation of buttton");
}

bool Button::buttonPressed(){
    return true;

}