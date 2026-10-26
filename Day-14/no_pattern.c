include <stdio.h>

int main() {

    int i,j,m;
    for(i=1;i<=5;i++)
        {
            for(m=5;m>i;m--)
                {
                    printf(" ");
                }
            for(j=1;j<=i;j++)
                {
                    printf("%d",j);
                }
            for(j=i-1;j>=1;j--)
                {
                    printf("%d",j);
                }
            printf("\n");
        }
    return 0;
}
