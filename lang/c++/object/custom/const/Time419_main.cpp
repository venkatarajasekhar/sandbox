#include <iostream>
#include <stdexcept>

#include "Time419.h"

using namespace std;


int main()
{
    Time wakeUp(6,45,0);
    const Time noon(12,0,0);

    wakeUp.setHour(18);

    //noon.setHour(12);                         // !!! compiler error: set a const object

    wakeUp.getHour();                           // non-const object CAN call 

    noon.getMinute();                           // const object + const method
    noon.printUniversal(); 
    cout << endl;
    //noon.printStandardNonConst();             // !!! const object cannot call non-const member function!
}
    


