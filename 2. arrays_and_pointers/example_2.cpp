/*
    Now we will implement example1.cpp
    using  a loop to access the all
    the elements and their addresses.
*/

#include <iostream>

using namespace std;

int main()
{

    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i <= 9; i++)
    {

        cout << "The starting address of A = " << A + i << endl;

        cout << "The starting address of A = " << &A[i] << endl;

        cout << "The starting value of  A  = " << A[i] << endl;

        cout << "The starting value of  A  = " << *(A + i) << endl;

        cout << "\n\n";
    }

    return 0;
}