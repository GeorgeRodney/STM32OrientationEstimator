#include "cppEnter.hpp"
#include "stm32f4xx_hal.h"
#include "main.h"
#include "Imu.hpp"
 
// Main Cpp event loop to run application
void EventLoopCpp()
{
    while (1)
    {
        HAL_GPIO_WritePin(USER_LED_GPIO_Port, USER_LED_Pin, GPIO_PIN_RESET);
        HAL_Delay(2000);
        HAL_GPIO_WritePin(USER_LED_GPIO_Port, USER_LED_Pin, GPIO_PIN_SET);
        HAL_Delay(500);
    }
}
 
// Define all C function calls from main.c below
extern "C"
{
    void EventLoopC()
    {
        EventLoopCpp();
    }
}