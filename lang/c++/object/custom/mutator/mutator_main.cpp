#include <iostream>
#include <stdexcept>
#include "mutator.h"

using namespace std;


int main()
{
    Time t;

    Time arrayOfTimes[5];                                           // array of 5 Time objects
    Time &dinnerTime = t;                                           // refernece to a Time object
    Time *timePtr = &dinnerTime;                                    // pointer to a Time object

    cout << "The initial univesal time is ";
    t.printUniversal();
    cout << "\nThe initial standard time is ";
    t.printStandard();

    t.setTime(13,27,6);

    cout << "\n\nUniversal time after setTime is ";
    t.printUniversal();
    cout << "\nStandard time after setTime is ";
    t.printStandard();

    try
    {
        t.setTime(99,99,99);                                        // All values out of range ! Trigger exception
    }
    catch (invalid_argument &e)
    {
        cout << "Exception: " << e.what() << endl;
    }

    cout << "\n\nAfter attempting invalid setting: "
        << "\nUniversal time: ";
    t.printUniversal();
    cout << "\nStandard time: ";
    t.printStandard();
    cout << endl;
}
    


