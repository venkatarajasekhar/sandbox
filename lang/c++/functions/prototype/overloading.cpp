#include <iostream>

using namespace std;

int square(int x) 
{
  return x*x;
}

double square(double y)
{
  return y*y;
}

void nothing(int a, float b, char c, int &d)
{
}

int empty(char a, int b, float &c, double &d) 
{
  return 0;
}

int main()
{
  int x=5;
  double y=5.1;

  cout << " square of " << x << " is " << square(x) << endl;
  cout << " square of " << y << " is " << square(y) << endl;
}

