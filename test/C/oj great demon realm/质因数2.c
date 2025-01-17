#include <stdio.h>
#include <stdbool.h>

// 函数用于判断一个数是否为素数
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * i <= num; i += 2) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

// 函数用于找到两个素数，它们的乘积等于 n，并返回较大的那个
int findLargerPrimeFactor(int n) 
{
    for (int i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            int factor1 = i;
            int factor2 = n / i;
            if (isPrime(factor1) && isPrime(factor2)) 
            {
                return factor2 > factor1 ? factor2 : factor1;
            }
        }
    }
    return -1; // 如果找不到合适的素数对，返回-1
}

int main()
{
    int n;
    printf("请输入一个数字 n：");
    scanf("%d", &n);

    int largerPrime = findLargerPrimeFactor(n);
    if (largerPrime != -1) 
    {
        printf("较大的素数因数是：%d\n", largerPrime);
    } 
    else 
    {
        printf("找不到合适的素数对。\n");
    }

    return 0;
}