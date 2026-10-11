#include<stdio.h>

int main()
{
    int a;

    printf("Enter a number");
    scanf("%d",&a);

    if(a>0)
    printf("number is positive");

    else if(a<0)
    printf("number is negative");

    else
    printf("Number is neither positive nor negative");
}