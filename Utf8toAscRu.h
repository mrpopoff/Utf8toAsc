#ifndef UTF8_TO_ASC_RU_INCLUDED
#define UTF8_TO_ASC_RU_INCLUDED

#include "Utf8toAsc.h"

class Utf8toAscRu: public Utf8toAsc
{
public:
    virtual uint8_t translate(uint8_t value);

private:
    uint8_t utf_hi_char; // UTF-8 high part
};

#endif // UTF8_TO_ASC_RU_INCLUDED