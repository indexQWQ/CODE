#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool arr(long long n) 
{
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) return false;
    }
    return true;
}


long long arrr(long long m) 
{
    for (long long K =sqrt(m) ; K >=2; K--) 
    {
        if (m % K == 0) 
        {
            long long q = m / K;
            if (arr(q) && arr(K)) 
            {
                return q > K ? q : K;
            }
        }
    }
    return (m > 1 && arr(m)) ? m : -1;
}

int main() 
{
    long long l, r;
    scanf("%lld", &l);
    r=arrr(l);
    printf("%lld",r);
    return 0;
}
// long long arrr(long long m) 
// {
//     for (long long K =(m); K >= 2; K--) 
//     {
        
//         if (m % K == 0) 
//         {
//             int w = K;
//             int q = m / K;
//             if (arr(q) && arr(w)) 
//             {
//                 return q > w ? q : w;
//             }
//         }
//     }
// }