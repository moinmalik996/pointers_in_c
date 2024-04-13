/*
    This example will use the bubble sort algorithm to
    sort the array to elevate the use case of callback
    function.
*/

#include <iostream>

using namespace std;

int compare(int a, int b)
{   
    if(a > b) return -1;
    else return 1;
}

void bubbleSort(int *A, int size, int (*compare)(int, int))
{

    int i, j, temp;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - 1; j++)
        {
            /*
                In order to change between ascending or descending order,
                you need to write the code for both with a minor change of
                less than ( < ) or greater than ( > ). at line 24.
            */
            if (compare(A[j], A[j + 1]) > 0)
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {1, 2, 6, 9, 10, 4, 2};
    int size = sizeof(arr) / sizeof(int);
    bubbleSort(arr, size, compare);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}