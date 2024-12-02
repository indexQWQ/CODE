#include <stdio.h>


int main()
{
    double x=0,n=0;
    scanf("%lf %lf",&x,&n);
    int day=0;
    double x1=0;
    while(x1<x)
    {
        day++;
        x1+=n;
        if(x1>=x)
        {
            break;
        }
        x1-=2.0;
        if(x1<0)
        {
            x1=0;
        }
        n*=0.95;
        if(n<2.0)
        {
            day=-1;
            break;
        }
    }
    printf("%d\n",day);
    return 0;
}
