################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AbstractCar.cpp \
../src/AutoDealer.cpp \
../src/Car.cpp \
../src/CarFactory.cpp \
../src/Main.cpp 

OBJS += \
./src/AbstractCar.o \
./src/AutoDealer.o \
./src/Car.o \
./src/CarFactory.o \
./src/Main.o 

CPP_DEPS += \
./src/AbstractCar.d \
./src/AutoDealer.d \
./src/Car.d \
./src/CarFactory.d \
./src/Main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


