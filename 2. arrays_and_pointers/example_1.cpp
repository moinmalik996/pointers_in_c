/*
    This will explain the relationship between 
    pointers and arrays and implement a basic
    example to see the relation.

    -> This shows that the array variable name
        is the starting address of the array,
        which contains the first element.
*/

#include <iostream>

using namespace std;

int main()
{

    int A[] = {2, 4, 6, 8, 10};

    cout<<"The starting address of A = "<<A<<endl;

    cout<<"The starting address of A = "<<&A<<endl;

    cout<<"The starting value of  A  = "<<A[0]<<endl;

    cout<<"The starting value of  A  = "<<*A<<endl;



    return 0;
}