//
// Created by huanxi on 2019/2/28.
//

#include "bsp/key.h"

/**
 * KEY0,KEY1 默认上拉
 */
void Key_Init(){
    GPIO_InitTypeDef gpioInitTypeDef;
    __HAL_RCC_GPIOA_CLK_ENABLE();
    __HAL_RCC_GPIOC_CLK_ENABLE();

    gpioInitTypeDef.Pin = KEY0_PIN;
    gpioInitTypeDef.Mode = GPIO_MODE_IT_FALLING;
    gpioInitTypeDef.Pull = GPIO_PULLUP;
    HAL_GPIO_Init(GPIOC, &gpioInitTypeDef); //上拉输入

    gpioInitTypeDef.Pin = KEY1_PIN;
    HAL_GPIO_Init(GPIOA, &gpioInitTypeDef);

    //下拉输入
    gpioInitTypeDef.Pin = KEY_UP_PIN;
    gpioInitTypeDef.Pull = GPIO_PULLDOWN;
    HAL_GPIO_Init(GPIOA, &gpioInitTypeDef);
}
/**
 * 中断触发
 */
void Key_Init_Int(){

}

u8 Key_Scan(u8 mode) {
    static u8 key_up = 1; //按键是否松开
    if (key_up && (!KEY0 || !KEY1)) {
        //按键松开且KEY0按下
        HAL_Delay(10); //消抖
        key_up = 0;//标记按键按下
        if (!KEY0) return 1;
        else if (!KEY1) return 2;
    } else if (KEY0 && KEY1&&!key_up)key_up = 1;  //KEY松开
    return 0;
}
