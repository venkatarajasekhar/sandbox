#include <iostream>

using namespace std;

// Inline functions are copied as if by the compiler in place they are being used
// ~ preprocessor #define directive for function
// only in C++

inline double cube (const double side)			// side is not changed in the function
{
  return side * side  * side;

}

int main() 
{
  double sideValue;
  cout << "Enter the side length of your cube: ";
  cin >> sideValue;

  cout << "Volume of cube with side " << sideValue << " is " << cube(sideValue) << endl;
}
