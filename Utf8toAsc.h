#ifndef UTF8_TO_ASC_BASE_INCLUDED
#define UTF8_TO_ASC_BASE_INCLUDED

#include <inttypes.h>

class Utf8toAsc
{
public:
    virtual uint8_t translate(uint8_t value) = 0;
};

class Utf8toAscDefault: public Utf8toAsc
{
public:
    virtual uint8_t translate(uint8_t value);

    static Utf8toAscDefault* getInstance();

private:
    static Utf8toAscDefault g_instance;
};


#endif // UTF8_TO_ASC_BASE_INCLUDED
