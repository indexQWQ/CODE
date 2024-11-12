#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool arr(long long num) 
{
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (long long i = 3; i * i <= num; i += 2)
    {
        if (num % i == 0) return false;
    }
    return true;
}

long long arrr(long long n) 
{
    for (long long i = n; i >= 2; i--) 
    {
        if (arr(i)) 
        {
            return i;
        }
    }
    return -1; 
}

int main() 
{
    long long n;
    scanf("%lld", &n);
    long long result = arrr(n);
    printf("%lld\n",result);
    return 0;
}

