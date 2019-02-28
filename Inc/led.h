// Created by huanxi on 2019/2/28.
//led 灯驱动
//

#ifndef MINI_LED_H
#define MINI_LED_H
#include "stm32f1xx.h"

#define LED0 GPIO_PIN_8
#define LED1 GPIO_PIN_2
void Led_Init();
void Led_On(int);
void Led_Off(int);
#endif //MINI_LED_H
