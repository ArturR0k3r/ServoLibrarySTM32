
#include "Servo.h"

void Servo_Init(Servo servo, TIM_HandleTypeDef htim, uint16_t TIM_CHANNEL, uint16_t dduty)
{
	HAL_TIM_PWM_Start(&htim, TIM_CHANNEL);
	servo.htimx = htim;
	servo.TIM_CHANNEL_x = TIM_CHANNEL;

	servo.duty = dduty;
}
void Servo_SetAngle(Servo servo, uint16_t dduty)
{
	servo.duty = (dduty * 110 + 500) / 20;
	servo.htimx.Instance->CCR1 = servo.duty;
}
