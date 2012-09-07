#include <iostream>
#include "PhoneNumber460.h"

using namespace std;

int main()
{
    PhoneNumber phone;

    cout << "Enter phone number in the for (123) 456-7890:" << endl;

    cin >> phone;

    cout << "The phone number entered was: ";

    cout << phone << endl;
}
