#include <stdio.h>
#include <math.h>
int main ()
{
    char a=0;
    double b=0;
    double c=0;
    scanf("%lf %c", &b, &a);
    
    if(a=='y')
    {
        if(b<=1000)
        {
            c=17;
            printf("%.0lf", c);
        }
        else
        {
            c=ceil((b-1000)/500)*6+17;
            printf("%.0lf", c);
        }
    }
    else
    {
        if(b<=1000)
        {
            c=12;
            printf("%.0lf", c);
        }
        else
        {
            c=ceil((b-1000)/500)*5+12;//     ceil()函数返回大于或等于参数的最小整数
            printf("%.0lf", c);
        }
    }
    return 0;
}