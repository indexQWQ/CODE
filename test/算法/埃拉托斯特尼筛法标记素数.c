//埃拉托斯特尼筛法标记素数
// #include <stdio.h>
// #include <stdbool.h>


// int main() 
// {
//     long long n;
//     scanf("%lld", &n);
//     bool isPrime[n+1];//定义一个布尔数组，标记是否是素数
    
//     for(long long i = 2; i <n; i++)
//     {
//         isPrime[i] = true;
//     }
//     isPrime[0] = false;
//     isPrime[1] = false;
//     for(long long i = 2; i*i <n; i++)
//     {
//         if(isPrime[i])
//         {
//             for(long long j = i*i; j <n; j+=i)
//             {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     int count = 0;
//     for(long long i = 2; i < n; i++)
//     {
//         if(isPrime[i])
//         {
//             count++;
//         }
//     }
//     printf("%d\n", count);
//     return 0;
// }

// #include <stdio.h>

// int main()
// {

//     return 0;
// }

// #include <stdio.h>
// #include <stdbool.h>


// int main()
// {
//     int n=0;
//     scang("%d",&n);
//     bool isprime[n+1]

//     return 0;
// }