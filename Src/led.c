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
    gpioInitTypeDef.Pin = LED0_PIN;
    HAL_GPIO_Init(GPIOA, &gpioInitTypeDef);
    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
    gpioInitTypeDef.Pin = LED1_PIN;
    HAL_GPIO_Init(GPIOD, &gpioInitTypeDef);
    HAL_GPIO_WritePin(GPIOD, LED1_PIN, GPIO_PIN_SET);
}

void Led_On(int led) {
    if (led == 0) {
        HAL_GPIO_WritePin(GPIOA, LED0_PIN, GPIO_PIN_SET);
    } else {
        HAL_GPIO_WritePin(GPIOD, LED1_PIN, GPIO_PIN_RESET);
    }
}
void Led_Off(int led) {
    if (led == 0) {
        HAL_GPIO_WritePin(GPIOA, LED0_PIN, GPIO_PIN_RESET);
    } else {
        HAL_GPIO_WritePin(GPIOD, LED1_PIN, GPIO_PIN_SET);
    }
}
