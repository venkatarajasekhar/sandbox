#include <iostream>

using namespace std;

int main () {
  string s;

  s = "toto tata titi tutu toutou";

  cout << s << " <-- length = " << s.length() << endl;

  cout << s.substr(10, 15) << endl;


  return 0;

  

}

