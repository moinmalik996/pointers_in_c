/*
    This example will just double the value
    of each element in the array.
*/

#include <iostream>

using namespace std;

void arrayDouble(int *, int);
void arrayDislay(int *, int);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Doubling" << endl;
    arrayDislay(arr, size);

    arrayDouble(arr, size);

    cout << "\nAfter Doubling" << endl;
    arrayDislay(arr, size);
    return 0;
}

void arrayDouble(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

void arrayDislay(int *arr, int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}