#include <iostream>
#include "class_interface.h"

using namespace std;

Object1::Object1(string msg)					// non default constructor !! returns nothing not even void !!
{ 
  setMessage(msg) ; 
}

void Object1::displayMessage()
{ 
  cout << ">" << message << "<" << endl; 
}

void Object1::setMessage(string msg)				// mutator =  set function
{ 
  if (msg.length() <=25 ) {
    message = msg; 
  } else {
    message = msg.substr(0,25);
    cout << "Name \"" << msg << "\" exceeds maximum length (25).\n" << endl;
  }
} 

string Object1::getMessage()					// accessor = get function
{ 
  return message; 
}

void Object1::determineAverage() 
{
  int total;
  int gradeCounter;
  int grade;
  double average;

  total = 0;
  gradeCounter = 0;

  cout << "Enter grade or -1 to quit: ";
  cin >> grade;

  while(grade != -1)
  {
    total = total + grade;
    gradeCounter = gradeCounter +1;

    cout << "Enter grade or -1 to quit: ";
    cin >> grade;
  } // end while

  if (gradeCounter != 0)
  {
    average = static_cast<double> (total) / gradeCounter;
    cout << "\nTotal of all " << gradeCounter << " grades entered is "
         << total << endl;
  }
  else
    cout << "No grades were entered" <<endl;
}

int Object1::max(int i, int j, int k)
{
  int max = i;

  if (j>max) max = j;
  if (k>max) max = k;

  return k;

}
