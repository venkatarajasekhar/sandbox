#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "constructor.h"

using namespace std;

// all args have default value (see prototype) to 0,0,0 
// A constructor that can be called without any argument (none or all have default value) = default constructor !

Time::Time(int hour, int minute, int second)                                            
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

void Time::printUniversal()
{
    cout << setfill('0') 
        << setw(2) << hour << ":"
        << setw(2) << minute << ":" 
        << setw(2) << second 
        << ( hour < 12 ? " AM" : " PM");
}


void Time::printStandard()
{
    cout << ((hour == 0 || hour == 12) ? 12 : hour %12) << ":"
        << setfill('0') << setw(2) << minute << ":" << setw(2)
        << second << ( hour < 12 ? " AM" : " PM");
}

