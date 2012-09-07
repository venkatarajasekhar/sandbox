#include <iostream>

#include "crectangle.h"

using namespace std;

int main () {
    CPolygon toto(12,13);

    CRectangle rect, rectb;
    rect.set_values(2,3);
    rectb = duplicate(rect);				        // Notive how the friend function is called (as a function ! )
    cout << rectb.area() << endl;
}
