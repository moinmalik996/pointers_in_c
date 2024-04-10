/*

    This program will explore pointer arithmetic, sizeof
    and the variable hexadecimal address to integer address.

*/

#include <iostream>

using namespace std;

int main()
{

    int a = 10,
        *p;

    p = &a;

    cout << "The size of integer a = " << sizeof(a) << endl;
    cout << "The address of a = " << p << endl;
    cout << "The value of a = " << *p << endl;

    cout << "The address of p + 1 = " << p + 1 << endl;

    return 0;
}