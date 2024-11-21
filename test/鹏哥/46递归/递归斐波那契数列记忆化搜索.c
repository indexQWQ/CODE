#include <stdio.h>
#include <stdlib.h>

int fib(int n, int* memo) 
{
    if (memo[n] != -1) 
    {
        return memo[n];
    }
    if (n <= 1) 
    {
        return n;
    }
    memo[n] = fib(n-1, memo) + fib(n-2, memo);
    return memo[n];
}

int main() 
{
    int n = 0;
    scanf("%d", &n);

    // 分配 memo 数组并初始化为 -1
    int* memo = (int*)malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++) 
    {
        memo[i] = -1;
    }

    int a = fib(n, memo);
    printf("%d\n", a);

    // 释放内存
    free(memo);
    return 0;
}
