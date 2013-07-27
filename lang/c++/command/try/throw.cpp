#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;


// check Time.cpp in C++ class 

void throwException ()
{
    throw invalid_argument("hour, minute, and/or second was out of range");
}

int main()
{
    try 
    {
        cout << "Execute this line!" <<endl;
        throwException();
        cout << "Do not execute this line!";
    }
    catch (invalid_argument &e)
    {
        cout << "Exception: " << e.what() << endl;
    }
    cout << "Execute this line!" <<endl;
}



