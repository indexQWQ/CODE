#include <stdio.h>

int main()
{
    double h,s=0,h1;
    int n=0;
    scanf("%lf%d",&h,&n);
    h1=h;
    for(int i=0;i<n;i++)
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