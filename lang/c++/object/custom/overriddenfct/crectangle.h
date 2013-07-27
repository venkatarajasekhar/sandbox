#ifndef CRECTANGLE_H
#define CRECTANGLE_H

#include "cpolygon.h"

class CRectangle: public CPolygon {			        // CRectangle is derived from the Cpolygon class  
    friend CRectangle duplicate (CRectangle);		// friend function (not a member of the class !, can access protected/private members

    public:
        int area()						            // a member function of the class CRectangle = a method 
            { return(width*height);}
        void set_values(int a, int b);              // a base class member function to be overwritten!
};
#endif
