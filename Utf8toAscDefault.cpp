#include "Utf8toAsc.h"

#if defined(ARDUINO) && ARDUINO >= 100
    #include "Arduino.h"
#else
    #include "WProgram.h"
#endif

Utf8toAscDefault Utf8toAscDefault::g_instance;

inline uint8_t Utf8toAscDefault::translate(uint8_t value)
{
    return value;
}

Utf8toAscDefault* Utf8toAscDefault::getInstance()
{
    return &g_instance;
}
