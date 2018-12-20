################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Item.cpp \
../src/Walmart.cpp \
../src/Walmart1.cpp 

OBJS += \
./src/Item.o \
./src/Walmart.o \
./src/Walmart1.o 

CPP_DEPS += \
./src/Item.d \
./src/Walmart.d \
./src/Walmart1.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


