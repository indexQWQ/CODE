#include <stdio.h>
long long p( long long m, long long n )
{
    long long m1 = 1;
    for( int i = 1; i <= n; i++ )
    {
        m1 *= m;
        m--;
    }
    
    return m1;
}   
    

int main() 
{

    long long m, n;
    scanf("%lld%lld", &m, &n);
    printf("%lld", p(m, n));
    return 0;
}