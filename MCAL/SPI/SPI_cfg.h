/*
 * SPI_cfg.h
 *
 *  Created on: Sep 24, 2022
 *      Author: Dell
 */

#ifndef MCAL_SPI_SPI_CFG_H_
#define MCAL_SPI_SPI_CFG_H_

/*
    Data Order Options:

    MSB_FIRST
    LSB_FIRST

 */
#define MASTER_DATA_ORDER_MODE LSB_FIRST
#define SLAVE_DATA_ORDER_MODE LSB_FIRST

/*
    CLOCK POLARITY :

    LEADING_RISING_TRAILLING_FALLING
    LEADING_FALLING_TRAILLING_RISING

 */
#define MASTER_CLK_POL LEADING_RISING_TRAILLING_FALLING
#define SLAVE_CLK_POL LEADING_RISING_TRAILLING_FALLING

/*
    CLOCK PHASE:

    LEADING_SAMPLE_TRAILLING_SETUP
    LEADING_SETUP_TRAILLING_SAMPLE

 */
#define MASTER_CLK_PHASE LEADING_SAMPLE_TRAILLING_SETUP
#define SLAVE_CLK_PHASE LEADING_SAMPLE_TRAILLING_SETUP

/*
    CLOCK RATE SELECT:
    SPSR_PRESCALE_4
    SPCR__PRESCALE_4
    SPSR_PRESCALE_16
    SPCR_PRESCALE_16
    SPSR_PRESCALE_64
    SPCR_PRESCALE_64
    SPSR_PRESCALE_128
    SPCR_PRESCALE_128

    SPSR_PRESCALE_2
    SPCR_PRESCALE_2
    SPSR_PRESCALE_8
    SPCR_PRESCALE_8
    SPSR_PRESCALE_32
    SPCR_PRESCALE_32
    SPSR_PRESCALE_64
    SPCR_PRESCALE_64
 */

#define MASTER_CLK_FREQ_SPCR SPCR_PRESCALE_2
#define MASTER_CLK_FREQ_SPSR SPSR_PRESCALE_2

#define SLAVE_CLK_FREQ_SPCR SPCR_PRESCALE_2
#define SLAVE_CLK_FREQ_SPSR SPSR_PRESCALE_2

#endif /* MCAL_SPI_SPI_CFG_H_ */
