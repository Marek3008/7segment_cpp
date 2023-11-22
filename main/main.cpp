#include "button.h"
#include "led.h"
#include "display.h"

#include <stdio.h>
#include <iostream>
#include "driver/gpio.h"
#include "esp_log.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"


static const char *TAG = "main";

extern "C"
{
    void app_main(void)
    {

        ESP_LOGI(TAG, "start of main");

        gpio_num_t piny[] = {GPIO_NUM_23, GPIO_NUM_22, GPIO_NUM_5, GPIO_NUM_4, GPIO_NUM_21, GPIO_NUM_19, GPIO_NUM_18};
        int counter = 0;

        Led pinA(piny[0]);
        Led pinB(piny[1]);
        Led pinC(piny[2]);
        Led pinD(piny[3]);
        Led pinE(piny[4]);
        Led pinF(piny[5]);
        Led pinG(piny[6]);

        Button button(GPIO_NUM_15);

        Display display;
        
        for (int i = 0; i < 7; i++)
        {
            gpio_reset_pin(piny[i]);
            gpio_set_direction(piny[i], GPIO_MODE_OUTPUT);
        }
        
        

        

        while (true)
        {
            if(counter == 10){
                counter = 0;
            }

            display.changeNumber(display.number[counter], pinA, pinB, pinC, pinD, pinE, pinF, pinG);

            while(gpio_get_level(button.inputPin) == 0){
                vTaskDelay(1);
            }

            //ESP_LOGI(button.TAG, "button pressed");
            counter++;

            

            while(gpio_get_level(button.inputPin) == 1){
                vTaskDelay(1);
            }
        }
        
        
    }
}
    
