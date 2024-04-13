/*
    This example will explain that we can use realloc
    in place of malloc if we pass NULL as a first argument
    to realloc.
*/

#include <iostream>

using namespace std;

int main()
{

    int a;
    cout << "Enter number of elements : ";
    cin >> a;

    int *arr = (int *)realloc(NULL, a * sizeof(a));

    for (int i = 0; i < a; i++)
    {

        arr[i] = i + 1;
    }

    for (int i = 0; i < a; i++)
    {

        cout << arr[i] << " ";
    }

    return 0;
}