/*
    This example will follow up the example_2.cpp with minor change.
*/

#include <iostream>

using namespace std;

void printHello(char *name)
{
    cout<< "Hello " << name << endl;
}

int main()
{

    void (*ptr)(char*);

    ptr = printHello;

    ptr("Moin Malik");

    return 0;
}