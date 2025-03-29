#include<stdio.h>

// Function defination
int Addition(int value1, int value2)
{
    int Result = 0;

    Result = value1 + value2;

    return Result;

}

int main()                              // Entry point function
{
    int No1 = 0, No2 = 0, Ans;          // Local variables 

    printf("Enter first number : \n");
    scanf("%d",&No1);

    printf("Enter second number : \n");
    scanf("%d",&No2);

    Ans = Addition(No1, No2);           // Function call

    printf("Addition is : %d\n",Ans);


    return 0;
}