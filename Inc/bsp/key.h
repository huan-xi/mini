//
// Created by huanxi on 2019/2/28.
//

#ifndef MINI_KEY_H
#define MINI_KEY_H

#include "sys.h"

#define KEY0 PCin(5)
#define KEY1 PAin(15)
#define KEY_UP PAin(0)

#define KEY0_PIN GPIO_PIN_5
#define KEY1_PIN GPIO_PIN_15
#define KEY_UP_PIN GPIO_PIN_0
#define key 0

typedef unsigned char u8;

void Key_Init();

u8 Key_Scan(u8);

#endif //MINI_KEY_H
