/*
    This will explain that the strings and character arrays
    arrays are also like normal arrays.
*/

#include <iostream>

using namespace std;

void print(char*);

int main()
{

    char name[] = "My Name is Moin";

    print(name);

    return 0;
}

void print(char* C)
{

    while (*C != '\0')
    {
        /* code */
        cout << *C << "";
        C++;
    }

    cout << endl;
}