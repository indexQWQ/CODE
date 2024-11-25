#include <stdio.h>

long long gcd( long long m, long long n )
{
    if(m<n)
    {
        long long temp=m;
        m=n;
        n=temp;
    }
    if(m%n==0)
    {
        return n;
    }
    return gcd(n,m%n);
}
int main()
{
    long long n=0,m=0;
    scanf("%lld %lld",&n,&m);
    printf("%lld\n",gcd(n,m));
    return 0;
}