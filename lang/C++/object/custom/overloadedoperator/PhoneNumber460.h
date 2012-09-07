#ifndef PHONENUMBER_H
#define PHONENUMBER_H

#include <iostream>
#include <string>

using namespace std;

// friend functions return a reference on global object (like cin / cout / cerr )
// In general beware of not returning a reference to a local variable i
// (then the reference would not refer to anything !)   

class PhoneNumber
{
    friend ostream &operator<<(ostream &, const PhoneNumber &);
    friend istream &operator>>(istream &, PhoneNumber &);

    private:
        string areaCode;    // 3-digit
        string exchange;    // 3-digit exchange
        string line;        // 4-digit line
};
#endif
