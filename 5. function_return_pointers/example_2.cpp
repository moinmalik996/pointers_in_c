/*
    Now we will implement example_1 using
    pass by reference and also use function
    pointer that will return address.

    This code may not work because we are returning the
    address of local variable inside Add() function, so
    when the returned, it removed from the stack memory
    and the location become obselete.
*/

#include <iostream>

using namespace std;

int *Add(int *a, int *b)
{
    int c = *a + *b;
    return &c;
}

int main()
{

    int a = 5,
        b = 3;

    int* c = Add(&a, &b);

    cout << "The sum is = " << *c << endl;

    return 0;
}