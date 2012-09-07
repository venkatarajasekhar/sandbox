#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>


using namespace std;

int main()
{
    const int vectSize = 10;
    vector <int> vectObj1(vectSize);
    int i;

    for (i=0; i<vectSize; ++i)
        vectObj1[i] = i;

    vector <int> vectObj2(vectObj1);                // Look at this line ! Copy constructor is used here !

    for (i=0; i<vectObj2.size(); ++i)
        cout << vectObj2.at(i) << " " ;
    cout << endl;

    return EXIT_SUCCESS;

}
