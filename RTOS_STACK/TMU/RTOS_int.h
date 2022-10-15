/*
 * RTOS_int.h
 *
 *  Created on: Oct 3, 2022
 *      Author: Dell
 */

#ifndef RTOS_STACK_RTOS_INT_H_
#define RTOS_STACK_RTOS_INT_H_

void RTOS_vStartSchedular(void);
void RTOS_vInit(void);
void RTOS_vCreateTask(u8 A_u8Priority, u16 A_u16Periodicity, FUNC_PTR_IV_OV F_ptr);
static void RTOS_vScheduler(void);
#endif /* RTOS_STACK_RTOS_INT_H_ */
