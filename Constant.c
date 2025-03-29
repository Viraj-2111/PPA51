#include<stdio.h>

int main()
{
    int A = 10;

    const int B = 10;

    A++;  // Allowed

    B++;  // Not allowed

    return 0;
}