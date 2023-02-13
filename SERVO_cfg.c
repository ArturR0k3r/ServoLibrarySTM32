/*
 * File: SERVO_cfg.c
 * Driver Name: [[ SERVO Motor ]]
 * Created on: 13.02.2023
 * Author:     Sirbu Artur
 * -------------------------------------------
 *
 */

#include "SERVO.h"

const SERVO_CfgType SERVO_CfgParam[SERVO_NUM] =
{
	// Servo Motor 1 Configurations
    {
	    GPIOA,
		GPIO_PIN_0,
		TIM2,
		&TIM2->CCR1,
		TIM_CHANNEL_1,
		72000000,
		0.65,
		2.3
	}
};
