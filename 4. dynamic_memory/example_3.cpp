/*
    This example will demonstrate the array implementation
    through dynamic memory allocation.
*/

#include <iostream>

using namespace std;

int main()
{

    int a;
    cout << "Enter number of elements you want : ";
    cin >> a;

    int *arr = (int *)malloc(a * sizeof(a));

    for (int i = 0; i < a; i++)
    {

        //arr[i] = i + 1;
        *(arr + i) = i + 1;

        // both above notations can be used 
        // for dereferencing
    }

    for (int i = 0; i < a; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}