#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Time419.h"

using namespace std;

// all args have default value (see prototype) to 0,0,0 
// A constructor that can be called without any argument (none or all have default value) = default constructor !

// We use the mutator/accessor internally so that if we decide to change the storage method, 
// we can without changing any methods (be the mutator and accessor !)

Time::Time(int hour, int minute, int second)                                            
        : usec(30)
{
    //hour = minute = second = 0;
    setTime(hour, minute, second);

}

void Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}


// Mutators

void Time::setHour(int h)
{
    if (h>=0 && h<24)
        hour = h;
    else
        throw invalid_argument("hour must be 0-23");
}
void Time::setMinute(int m)
{
    if (m>=0 && m<60)
        minute = m;
    else
        throw invalid_argument("minute must be 0-59");
}
void Time::setSecond(int s)
{
    if (s >=0 && s<60)
        second = s;
    else
        throw invalid_argument("second must be 0-59");
}

// Accessors

int Time::getHour() const
{
    return hour;
}

int Time::getMinute() const
{
    return minute;
}

int Time::getSecond() const
{
    return second;
}


void Time::printUniversal() const
{
    cout << setfill('0') 
        << setw(2) << getHour() << ":"
        << setw(2) << getMinute() << ":" 
        << setw(2) << getSecond() 
        << ( getHour() < 12 ? " AM" : " PM");
}


void Time::printStandard() const
{
    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() %12) << ":"
        << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
        << getSecond() << ( getHour() < 12 ? " AM" : " PM");
}

void Time::printStandardNonConst()
{
    cout << ((getHour() == 0 || getHour() == 12) ? 12 : getHour() %12) << ":"
        << setfill('0') << setw(2) << getMinute() << ":" << setw(2)
        << getSecond() << ( getHour() < 12 ? " AM" : " PM");
}
