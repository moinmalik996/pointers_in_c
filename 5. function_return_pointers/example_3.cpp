/*
    -> Read example_1.cpp and example_2.cpp for context.

    This is the implementation of example_2 with
    correct logic.

    
*/

#include <iostream>

using namespace std;

int *Add(int *a, int *b)
{
    int *c = (int *)malloc(sizeof(int));
    *c = *a + *b;
    return c;
}

int main()
{

    int a = 5,
        b = 3;

    int *c = Add(&a, &b);

    cout << "The sum is = " << *c << endl;

    return 0;
}