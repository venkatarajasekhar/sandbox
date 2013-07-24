#include <iostream>

using namespace std;

class Count
{
    friend void setX(Count &, int);                                 // friend declaration

    public:
        Count()
            : x(0)
        {
            // empty
        }

        void print() const
        {
            cout << x << endl;
        }

    private:
        int x;
};



void setX (Count &c, int val)
{
    c.x = val;
}





int main()
{
    Count counter;
    
    cout << "counter.x after instantiation: ";
    counter.print();

    setX(counter, 8);

    cout << "counter.x after call to setX friend function: ";
    counter.print();
}


