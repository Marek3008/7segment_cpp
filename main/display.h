#pragma once

#include "led.h"

class Display{
public:
    int number[10][7] = {{1,1,1,1,1,1,0},
                   {0,1,1,0,0,0,0},
                   {1,1,0,1,1,0,1},
                   {1,1,1,1,0,0,1},
                   {0,1,1,0,0,1,1},
                   {1,0,1,1,0,1,1},
                   {1,0,1,1,1,1,1},
                   {1,1,1,0,0,0,0},
                   {1,1,1,1,1,1,1},
                   {1,1,1,1,0,1,1}};

    void changeNumber(int pole[7], Led a, Led b,Led c,Led d,Led e,Led f,Led g);
};