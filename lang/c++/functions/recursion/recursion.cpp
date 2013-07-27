#include <iostream>
#include <iomanip>

using namespace std;

// Every recursion can be computed as an iteration !
// recursion is prefered over iteration when iterative solution is not apparent
// BEWARE: recursions use more resources than iterations


unsigned long factorial_recursion (unsigned long);
unsigned long factorial_iteration (unsigned long);


int main ()
{
int counter;

    cout << "Recursive method" << endl;
    for (counter=0; counter <= 10; ++counter) 
        cout << setw(2) << counter << "! = " << factorial_recursion (counter) 
		<<endl;

    cout << endl << "Iterative method" << endl;
    for (counter=0; counter <= 10; ++counter) 
        cout << setw(2) << counter << "! = " << factorial_iteration (counter) << endl;
}



unsigned long factorial_recursion (unsigned long number)
{
    if (number<=1) return 1;
    else 
        return number * factorial_recursion(number-1);		// adds overhead of function call ( + memory usage for variable )
								// recurse to simpler and simpler version of the function
}

unsigned long factorial_iteration ( unsigned long number)
{
    unsigned result = 1;
    
    for (unsigned long i = number; i>=1; --i)
        result *= i;

    return result;
}


        
        
