// Created by huanxi on 2019/2/28.
//led 灯驱动
//

#ifndef MINI_LED_H
#define MINI_LED_H

#include "sys.h"
#define LED0 PAout(8)
#define LED1 PDout(8)
#define LED0_PIN GPIO_PIN_8
#define LED1_PIN GPIO_PIN_2


void Led_Init();
void Led_On(uint8_t );
void Led_Off(uint8_t );
#endif //MINI_LED_H
