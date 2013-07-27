#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

int main()
{
    vector<int> integers1(7);


    try
    {
        cout << "\nAttempt to display integers1.at(15)" <<endl;
        cout << integers1.at(15) <<endl;                                                        // ERROR: out of range
    } // end try
    catch (out_of_range &ex)
    {
        cout << "An exception occurred: " << ex.what() << endl;
    } // end of catch

    cout << "Finally (for caught exception only)" << endl;

}



