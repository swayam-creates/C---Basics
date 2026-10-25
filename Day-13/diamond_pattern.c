#include <stdio.h>

int main() {

    int i,j,m;

    for(i=1;i<=7;i++)
        {
            if(i<=4)
            {
            for(m=3;m>=i;m--)
                {
                    printf(" ");
                }
            for(j=1;j<=i;j++)
                {
                    printf("*");
                }
                for(j=2;j<=i;j++)
                    {
                        printf("*");
                    }
        }
            else{
                for(m=5;m<=i;m++)
                    printf(" ");
                for(j=7;j>=i;j--)
                {
                    printf("*");
                }
                for(j=6;j>=i;j--)
                    {
                        printf("*");
                    }
                
            }
            printf("\n");
        }
    return 0;
}
