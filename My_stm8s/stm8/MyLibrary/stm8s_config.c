
/* Includes ------------------------------------------------------------------*/
#include "stm8s_config.h"

void clk_config_16MHz_hse(void)
{
  CLK_DeInit();
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV1);
  CLK_ClockSwitchConfig(CLK_SWITCHMODE_AUTO, CLK_SOURCE_HSE, DISABLE, CLK_CURRENTCLOCKSTATE_DISABLE);
}

void clk_config_16MHz_hsi(void)
{
  CLK_DeInit();
  CLK_SYSCLKConfig(CLK_PRESCALER_CPUDIV1);
  CLK_SYSCLKConfig(CLK_PRESCALER_HSIDIV1);
  CLK_ClockSwitchConfig(CLK_SWITCHMODE_AUTO, CLK_SOURCE_HSI, DISABLE, CLK_CURRENTCLOCKSTATE_DISABLE);
}

void delay(volatile uint16_t ms)
{
  while (ms--)
  {
    int16_t us = 1000;
    while (us--)
    {
      //nop();
      //nop();
      nop();
      nop();
      nop();
      nop();
      nop();
      nop();
      nop();
      nop();
      nop();
    }
  }
}

void GPIO_Config(void)
{
  //    OUT
  GPIO_Init(LED_BUILTIN, GPIO_MODE_OUT_PP_LOW_FAST);
}

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/