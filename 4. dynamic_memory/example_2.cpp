/*
    This will do the same as example 1
    with c++ style.
*/

#include <iostream>

using namespace std;

int main()
{

    int a = 80;

    int *ptr = new int;
    *ptr = 40;

    cout << "The value of a = " << a << endl;
    cout << "The value of ptr = " << *ptr << endl;

    delete ptr;

    return 0;
}