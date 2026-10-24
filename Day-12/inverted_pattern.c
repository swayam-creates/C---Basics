#include <stdio.h>

int main() {

    int i,j,m;
    for(i=1;i<=5;i++)
        {
            for(m=1;m<=i;m++)
                {
                    printf(" ");
                }
            for(j=5;j>i;j--)
                {
                    printf("* ");
                }
            printf("\n");
        }
    return 0;
}
