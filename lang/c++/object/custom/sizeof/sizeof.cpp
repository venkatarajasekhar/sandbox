#include <iostream>
using namespace std;

class Empty {};

class Func {
    public:
        void print () 
        {
            cout << "Hello";
        }
};

class FuncPlus {
    public:
        void print () 
        {
            cout << "Hello" << i << endl;;
        }
    private:
        int i;
        int j;
};
    

int main()
{
    Empty e;
    Func f;
    FuncPlus p;

    cout << "size of    Empty e = " << sizeof(e)   << "\t<-- sizeof empty object is 1 byte" << endl;  
    cout << "size of     Func f = " << sizeof(f)   << "\t<-- member functions do not increase size" << endl;      
    cout << "size of        int = " << sizeof(int) << "\t<-- size of integer" << endl;
    cout << "size of FuncPlus p = " << sizeof(p)   << "\t<-- size of data member (2 int)" << endl;  
    return 0;
}

