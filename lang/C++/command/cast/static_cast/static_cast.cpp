#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

int main ()
{
  int gradeCounter=5;
  int total=19;
  int int_average;
  double double_average;
  int i;

  int_average = 0;
  double_average = 0.0;

  cout << "Average (=1/10 + ... + 10/10)" << endl;

  for (i=1; i<=10; i++) {
     int_average += i / 10;
  }
  cout << "Without cast = " << int_average << endl;

  cout << fixed << setprecision(2);
  cout << "precision (@2) test " << 1.345 <<endl;
 
  double_average = static_cast<double> (total) / gradeCounter;			         // explicit conversion of total --> implicit conversion (promotion) of gradeCounter

  cout << "19/5 with static_cast<double> " << double_average << endl;

  cout << "A= " << 'A' << " --> A with static_cast<int> = " << static_cast<int>('A') << endl;

  return 0;

}

