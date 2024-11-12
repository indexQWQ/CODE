#include <stdio.h>
int arr(int n)
{
    if(n>1)
    {
        return n*arr(n-1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    printf("%d的阶乘是：%d",n,arr(n));
    return 0;
}