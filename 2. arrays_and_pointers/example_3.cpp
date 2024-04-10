/*
    -> arrays as function arguments

    This explain that when an array is passed to any function,
    it is passed by reference, basically the function takes the
    starting address of the array as pointer variable under the hood.

    as in example:
        size of array in the main function is 20
        size of array passed to function as * (pointer) is 4
        (
            because its not the array its a pointer variable
        )
        
*/

#include <iostream>

using namespace std;

int SumofElements(int[], int);

int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    cout << "The size of array in main() = " << sizeof(array) << endl; // 20
    cout << "No. of elements in array in main = " << size << endl; // 5

    int total = SumofElements(array, size);

    cout << "The total of elements = " << total << endl;

    return 0;
}

int SumofElements(int* A, int size)
{

    cout << "The size of array in the function = " << sizeof(A) << endl;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += A[i];
    }

    return sum;
}