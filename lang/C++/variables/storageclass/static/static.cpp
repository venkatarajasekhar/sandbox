#include <iostream>

using namespace std;

void staticArrayInit (void);
void automaticArrayInit (void);
const int arraySize = 3;


// static var are initialized only at the first pass
// The second time the variable is 'init', it is actually recalled (with previous values)





int main()
{
	cout << "First call to each fucntion:\n";
   	staticArrayInit();
	automaticArrayInit();

	cout << "\n\nSecond call to each function:\n";
	staticArrayInit();
	automaticArrayInit();
	cout << endl;
}



void staticArrayInit(void)
{
	static int array1[arraySize];
	int i=0;
	int k=0;

	cout << "\nValues on entering staticArrayInit:\n";

	for (i=0; i<arraySize; ++i)
		cout << "array1[" << i << "] = " << array1[i] << " ";

	cout << "\nValues on exiting staticArrayInit:\n";

	for (k=0; k<arraySize; ++k) {
		array1[k] += 5;
		cout << "array1[" << k << "] = " << array1[k] << " ";
	}
}

void automaticArrayInit(void)
{
	int array2[arraySize] = { 1, 2, 3 };
	int i;
	int j;

	cout << "\nValues on entering automaticArrayInit:\n";


	for (i=0; i<arraySize; ++i)
		cout << "array2[" << i << "] = " << array2[i] << " ";

	cout << "\nValues on exiting automaticArrayInit:\n";

	for (j=0; j<arraySize; ++j) {
		array2[j] += 5;
		cout << "array2[" << j << "] = " << array2[j] << " ";
	}
}


