#include <stdio.h>

int Add(int a,int b)
{
    return a+b;
}
int Sub(int a,int b)
{
    return a-b;
}
int Mul(int a,int b)
{
    return a*b;
}
int Div(int a,int b)
{
    return a/b;
}

typedef int(*pf_t)(int,int);
int main()
{
    // 函数指针数组
    //转移表
    pf_t arr[]={Add,Sub,Mul,Div};
    int a=0;
    printf("1.加法 2.减法 3.除法 4.乘法 0.exit\n");
    scanf("%d",&a);
    if(0==a)
    {
        return 0;
    }
    int b=0,c=0;
    scanf("%d%d",&b,&c);
    int ret=arr[a-1](b,c);
    printf("%d\n",ret);
    return 0;
}