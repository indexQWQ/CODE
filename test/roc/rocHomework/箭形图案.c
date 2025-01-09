#include <stdio.h>

int main() 
{
    int a;
    while (scanf("%d", &a) != EOF) 
    { 
        int i=0;
        for(i=1;i<=a;i++)
        {
            int j=0;
            for(j=1;j<=(a-i+1)*2;j++)printf(" ");
            for(j=1;j<=i;j++)printf("*");
            putchar('\n');
        }
        for(i=0;i<=a;i++)printf("*");
        putchar('\n');
        for(i=a;i>=1;i--)
        {
            int j=0;
            for(j=1;j<=(a-i+1)*2;j++)printf(" ");
            for(j=1;j<=i;j++)printf("*");
            putchar('\n');
        }
    }
    return 0;
}