#ifndef DISCRETE_INPUT_H
#define DISCRETE_INPUT_H

#include "E_IO_Level.h"

/* Client_Server_Interface */
/* Gathers operations allowing to manage an digital hardware input. */
typedef struct {
    /* Synchronous_Operation */
    void (*Get_Level) ( E_IO_Level* level );
} Discrete_Input;

#endif