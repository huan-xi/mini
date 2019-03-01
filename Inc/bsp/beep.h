//
// Created by huanxi on 2019/3/1.
//

#ifndef MINI_BEEP_H
#define MINI_BEEP_H

#include "sys.h"
#define BEEP PCout(5)
#define BEEP_PIN GPIO_PIN_5

void Beep_Init();

#endif //MINI_BEEP_H
