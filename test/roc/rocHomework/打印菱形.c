#include <stdio.h>

int main()
{
    int n=0,i=0;
    scanf("%d",&n);
    int lein=n;
    for(i=0;i<lein;i++)
    {
        int j=0;
        for(j=0;j<lein-1-i;j++)
        {
            printf(" ");
        }
        int k=0;
        for(k=0;k<2*(i)+1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<lein-1;i++)
    {
        int j=0;
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        int k=0;
        for(k=0;k<2*(lein-1-i)-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}