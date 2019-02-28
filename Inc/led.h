// Created by huanxi on 2019/2/28.
//led 灯驱动
//

#ifndef MINI_LED_H
#define MINI_LED_H
#include "sys.h"

#define LED0_PIN GPIO_PIN_8
#define LED1_PIN GPIO_PIN_2
#define LED0 PAOut(8)
#define LED1 PDOut(8)

void Led_Init();
void Led_On(int);
void Led_Off(int);
#endif //MINI_LED_H
