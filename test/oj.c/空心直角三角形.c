#include <stdio.h>
int main ()
{
    int a=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i==1 || i==2 || i==a)
            {
                printf("*");
            }
            else
            {
                if(j==1 || j==i)
                {
                    printf("*");
                }
                else
                {
                    printf(".");
                }
            }
        }
        printf("\n");  
    }
    return 0;
}
