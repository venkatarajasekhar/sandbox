#include <iomanip>
#include "PhoneNumber460.h"

using namespace std;


ostream &operator<<(ostream &output, const PhoneNumber &number)
{
    output << "(" << number.areaCode << ") "
        << number.exchange << "-" << number.line;
    return output;                                          // enable cascading
}

istream &operator>>(istream &input, PhoneNumber &number)
{
    input.ignore();                                         // skip (
    input >> setw(3) >> number.areaCode;                    // read 3 char
    input.ignore(2);                                        // skip ) and space
    input >> setw(3) >> number.exchange;                    // read 3 char
    input.ignore();                                         // skip dash (-)
    input >> setw(4) >> number.line;                        // read 4 char
    return input;                                           // enable cascading
}
