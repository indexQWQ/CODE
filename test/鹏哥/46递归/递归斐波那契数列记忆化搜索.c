#include <stdio.h>


int fib(int n)
{
    if(n<=2)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);//斐波那契数列递归是重复计算的
    }
}

int main()
{
    int n=0;
    scanf("%d",&n);
    int a=fib(n);
    printf("%d",a);
    return 0;
}