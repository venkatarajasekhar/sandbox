#include <iostream>
#include <iomanip>
#include <vector>
#include <stdexcept>

using namespace std;

void printVector(const vector<int> &);				                // display the vector
void inputVector(vector<int> &);				                    // input values into the vector


int main()
{
    vector<int> integers1(7);
    vector<int> integers2(10);

    cout << "Size of vector interfers is " << integers1.size()
        << "\nvector after initializaion:" <<endl;

    printVector(integers2);

    cout << "\nEnter 17 integers:" <<endl;
    inputVector(integers1);
    inputVector(integers2);

    cout << "\nAfter input, the vectors contain:\n"
        << "integers1:" << endl;
    printVector(integers1);

    cout << "integers2:" <<endl;
    printVector(integers2);

    if (integers1 != integers2)
        cout << "integers1 and integers2 are not equal" <<endl;

    vector<int> integers3 (integers1);                              // copy constructor

    cout << "\nSize of vector integers3 is " << integers3.size()
        << "\n vector after init:" << endl;
    printVector(integers3);

    cout << "\nAssigning integers2 to integers1:" << endl;
    integers1 = integers2;                                          // assign integers2 to integers1

    cout << "integers1:" << endl;
    printVector(integers1);

    cout << "integer2:" <<endl;
    printVector(integers2);

    cout << "\nEvaluating: integers1 == integers2" <<endl;

    if (integers1 == integers2)
        cout << "\nintegers1 and integers2 are equal" <<endl;

    cout << "\nintegers1[5] is " << integers1[5];
    
	cout << "\n\nAssigning 100 to integers1[5]" << endl;
    integers1[5] = 1000;

    cout << "integers1:" << endl;
    printVector(integers1);

	try
	{
		cout << "\nAttempt to display integers1.at(15)" <<endl;
		cout << integers1.at(15) <<endl;							// ERROR: out of range
	} // end try
	catch (out_of_range& ex)
	{
		cout << "An exception occurred: " << ex.what() << endl;
	} // end of catch

} 










void printVector(const vector<int> &array)
{
    size_t i;
    for (i=0; i<array.size(); ++i)
    {
        cout << setw(12) << array[i];
        if ((i+1) % 5 == 0)				// 5 values per row
            cout <<endl;

    }

    if (i%4 !=0)
        cout <<endl;
}

void inputVector(vector <int> &array)
{
    for (size_t i=0; i < array.size(); ++i)
        cin >> array[i];
}
