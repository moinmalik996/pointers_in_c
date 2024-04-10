/*
    This example will explain the difference between 
    -> call by value  (function will make its own copy 
                       of variable and will not modify 
                       the original variable)
    -> call by reference (function will take the address
                            of pointer and modify the
                            the original variable in the memory)
*/

#include <iostream>

using namespace std;

void call_by_value(int);

void call_by_reference(int *);

int main()
{

    int a = 10;

    cout<<"The original value of a = "<<a<<endl;

    call_by_value(a); // call_by_value
    cout<<"The value of a after call_by_value = "<<a<<endl;

    call_by_reference(&a);  // call_by_reference
    cout<<"The value of a after call_by_reference = "<<a<<endl;

    return 0;
}


void call_by_value(int x){

    x++; // increment by 1
    
}

void call_by_reference(int *x){
    int *p = x;
    *p = *p + 1; /* increment by 1 (increment operator does 
                    not work with pointer variable like this
                    *p++; ) */
}