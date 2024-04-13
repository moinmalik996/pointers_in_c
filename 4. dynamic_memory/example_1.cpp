/*
    This example will explain the allocation of memory
    dynamically in heap memory using c style.
*/

#include <iostream>

using namespace std;

int main()
{

    int a = 10; // goes to stack

    int *ptr; // declare a pointer
    ptr = (int *)malloc(sizeof(int)); // assign a memory and gives it address to ptr
    *ptr = 40; // dereferencing the ptr
    

    cout << "The value of a = " << a << endl;
    cout << "The value ptr points to = " << *ptr << endl;

    free(ptr); // deallocation of memory
    return 0;
}