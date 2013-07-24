#include <iostream>
#include <cstdlib>
#include "template.h"

using namespace std;


int main()
{
  int int1, int2, int3;
  double double1, double2, double3;
  char char1, char2, char3;

  cout << "Enter 3 int values: " << endl;
  cin >> int1 >> int2 >> int3;
  cout << "Max = " << maximum(int1, int2, int3) << endl;

  cout << "Enter 3 double values : " << endl;
  cin >> double1 >> double2 >> double3;
  cout << "Max = " << maximum(double1, double2, double3) << endl;

  cout << "Enter 3 char values : " << endl;
  cin >> char1 >> char2 >> char3;
  cout << "Max = " << maximum(char1, char2, char3) << endl;

  return EXIT_SUCCESS;

}
