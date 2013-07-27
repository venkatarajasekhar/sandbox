#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class LObject 
{
    public:
        LObject() { y = 2; }
        static const int x = 1;
        int y;					// cannot be initialized in class definition
	static int z;
};



int main()

{

    cout << "LObject::x " << LObject::x <<endl;			// no need of an instance!
    //cout << "LObject::z " << LObject::z <<endl;			// no need of an instance!

    LObject Obj1;
    LObject Obj2;

    cout << "Obj1.x = " << Obj1.x << endl; 
    cout << "Obj1.y = " << Obj1.y << endl; 

    //Obj1.x = 2;				// cannot change const member !

    cout << "Obj2.x = " << Obj2.x << endl; 
    cout << "Obj2.y = " << Obj2.y << endl; 


    return EXIT_SUCCESS;
}
