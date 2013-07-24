#include <iostream>
#include <stdexcept>

#include "Time436.h"

using namespace std;


int main()
{
    Time t;

    t.setHour(18).setMinute(30).setSecond(22);          // cascaded function call

    cout << "Universal time: ";
    t.printUniversal(); 

    cout << "\nStandard time: ";
    t.printStandard();

    cout << "\nNew standard time: ";
    t.setTime(20,20,20).printStandard();                // cascade function call

    cout << endl;
}
    


