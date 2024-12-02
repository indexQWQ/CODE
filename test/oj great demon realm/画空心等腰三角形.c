#include <stdio.h>
#include <math.h>
int main ()
{
    double a=0;
    scanf("%lf",&a);
    for(int i=1;i<=ceil(a/2.0);i++)
    {
        if(i<ceil(a/2.0))
        {
            for(int k=1;k<=ceil(a/2.0)-i;k++)
            {
                printf(".");
            }
            for(int j=1;j<=2*i-1;j++)
            {
                if(j==1 || j==2*i-1)
                {
                    printf("*");
                }
                else
                {
                    printf(".");
                }
            }
        }
        else
        {
            for(int j=1;j<=a;j++)
            {
                printf("*");
            }
        }
         printf("\n");    
    }
    return 0;
}
