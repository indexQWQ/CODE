#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool arr(long long n)
{
    if (n<2)
        return false;
    if (n==2)
        return true;
    if(n%2==0)
        return false;
    for(long long i=3;i*i<=n;i+=2)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
long long arrr(long long m)
{
    for(long long i=m;i>=2;i--)
    {
        if(arr(i))
        {   
            for(long long j=2;j<=m;j++)
            {
                if(m==i+j&&arr(j)&&i>=j)
                {
                    printf("%.0lld=%.0lld+%.0lld\n",m,j,i);
                    //return j,i;
                    return 0;
                }
            }
            
        }
    }
    return 0;
}
int main ()
{
    long long k;
    scanf("%lld",&k);
    arrr(k);
    
    return 0;
}
