/*
    This example will show process of implementing
    the pointer to the function.
*/

#include <iostream>

using namespace std;

int Add(int a, int b)
{

    return a + b;
}

int main()
{

    int c;

    int (*ptr)(int, int); // declare a pointer to function that takes two arguments
    ptr = Add; // passing the address of function
    c = ptr(5, 3); // calling the function through pointer and storing the value in c

    cout << c << endl;

    return 0;
}