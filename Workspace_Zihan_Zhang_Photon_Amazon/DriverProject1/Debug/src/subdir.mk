################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/AbstractCompanyAPI.cpp \
../src/AbstractItemAPI.cpp \
../src/AbstractPersonAPI.cpp \
../src/Amazon.cpp \
../src/AmazonEmployee.cpp \
../src/BaseCompany.cpp \
../src/BaseEmployee.cpp \
../src/BaseItem.cpp \
../src/BasePerson.cpp \
../src/DriverProject1.cpp \
../src/IWatchItem.cpp \
../src/IpadItem.cpp \
../src/IphoneItem.cpp \
../src/MacBookItem.cpp 

OBJS += \
./src/AbstractCompanyAPI.o \
./src/AbstractItemAPI.o \
./src/AbstractPersonAPI.o \
./src/Amazon.o \
./src/AmazonEmployee.o \
./src/BaseCompany.o \
./src/BaseEmployee.o \
./src/BaseItem.o \
./src/BasePerson.o \
./src/DriverProject1.o \
./src/IWatchItem.o \
./src/IpadItem.o \
./src/IphoneItem.o \
./src/MacBookItem.o 

CPP_DEPS += \
./src/AbstractCompanyAPI.d \
./src/AbstractItemAPI.d \
./src/AbstractPersonAPI.d \
./src/Amazon.d \
./src/AmazonEmployee.d \
./src/BaseCompany.d \
./src/BaseEmployee.d \
./src/BaseItem.d \
./src/BasePerson.d \
./src/DriverProject1.d \
./src/IWatchItem.d \
./src/IpadItem.d \
./src/IphoneItem.d \
./src/MacBookItem.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -std=c++0x -std=c++11 -D__GXX_EXPERIMENTAL_CXX0X__ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


