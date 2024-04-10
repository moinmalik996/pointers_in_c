/*
    This program will explain the difference between integer and a
    character pointer type

    int =  4 bytes ( means it will read 4 columns of memory)
    char = 1 byte ( means it will read 1 column of memory)

    we will demonstrate a conversion of pointer from int to char
    and see that char pointer only prints one byte.

*/

#include <iostream>

using namespace std;

int main()
{

    int a = 40;
    int *int_points_to_a = &a;

    cout << "The address of a = " << int_points_to_a << endl;
    cout << "The value   of a = " << *int_points_to_a << endl;
    cout << "The size    of a = " << sizeof(a) << endl;

    char *char_pointer;
    char_pointer = (char *) int_points_to_a; // typecasting

    cout << "The size of char pointer is = " << sizeof(char) << endl;
    cout << "The address char is pointing to is = " << char_pointer << endl;

    return 0;
}