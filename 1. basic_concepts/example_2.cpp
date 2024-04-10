#include <iostream>

using namespace std;

int main()
{

    int a = 10,
        b = 20,
        *p;

    p = &a;

    cout << "The address of a = " << p << endl;
    cout << "The value of a = " << a << endl;
    cout << "The value of pointer = " << *p << endl;

    // Now playing with pointers

    *p = b; // the value of pointer, its pointing to is changed to b means a = b

    cout << "The value of b = " << b << endl;
    cout << "The value of pointer = " << *p << endl;
    cout << "The value of pointer = " << p << endl;

    cout << "Now The value of a has become " << *p << endl; // because its still pointing to a

    return 0;
}