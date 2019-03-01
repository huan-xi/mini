//
// Created by huanxi on 2019/3/1.
//

#include "bsp/beep.h"

void Beep_Init() {
    GPIO_InitTypeDef gpioInitTypeDef;
    __HAL_RCC_GPIOC_CLK_ENABLE();
    gpioInitTypeDef.Pin = BEEP_PIN;
    gpioInitTypeDef.Mode = GPIO_MODE_OUTPUT_PP;
    gpioInitTypeDef.Speed = GPIO_SPEED_FREQ_HIGH;
    HAL_GPIO_Init(GPIOC, &gpioInitTypeDef);
    HAL_GPIO_WritePin(GPIOC, BEEP_PIN, GPIO_PIN_SET);
}
