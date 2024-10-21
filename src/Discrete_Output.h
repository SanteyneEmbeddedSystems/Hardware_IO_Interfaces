#ifndef DISCRETE_OUTPUT_H
#define DISCRETE_OUTPUT_H

#include "E_IO_Level.h"

/* Client_Server_Interface */
/* Gathers operations allowing to manage an digital hardware output. */
typedef struct {
    /* Synchronous_Operation */
    void (*Set_Level) ( E_IO_Level level );
} Discrete_Output;

#endif