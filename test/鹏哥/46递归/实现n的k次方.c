#include <stdio.h>

double Pow(int n,int k)
{
    if(k==0)
    {
        return 1.0;
    }
    else if(k>0)
    {
        return n*Pow(n,k-1)*1.0;
    }
    else
    {
        return 1.0/Pow(n,-k);
    }
}
int main()
{
    int n=0;
    int k=0;
    scanf("%d%d",&n,&k);
    double end=Pow(n,k);
    printf("%lf",end);
    return 0;
}