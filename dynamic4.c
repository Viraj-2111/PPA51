#include<stdio.h>       // standard input output 
#include<stdlib.h>      // standard library  

int main()
{
    
    int *ptr = NULL;


    int requirment = 0;

    printf("enter the requrment \n");
    scanf("%d",&requirment);

    ptr = (int *)malloc(requirment * sizeof(int));

    printf("size of %d",sizeof(requirment));

    return 0;
}