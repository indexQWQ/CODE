#include <stdio.h>
#include <math.h>
int arr(int x)
{
    int b=0;
    for(int i=1;i<=x;i++)
    {
        b+=2*(2*i-1);
    }
    return b+2*(x+1)-1;
}
int main ()
{
    double f=0;
    scanf("%lf",&f);
    int n=1;
    double a;
	double sum;
	do
	{
		sum = arr(n);
		if (sum > f)
		{
			break;
		}
		n++;
	} while (1);
	a=2.0*(n-1.0)+1.0;
    for(int i=1;i<=a;i++)
    {
        if(i==ceil(a/2))
        {
            for(int j=1;j<=a;j++)
            {
                printf("*");
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
                printf("*");
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
                printf("*");
            }
        }

        printf("\n");
    }
    printf("\n");
    for(int i=1;i<=f-arr(n-1);i++)
    {
        printf("*");
    }
    return 0;
}
