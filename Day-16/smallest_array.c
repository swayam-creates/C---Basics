#include <stdio.h>

int main() {

int arr[5],i,min;

for(i=0;i<5;i++)
{
printf("\nenter elements");
scanf("%d",&arr[i]);
}

min=arr[0];
for(i=1;i<5;i++)
{
if(arr[i]<min)
{
min=arr[i];
}
}
printf("smallest element in an array is %d",min);

return 0;

}
