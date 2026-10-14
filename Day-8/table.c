#include<stdio.h>

int main()
{
    int n,i;

    printf("enter no");
    scanf("%d",&n);

    for(i=1;i<11;i++)
    {
        printf("\n%d x %d = %d",n,i,n*i);
    }

    return 0;
}