#include <iostream>
#include <cstdlib>

using namespace std;

int squareByValue(int);				// value pass
void squareByReference(int &);			// reference pass




int main(int argc, char **argv) 
{

  int x = 2;
  int y = 3;
  int z = 4;

  cout << endl << "Pass per value" << endl; 
  cout << "x      = " << x << endl;
  cout << "square = " << squareByValue(x) << endl;
  cout << "x      = " << x << "    <-- x is same as before" << endl;

  cout << endl << "Pass per reference" << endl; 
  cout << "y      = " << y << endl;
  squareByReference(y);
  cout << "y      = " << y << "    <-- y has been squared! " << endl;

  cout << endl << "Pass per pointer" << endl; 

  return EXIT_SUCCESS; 
}


int squareByValue(int val)
{
  return val*=val;				// value val is not changed !
}

void squareByReference( int &valRef)
{
  valRef *= valRef;				// modfied in place
						// no return
}








