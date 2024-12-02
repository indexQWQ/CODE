// #include <stdio.h>
// #include <stdbool.h>


// int main ()
// {
//     long long m,l=0;
    
//     scanf("%lld", &m);
//     if(m>2)
//     {
//         l++;
//     }
//     for(long long i=3; i<m; i+=2)
//     {
//         bool b=true;
//         if (i>2&&i%2==0) 
//         {
//             b = false;
//         }
        
//         else
//         {
//             for(long long j = 3; j*j<=i; j += 2)
//             {
//                 if(i% j == 0) 
//                 {
//                     b = false;
//                     break;
//                 }
//             }
//         }
//         if(b)
//         {
//             l++;
//         }   
//     }
//     printf("%lld", l);
//     return 0;
// }


// #include <stdio.h>
// #include <stdbool.h>
// #include <math.h>
// bool arr(long long i)
// {
//     if(i<2)return false;
//     for(long long j=2;j*j<=i;j++)
//     {
//         if(i%j==0)return false;
//     }
//     return true;
// }

// int main ()
// {
//     long long m,l=0;
//     scanf("%lld", &m);
//     for(long long i=1;i<=(m); i++)
//     {
//         if(arr(i))
//         {
//             l++;
//         }
//     }
//     printf("%lld", l);
//     return 0;
// }



// #include <stdio.h>
// #include <math.h>
// #include <stdbool.h>

// bool is_prime(long long n) 
// {
//     if (n==1) 
//     {
//         return false;
//     }
//     if(n==2)
//     {
//         return true;
//     }
//     if(n%2==0)
//     {
//         return false;
//     }
//     for(long long i=3;i*i<=n;i+=2)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main() 
// {
//     long long m;
//     scanf("%lld", &m);
//     long long count = 0;
//     if(m%2==0)
//     {
//         m--;
//     }
//     if(m>=2)
//     {
//         count++;
//     }
//     for(long long i=3;i<=m;i+=2)
//     {
//         if(is_prime(i))
//         {
//             count++;
//         }
//     }
//     printf("%lld", count);
//     return 0;
// }



#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() 
{
    long long m;
    scanf("%lld", &m);

    if (m <=2) 
    {
        printf("0\n"); 
        return 0;
    }

    bool is_prime[m + 1];
    for (long long i = 0; i <= m; i++) 
    {
        is_prime[i] = true;
    }

    
    is_prime[0] = is_prime[1] = false;

    
    for (long long i = 2; i * i <= m; i++) 
    {
        if (is_prime[i]) 
        {
            for (long long j = i * i; j <= m; j += i) // 标记 i 的倍数为合数
            {
                is_prime[j] = false; // 标记 j 为合数
            }
        }
    }

   
    long long count = 0;
    for (long long i = 2; i <= m; i++) 
    {
        if (is_prime[i]) 
        {
            count++;
        }
    }

    printf("%lld\n", count);
    return 0;
}


// #include <stdio.h>
// #include <stdbool.h>
// #include <math.h>

// bool arr(long long num) 
// {
//     if (num < 2) return false;
//     if (num == 2) return true;
//     if (num % 2 == 0) return false;
//     for (long long i = 3; i * i <= num; i += 2)
//     {
//         if (num % i == 0) return false;
//     }
//     return true;
// }

// int main() 
// {
//     long long m;
//     scanf("%lld", &m);
//     long long count = 0;
//     for (long long i = 2; i <= m; i++)
//     {
//         if (arr(i)) count++;
//     }
//     printf("%lld", count);
//     return 0;
// }


// #include <stdio.h>
// #include <stdbool.h>
// #include <math.h>

// int main() 
// {
//     long long m;
//     scanf("%lld", &m);

//     if (m <=2) 
//     {
//         printf("0\n");
//         return 0;
//     }

//     bool isPrime[m + 1];
//     for (long long i = 0; i <= m; i++) 
//     {
//         isPrime[i] = true; // 假设所有数字都是素数
//     }

//     isPrime[0] = isPrime[1] = false; // 0 和 1 不是素数

//     for (long long i = 2; i * i <= m; i++) 
//     {
//         if (isPrime[i]) 
//         {
//             for (long long j = i * i; j <= m; j += i) 
//             {
//                 isPrime[j] = false; // 将 i 的倍数标记为合数
//             }
//         }
//     }

//     long long count = 0;
//     for (long long i = 2; i <= m; i++) 
//     {
//         if (isPrime[i]) count++;
//     }
    
//     printf("%lld\n", count);
//     return 0;
// }
