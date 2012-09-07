#include <iostream>
#include "Employee427.h"

using namespace std;

int main()
{
    Date birth(8, 14, 1972);
    Date hire (3, 12, 2004);
    Employee manager("Emmanuel", "Mayssat", birth, hire);

    cout << endl;

    manager.print();
}
