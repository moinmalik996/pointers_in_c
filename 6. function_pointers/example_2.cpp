/*
    This is also an example of function pointers
*/

#include <iostream>

using namespace std;

void printHello()
{

    cout << "Hello" << endl;
}

int main()
{

    void (*ptr)();
    ptr = printHello;

    ptr();
    return 0;
}