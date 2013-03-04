#include <iostream>

using namespace std;

    class F
    {
        public:
        int glob;
        void readIt() { cin >> glob; }

        F() { cout << "F"; }
        F(int num) { cout << "G" << num; }
        private:
    };

    class W : public F
    {
        public:
        void test() { glob--; }

        W() { cout << "W" ; }
        W(int num) { cout << "Y" << num; }
	private:
    };

    int main()
    {
    W::W(5);
    }

