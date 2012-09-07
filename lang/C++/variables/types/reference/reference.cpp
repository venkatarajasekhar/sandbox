#include <iostream>

using namespace std;


// reference are like pointers, except there is not specific notation. 
// They need to be assigned to their variable at initialization
//
// reference ~ alias
//
// Beware of dangling references
// ex: a function returns a reference to what was a local variable !!!
//



int main (){

  int count =3;
  int *p_count;
  // int &r_count;					// error: must be initialized !
  int &r_count = count;					// r_count refers to (is an alias for) count

  int count2;

  p_count = &count;

  //&r_count = count;

  count2 = count;

  cout << "count    = " << count << endl;
  cout << "count2   = " << count2 << endl;
  cout << "*p_count = " << *p_count << endl;
  cout << "p_count  = " << p_count << endl;
  cout << "r_count  = " << r_count << endl;
  cout << "&r_count = " << &r_count << endl;
  cout << "&count   = " << &count << endl;

 
  count = 444;
  r_count = *p_count + 12;

  cout << endl; 
  cout << "count    = " << count << endl;
  cout << "count2   = " << count2 << endl;
  cout << "*p_count = " << *p_count << endl;
  cout << "r_count  = " << r_count << endl;




  return 0;





}
