#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <math.h>

#include <iostream>

// *.cpp file
extern "C" int print(int i, double d)               // wrapper function callable from C, that runs C++ code!
{
    std::cout << "i = " << i << ", d = " << d << "    <-- using iostream C++ lib" << std::endl;
    printf("toto <-- using C printf function in C++\n");
}
