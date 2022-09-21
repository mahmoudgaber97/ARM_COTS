#ifndef PWM_H_
#define PWM_H_


void SWPWM_init(uint8_t dutyCycle );
void SWPWM_changeDutyCycle(uint8_t newDutyCycle);
void SWPWM_start(void);

#endif