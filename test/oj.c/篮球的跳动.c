#include <stdio.h>

int main()
{
    double h,n,s=0,h1;
    scanf("%lf%lf",&h,&n);
    h1=h;
    for(double i=0;i<n;i++)
    {
        
        if(i==0)
        {
            s+=h;
        }
        else
        {
            s+=2*h1;
        }
        h1=h1*0.5;
    }
    printf("%.2lf %.2lf\n",s,h1);
    return 0;
}