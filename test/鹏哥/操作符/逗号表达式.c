#include <stdio.h>

//从左向右依次计算，整个表达式的结果是最后一个表达式的结果

int main()
{
    int a=1;
    int b=2;
    int c=(a>b,a=b+10,b=a+1);
    printf("%d\n",c);
    return 0;
}