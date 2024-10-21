#ifndef ANALOGIC_INPUT_5_H
#define ANALOGIC_INPUT_5_H

#include "T_Voltage_5.h"

/* Client_Server_Interface */
/* Gathers operations allowing to manage an analog hardware input with a maximum
 voltage of 5. */
typedef struct {
    /* Synchronous_Operation */
    void (*Get_Voltage) ( T_Voltage_5* voltage );
} Analogic_Input_5;

#endif