#include "Interface445.h"
#include "Implementation445.h"

Interface::Interface(int v)
    : ptr(new Implementation(v))
{
    // empty
}


void Interface::setValue(int v)
{
    ptr->setValue(v);
}

int Interface::getValue() const
{
    return ptr->getValue();
}

Interface::~Interface()
{
    delete ptr;
}

