#ifndef DIGITAL_INPUT_H
#define DIGITAL_INPUT_H

#include "E_IO_Level.h"

typedef struct {
    void (*Get_Level) ( E_IO_Level* level );
} Digital_Input;

#endif