#include <iostream>
#include <string>
#include <stdexcept>

#include "Date468.h"

using namespace std;

const int Date::days[] =
    { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

Date::Date (int month, int day, int year)
{
    setDate(month, day, year);
}

void Date::setDate(int mm, int dd, int yy)
{
    if (mm>= 1 && mm <=12)
        month = mm;
    else
        throw invalid_argument("month must be 1-12");

    if ( yy>= 1900 && yy <= 2100)
        year = yy;
    else
        throw invalid_argument("Year must be >= 1900 and <= 2100");

    if ((month == 2 && leapYear(year) && dd >=1 && dd<= 29) ||
            (dd >= 1 && dd <= days[month] ))
        day = dd;
    else
        throw invalid_argument(
            "Day is out of range for current month and year");
}

Date &Date::operator++()                                                        // overload of prefix increment operator (++a)
{
    helpIncrement();                                                            // increment *this
    return *this;                                                               // and return *this
}

Date Date::operator++(int)                                                      // overload of postfix increment operator (a++)
{                                                                               // notice that dummy parameter is not used, so ( <- different mangling !) 

    Date temp = *this;                                                          // make a copy of *this
    helpIncrement();                                                            // increment *this

    return temp;                                                                // return copy (and not *this !!)
}

const Date &Date::operator+=(int additionalDays)        // why const?
{
    for (int i=0; i<additionalDays; ++i)
        helpIncrement();

    return *this;
}

bool Date::leapYear(int testYear)
{
    if (testYear % 400 == 0 ||
        ( testYear % 100 != 0 && testYear % 4 == 0))
        return true;
    else    
        return false;
}

bool Date::endOfMonth( int testDay) const
{
    if (month == 2 && leapYear(year))
        return testDay == 29;                                                   // last day of february in leap year
    else
        return testDay == days[month];
}

void Date::helpIncrement()
{
    if ( !endOfMonth(day))
        ++day;
    else
        if ( month < 12 )
        {
            ++month;
            day = 1;
        }
        else
        {
            ++year;
            month = 1;
            day = 1;
        }
}

ostream &operator<<(ostream &output, const Date &d)                             // overload of output operator
{
    static string monthName[13] = { "", "January", "February",
        "March", "April", "May", "June", "July", "August",
        "September", "October", "November", "December" };

    output << monthName[d.month] << ' ' << d.day << ", " << d.year;
    return output;
}





















