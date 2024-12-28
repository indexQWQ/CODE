// 小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。
// 输入描述:
// 每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)
// 输出描述:
// 对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。

#include <stdio.h>

long long MIN(long long n,long long m)
{
    while(n%m)
    {
        long long temp=m;
        m=n%m;
        n=temp;
    }
    return m;
}
long long MAX(long long n,long long m)
{
    return m*n/MIN(n,m);
}
int main()
{   
    long long a, b;
    while (scanf("%lld %lld", &a, &b) != EOF) 
    { 
        printf("%lld\n",MAX(a,b)+MIN(a,b));
    }
    return 0;
}