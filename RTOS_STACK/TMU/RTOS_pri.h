/*
 * RTOS_pri.h
 *
 *  Created on: Oct 3, 2022
 *      Author: Dell
 */

#ifndef RTOS_STACK_RTOS_PRI_H_
#define RTOS_STACK_RTOS_PRI_H_

typedef struct
{
    u16 u16Periodicity;
    FUNC_PTR_IV_OV PFun;
} TASK;

#endif /* RTOS_STACK_RTOS_PRI_H_ */
