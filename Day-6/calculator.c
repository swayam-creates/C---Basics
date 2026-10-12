#include<stdio.h>

int main()
{
int a,b,ch;

printf("Enter first number");
scanf("%d",&a);
printf("Enter second number");
scanf("%d",&b);

printf("\nSELECT YOUR  CHOICE(1-5)");
printf("\n1.ADDITION");
printf("\n2.SUBTRACTION");
printf("\n3.MULTIPLICATION");
printf("\n4.DIVISION");
printf("\n5.MODULE");
scanf("%d",&ch);

if(ch==1)
{
    printf("\nSum of numbers=%d",a+b);
}
else if(ch==2)
{
    printf("\nDifference of numbers=%d",a-b);
}
else if(ch==3)
{
    printf("\nproduct of numbers=%d",a*b);
}
else if(ch==4)
{
    if(b==0)
    {
        printf("\nnot defined");
    }
    else
    {
        printf("\ndivision of numbers=%d",a/b);
    }
}
else if(ch==5)
{
    printf("\nmodule=%d",a%b);
}
else
{
    printf("\ninvalid option selected");
}

return 0;
}