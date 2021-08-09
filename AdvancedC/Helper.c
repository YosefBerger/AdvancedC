#pragma once
#include "Helper.h"

#define BITS_IN_BYTE 8

int NumberOfBits(int bytes)
{
    int result = 0;

    if (bytes > 0)
    {
        result = BITS_IN_BYTE * bytes;
    }

    return result;
}