#include <iostream>

using namespace std;


class Test
{
    public:
        Test(int = 0);
        void print() const;

    private:
        int x;
};


Test::Test(int value)
    : x (value)
{
    // empty
}

void Test::print() const
{

    cout << "        x = " << x << endl;
    cout << "  this->x = " << this->x << endl;
    cout << "(*this).x = " << (*this).x << endl;
}


int main()
{
    Test Obj1(12);

    Obj1.print();
}


