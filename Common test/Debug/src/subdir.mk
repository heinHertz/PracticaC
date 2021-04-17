################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Common\ test.c 

OBJS += \
./src/Common\ test.o 

C_DEPS += \
./src/Common\ test.d 


# Each subdirectory must supply rules for building sources it contributes
src/Common\ test.o: ../src/Common\ test.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Common test.d" -MT"src/Common\ test.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


