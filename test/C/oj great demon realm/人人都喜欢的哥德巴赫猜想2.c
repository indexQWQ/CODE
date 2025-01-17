#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void goldbachConjecture(long long m)
{
    
    for (long long i = m; i >= 2; i--)
    {
        if (isPrime(i)) 
        {
            long long j = m - i; 
            if (j >= 2 && isPrime(j) && i >= j) 
            {
                printf("%.0lld=%.0lld+%.0lld\n", m, j, i);
                return;
            }
        }
    }
    
}

int main()
{
    long long k;
    scanf("%lld", &k);
    goldbachConjecture(k);
    return 0;
}
