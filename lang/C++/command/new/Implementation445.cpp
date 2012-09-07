#include "Implementation445.h"

Implementation::Implementation(int v)
            : value(v)
{
    // empty body
}

void Implementation::setValue(int v)
{
    value = v;                          // should balidate v
}

int Implementation::getValue() const
{
    return value;
}

