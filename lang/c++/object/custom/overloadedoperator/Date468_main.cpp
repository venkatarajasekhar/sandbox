#include <iostream>
#include "Date468.h"

using namespace std;

int main()
{
    Date d1(12, 27, 2012);
    Date d2;                                                    // defaults to January 1, 1900

    cout << "d1 is " << d1 << "\nd2 is " << d2;
    cout << "\n\nd1 += 7 is " << ( d1 += 7);

    d2.setDate(2, 28, 2008);

    cout << "\n\n  d2 is " << d2;

    cout << "\n++d2 is " << ++d2 << " (leap year allos 29th)";

    Date d3 (7, 13, 2012);

    cout << "\n\nTesting the prefix increment operator:\n"
        << "  d3 is " << d3 << endl;
    cout << "++d3 is " << ++d3 << endl;
    cout << "  d3 is " << d3 << endl;


    cout << "\n\nTesting the postfix increment operator:\n"
        << "  d3 is " << d3 << endl;
    cout << "d3++ is " << d3++ << endl;
    cout << "  d3 is " << d3 << endl;
}
