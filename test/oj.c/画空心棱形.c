#include <stdio.h>
#include <math.h>
int main ()
{
    double a=0;
    scanf("%lf",&a);
    for(int i=1;i<=a;i++)
    {
        if(i==ceil(a/2))
        {
            for(int j=1;j<=a;j++)
            {
                if(j==1 || j==a)
                {
                    printf("*");
                }
                else
                {
                    printf(".");
                }
            }
        }
        if(i<ceil(a/2))
        {
            for(int j=1;j<=ceil(a/2)-i;j++)
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
        if(i>ceil(a/2))
        {
            for(int k=1;k<=i-ceil(a/2);k++)
            {
                printf(".");
            }
            for(int k=1;k<=2*(2*ceil(a/2)-i)-1;k++)
            {
                if(k==1 || k==2*(2*ceil(a/2)-i)-1)
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
