#include <iostream>

using namespace std;

int main()
{

    int a = 40; // declaring an integer variable
    int *p;     // declaring an integer pointer

    p = &a; // assigning address of a to p

    cout << "The address of a with & operator = " << &a << endl;
    cout << "The address of a with p pointer  = " << p << endl;

    cout << "The value of a with       a = " << a << endl;
    cout << "The value of a with pointer = " << *p << endl;


    return 0;
}