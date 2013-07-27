#include <iostream>
#include <cstdlib>

using namespace std;

int pprint(int , int =1, int height=2);				// prototype = default values + type !


int main()
{
  pprint(1);
  pprint(2,20);
  pprint(3,20,30);

  return EXIT_SUCCESS;
}

int pprint(int length, int width, int height)			// no default value, give names to variables	
{

  cout << "length = " << length << endl;
  cout << "width  = " << width << endl;
  cout << "height = " << height << endl;

  return EXIT_SUCCESS;

}









