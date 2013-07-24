#include <iostream>

#include "crectangle.h"

using namespace std;

void CRectangle::set_values (int a, int b) {
    width = a;
    height = b;
}

CRectangle duplicate (CRectangle rectparam) {		// friend is defined as a function, not as a method!
    CRectangle rectres;
    rectres.width = rectparam.width*2;
    rectres.height = rectparam.height*2;
    return(rectres);
};

