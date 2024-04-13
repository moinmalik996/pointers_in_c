/*
    This example will follow up to the
    next examples.

    This example based on call by value.
*/

#include <iostream>

using namespace std;

int Add(int a, int b)
{

    cout << "The address of a in Add() = " << &a << endl;
    cout << "The address of b in Add() = " << &b << endl;
    int c = a + b;
    return c;
}

int main()
{

    int a = 10,
        b = 5;

    cout << "The address of a in main() = " << &a << endl;
    cout << "The address of b in main() = " << &b << endl;
    int c = Add(a, b);
    cout << "The addition of a and b = " << c << endl;

    return 0;
}