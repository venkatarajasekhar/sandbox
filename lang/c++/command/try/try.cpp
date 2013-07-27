// exceptions
#include <iostream>
#include <stdexcept>
#include <cstdlib>

using namespace std;

int main () {
    try
    {
        throw 20;
    }
    catch (int e)
    {
        cout << "An exception occurred. Exception Nr. " << e << endl;
    }
    cout << "Finally (executed for caught exception }" << endl;
  
    return EXIT_SUCCESS;
}
