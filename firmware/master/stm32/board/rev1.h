/* -*- mode: C; c-basic-offset: 4; intent-tabs-mode: nil -*-
 *
 * Thundercracker firmware
 *
 * Copyright <c> 2012 Sifteo, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _BOARD_REV1_H
#define _BOARD_REV1_H

// C L O C K
#define RCC_CFGR_PLLXTPRE   0

// U S B
#define USB_DM_GPIO         GPIOPin(&GPIOA, 11)
#define USB_DP_GPIO         GPIOPin(&GPIOA, 12)
#define USB_VBUS_GPIO       GPIOPin(&GPIOA, 9)

// R A D I O
#define RF_SPI              SPI3
#define RF_CE_GPIO          GPIOPin(&GPIOC, 7)
#define RF_IRQ_GPIO         GPIOPin(&GPIOC, 8)
#define RF_SPI_CSN_GPIO     GPIOPin(&GPIOC, 9)
#define RF_SPI_SCK_GPIO     GPIOPin(&GPIOC, 10)
#define RF_SPI_MISO_GPIO    GPIOPin(&GPIOC, 11)
#define RF_SPI_MOSI_GPIO    GPIOPin(&GPIOC, 12)
#define RF_EXTI_VEC         EXTI9_5

#define USE_NRF24L01        // Use the nRF42L01 as our radio

// F L A S H
#define FLASH_SPI           SPI1
#define FLASH_CS_GPIO       GPIOPin(&GPIOA, 15)
#define FLASH_WP_GPIO       GPIOPin(&GPIOB, 2)
#define FLASH_SCK_GPIO      GPIOPin(&GPIOB, 3)
#define FLASH_MISO_GPIO     GPIOPin(&GPIOB, 4)
#define FLASH_MOSI_GPIO     GPIOPin(&GPIOB, 5)

// N E I G H B O R
#define NBR_OUT1_GPIO       GPIOPin(&GPIOB, 8)
#define NBR_OUT2_GPIO       GPIOPin(&GPIOB, 9)
#define NBR_IN1_GPIO        GPIOPin(&GPIOA, 2)
#define NBR_IN2_GPIO        GPIOPin(&GPIOA, 3)
#define NBR_TX_TIM          TIM4
#define NBR_TX_TIM_CH       3

// U A R T
#define UART_DBG            USART3
#define UART_RX_GPIO        GPIOPin(&GPIOB, 11)
#define UART_TX_GPIO        GPIOPin(&GPIOB, 10)

// L E D
#define LED_GREEN_GPIO      GPIOPin(&GPIOB, 0)
#define LED_RED_GPIO        GPIOPin(&GPIOB, 1)
#define LED_PWM_GREEN_CHAN  3
#define LED_PWM_RED_CHAN    4
#define LED_PWM_TIM         TIM3
#define LED_SEQUENCER_TIM   TIM6

// P O W E R
#define VCC20_ENABLE_GPIO   GPIOPin(&GPIOC, 13)
#define VCC33_ENABLE_GPIO   GPIOPin(&GPIOC, 14)

// A U D I O
#define AUDIO_PWMA_PORT     GPIOA
#define AUDIO_PWMA_PIN      7
#define AUDIO_PWMB_PORT     GPIOA
#define AUDIO_PWMB_PIN      8
#define AUDIO_PWM_CHAN      1
#define AUDIO_PWM_TIM       TIM1
#define AUDIO_SAMPLE_TIM    TIM7

// M I S C
#define BTN_HOME_GPIO       GPIOPin(&GPIOC, 0)
#define BTN_HOME_EXTI_VEC   EXTI0


#endif // _BOARD_REV1_H
