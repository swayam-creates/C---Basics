#include <stdio.h>

int main() {

int arr[5],i,min,max;

for(i=0;i<5;i++)
{
printf("\nenter elements");
scanf("%d",&arr[i]);
}

min=arr[0];
max=arr[0];
for(i=1;i<5;i++)
{
    if(arr[i]<min)
    {
        min=arr[i];
    }
    if(arr[i]>max)   
    {
        max=arr[i];
    }
}
printf("\nsmallest element in an array is %d",min);
printf("\nlargest element in an array is %d",max);

return 0;

}
