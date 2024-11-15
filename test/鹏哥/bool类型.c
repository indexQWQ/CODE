//布尔类型 C99引入
//用来表示真假的
//布尔类型是一个字节
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    if(1==n) return false;
    if(2==n) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    for(int i=101;i<=200;i+=2)
    {
        if(is_prime(i))
            printf("%d ",i);
    }
    putchar('\n');
    printf("%I64d",sizeof(bool));
    return 0;
}