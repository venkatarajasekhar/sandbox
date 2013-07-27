#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()

{

    const int arraySize = 7;
    int frequency[arraySize] = {};		// inita elements to 0

    srand( time(0) );				// seed random number generator

    for (int roll = 1; roll <= 6000000; roll++) 
        ++frequency[1+rand() % 6];


    cout << "Face" << setw(13) << "Frequency" <<endl;


    for (int face = 1; face < arraySize; face++)
        cout << setw(4) << face << setw(13) << frequency[face] << endl;

}
