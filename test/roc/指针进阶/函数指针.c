#include <stdio.h>

int Add(int x,int y)
{
    return x+y;
}
// int main()
// {
//     // int arr[5]={0};
//     // int (*p)=&arr;//数组指针
//     // //&数组名-->取出数组的地址
//     // 取地址函数名-->取函数的地址
//     printf("%p\n",&Add);
//     printf("%p\n",Add);
//     //由上面的可以知道函数名就是一个地址而且&Add==Add
//     int (*p)(int,int)=&Add;
//     // 对于函数名来说，&函数名和函数名都是函数的地址

//     int a=(*p)(3,4);// int a=p(3,4);
//     printf("%d\n",a);
//     return 0;
// }

// 使用
void calc(int(*P)(int,int))
{
    int a=2;
    int b=3;
    int c=p(a,b);
    printf("%d\n",c);
}
int main()
{
    calc(Add);
    return 0;
}