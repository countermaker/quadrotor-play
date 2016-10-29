/**
  ******************************************************************************
  * @file    motor.h
  * @author  jinyao and counter
  * @version V1.1
  * @date    2016-8-11
  * @brief   This file provides the interface of the actuator of quadrotor
  ******************************************************************************
  * @attention
  *             None
  ******************************************************************************
  */
#ifndef __MOTOR_H__
#define __MOTOR_H__


#include "algorithm.h"
#include "bsp.h"
#include "control.h"
#include "sys_params.h"

typedef struct
{
  uint16_t motor1;
	uint16_t motor2;
	uint16_t motor3;
	uint16_t motor4;
}MOTOR_DataType;

void Motor_SetPWM(CTRL_DataType *control_data,MOTOR_DataType *motor,const sys_params_t sys_param);
void Motor_MaxThrust(MOTOR_DataType *motor);
void Motor_MinThrust(MOTOR_DataType *motor);
void Motor_Constraint(MOTOR_DataType *motor);
void Motor_Smooth(MOTOR_DataType *motor);



#endif /* __MOTOR_H__ */
