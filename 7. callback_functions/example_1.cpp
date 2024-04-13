/*
    A function is passed to another function
    through function pointer.
*/

#include <iostream>

using namespace std;

void functionA()
{

    cout << "Function A is called through funcion B" << endl;
}

void functionB(void (*ptr)()){

    ptr();
}


int main()
{

    functionB(functionA);

    return 0;
}