#include <stdio.h>

int main() {

    int arr[5],i,max;

    for(i=0;i<5;i++)
        {
            printf("\nenter elements");
            scanf("%d",&arr[i]);
        }

    max=arr[0];
    for(i=1;i<5;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
    printf("maximum element in an array is %d",max);
    
    
    return 0;
}
