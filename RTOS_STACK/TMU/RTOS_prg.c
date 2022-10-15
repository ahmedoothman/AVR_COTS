/*
 * RTOS_prg.c
 *
 *  Created on: Oct 3, 2022
 *      Author: Dell
 */
#include "../../LIB/std_types.h"
#include "../../LIB/bit_map.h"
#include "../../MCAL/TIMER/TIMER_int.h"

#include "RTOS_pri.h"
#include "RTOS_cfg.h"
#include "RTOS_int.h"
static volatile u32 G_u32Tick_Counts = 0;
TASK TASKS[RTO_NUMBER_OF_TASKS];
void RTOS_vStartSchedular(void)
{
    TIMER_vInit(TIMER_USED);
}
void RTOS_vInit(void)
{
    TIMER_vDelayMS(TIMER_USED, 1000, &RTOS_vScheduler);
}
void RTOS_vCreateTask(u8 A_u8Priority, u16 A_u16Periodicity, FUNC_PTR_IV_OV F_ptr)
{
    TASKS[A_u8Priority].u16Periodicity = A_u16Periodicity;
    TASKS[A_u8Priority].PFun = F_ptr;
}
static void RTOS_vScheduler(void)
{
    G_u32Tick_Counts++;
    u8 L_u8Counter;
    for (L_u8Counter = 0; L_u8Counter < RTO_NUMBER_OF_TASKS; L_u8Counter++)
    {
        if (G_u32Tick_Counts % TASKS[L_u8Counter].u16Periodicity == 0)
        {
            TASKS[L_u8Counter].PFun();
        }
        else
        {
            /* do nothing */
        }
    }
}