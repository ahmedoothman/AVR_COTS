################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include RTOS_STACK/TMU/subdir.mk
-include MCAL/WDT/subdir.mk
-include MCAL/UART/subdir.mk
-include MCAL/TIMER/subdir.mk
-include MCAL/SPI/subdir.mk
-include MCAL/I2C/subdir.mk
-include MCAL/GIE/subdir.mk
-include MCAL/EXI/subdir.mk
-include MCAL/DIO/subdir.mk
-include MCAL/ADC/subdir.mk
-include HAL/TRANSISTORS/subdir.mk
-include HAL/TEMPS/subdir.mk
-include HAL/SWITCHES/subdir.mk
-include HAL/STM/subdir.mk
-include HAL/SSD/subdir.mk
-include HAL/SERVO/subdir.mk
-include HAL/LED/subdir.mk
-include HAL/LDR/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/KEYPAD/subdir.mk
-include HAL/EEPROM/subdir.mk
-include HAL/DCM/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
COTS_backup_v1.1.lss \

FLASH_IMAGE += \
COTS_backup_v1.1.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: COTS_backup_v1.1.elf secondary-outputs

# Tool invocations
COTS_backup_v1.1.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,COTS_backup_v1.1.map -mmcu=atmega32 -o "COTS_backup_v1.1.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

COTS_backup_v1.1.lss: COTS_backup_v1.1.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S COTS_backup_v1.1.elf  >"COTS_backup_v1.1.lss"
	@echo 'Finished building: $@'
	@echo ' '

COTS_backup_v1.1.hex: COTS_backup_v1.1.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex COTS_backup_v1.1.elf  "COTS_backup_v1.1.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: COTS_backup_v1.1.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 COTS_backup_v1.1.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) COTS_backup_v1.1.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
