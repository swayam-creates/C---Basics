#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter first No");
    scanf("%d",&a);

    printf("Enter Second No");
    scanf("%d",&b);

    printf("Enter third No");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("%d is greatest among three",a);
    }
    else if(b>a && b>c)
    {
        printf("%d is greatest among three",b);
    }
    else if(c>a && c>b)
    {
        printf("%d is greatest among three",c);
    }
    else if(a==b && a==c)
    {
        printf("All are equal");
    }
    else
    {
        printf("Two or more numbers are sharing the largest value");
    }
    return 0;
}