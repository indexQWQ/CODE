// #include <stdio.h>
// #include <stdbool.h>
// #include <math.h>

// bool is_prime(long long n) 
// {
//     if (n < 2) 
//         return false;
//     if (n == 2) 
//         return true;
//     if (n % 2 == 0) 
//         return false;
//     for (long long i = 3; i * i <= n; i += 2) 
//     {
//         if (n % i == 0) 
//             return false;
//     }
//     return true;
// }

// void find_factor(long long m) 
// {
    
//     for (long long K = m / 2; K >= 2; K--) 
//     {
//         if (is_prime(K) && K <= (m / 3) && m % K == 0) 
//         {
//             printf("%lld\n", K);
//             return;
//         }
//     }
// }

// int main() 
// {
//     long long l;
//     scanf("%lld", &l);
//     find_factor(l);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=2;i*i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d",n/i);
            break;
        }
    }
    return 0;
}