#include <iostream>
#include <cstdlib>



using namespace std;

int number = 10;

int number2 = 20;


int main()
{

  double number = 5.34;

  cout << "Local variable :   number  = " << number << "\t\t<-- local has same name as global variable" << endl;
  cout << "Global variable: ::number  = " << ::number << "\t\t<-- global still accessible !" << endl;
  cout << endl; 
  cout << "Global variable:   number2 = " << number2 << endl;
  cout << "Global variable: ::number2 = " << ::number2 << "\t\t<-- for ease of reading always use this notation for global vars" <<  endl;

  return EXIT_SUCCESS;
}

  


