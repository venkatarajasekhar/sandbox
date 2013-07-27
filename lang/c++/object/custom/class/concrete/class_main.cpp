#include <iostream>
#include "class_interface.h"

using namespace std;

int main()
{
  Shell   myShell;					// <-- default constructor is used 
  Object1 myObject1("message at init");			// constructor is used here
  string message;

  cout << "max = " << myObject1.max(1,3,8) <<endl;

  cout << "Enter line:" <<endl;
  getline(cin, message);
  cout << endl;

  myObject1.setMessage(message);
  myObject1.displayMessage();
  myObject1.determineAverage();
}
		
