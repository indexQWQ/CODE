#include <stdio.h>

int main() 
{
    int n,a,bleed=100;
    double x,y,r;
    scanf("%lf%lf",&x,&y);
    scanf("%lf%d",&r,&a);
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        double x1,y1;
        scanf("%lf%lf",&x1,&y1);
        if((x1-x)*(x1-x)+(y1-y)*(y1-y)<=r*r)
        {
            bleed-=a;
        }
        if(bleed<=0)
        {
            bleed=0;
            break;
        }
    }
    printf("%d",bleed);
    return 0;
}