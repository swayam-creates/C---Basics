#include<stdio.h>

int main()
{
    int no;

    printf("Enter no to check whether it is even or odd");
    scanf("%d",&no);

    if(no%2==0)
    {
        printf("number is even");
    }

    else
    {
        printf("number is odd");
    }

    return 0;
}