//
// Created by huanxi on 2019/2/28.
//

#include "led.h"

void Led_Init() {
    GPIO_InitTypeDef gpioInitTypeDef;
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOD_CLK_ENABLE();
    gpioInitTypeDef.Speed = GPIO_SPEED_FREQ_LOW;
    gpioInitTypeDef.Mode = GPIO_MODE_OUTPUT_PP;
    gpioInitTypeDef.Pin = LED0;
    HAL_GPIO_Init(GPIOA, &gpioInitTypeDef);
    HAL_GPIO_WritePin(GPIOA, LED0, GPIO_PIN_RESET);
    gpioInitTypeDef.Pin = LED1;
    HAL_GPIO_Init(GPIOD, &gpioInitTypeDef);
    HAL_GPIO_WritePin(GPIOD, LED1, GPIO_PIN_SET);
}
