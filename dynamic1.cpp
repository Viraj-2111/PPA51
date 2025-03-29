#include<iostream>
using namespace std;

int main()
{
    int arr[5];         // static memory

    int *ptr = NULL;      

    // step 1 : allocate the memory

    ptr = new int[5];

    // step 2 : use the memory

    // logic

    // step 3 : deallocate the memory 

    delete []ptr;

    return 0;
}