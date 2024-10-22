#ifndef ANALOG_INPUT_5_H
#define ANALOG_INPUT_5_H

#include "T_Pin_Voltage_5.h"

typedef struct {
    void (*Get_Voltage) ( T_Pin_Voltage_5* voltage );
} Analog_Input_5;

#endif