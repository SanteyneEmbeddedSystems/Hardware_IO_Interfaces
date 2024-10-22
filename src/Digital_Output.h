#ifndef DIGITAL_OUTPUT_H
#define DIGITAL_OUTPUT_H

#include "E_IO_Level.h"

typedef struct {
    void (*Set_Level) ( E_IO_Level level );
} Digital_Output;

#endif