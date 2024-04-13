/*
    This example will show the modification of existing array
    using realloc (mean re allocation).

    -> Reallocation takes previous memory block and extend or
       reduce that memory block
*/

#include <iostream>

using namespace std;

void showArray(int[], int);

int main()
{

    int a;
    cout << "Enter number of elements you want : ";
    cin >> a;

    int *arr = (int *)malloc(a * sizeof(a));

    for (int i = 0; i < a; i++)
    {

        // arr[i] = i + 1;
        *(arr + i) = i + 1;

        // both above notations can be used
        // for dereferencing
    }

    showArray(arr, a);

    int *brr = (int *)realloc(arr, 2 * a * sizeof(a));

    cout<<"Previous address of array was : "<<arr<<endl;
    cout<<"New address of array was      : "<<arr<<endl;
    showArray(brr, a * 2);

    return 0;
}

void showArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}