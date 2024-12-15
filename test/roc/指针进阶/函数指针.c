#include <stdio.h>

// int Add(int x,int y)
// {
//     return x+y;
// }
// // int main()
// // {
// //     // int arr[5]={0};
// //     // int (*p)=&arr;//数组指针
// //     // //&数组名-->取出数组的地址
// //     // 取地址函数名-->取函数的地址
// //     printf("%p\n",&Add);
// //     printf("%p\n",Add);
// //     //由上面的可以知道函数名就是一个地址而且&Add==Add
// //     int (*p)(int,int)=&Add;
// //     // 对于函数名来说，&函数名和函数名都是函数的地址

// //     int a=(*p)(3,4);// int a=p(3,4);
// //     printf("%d\n",a);
// //     return 0;
// // }

// // 使用
// void calc(int(*p)(int,int))
// {
//     int a=2;
//     int b=3;
//     int c=p(a,b);
//     printf("%d\n",c);
// }
// int main()
// {
//     int(*g)(int,int)=Add;
//     calc(Add);
//     printf("%u",sizeof(g));
//     return 0;
// }

// 阅读两段有趣的代码：
// //代码1
//  (*(void (*)())0)();
//  //代码2
//  void (*signal(int , void(*)(int)))(int);

// typedef void (*pf_t)(int)//把void(*)(int)类型重命名为pf_t
//这样子上面的代码2就能变为pf_t signal(int,pf_t)




// 函数指针的用途
//例如:写一个计算器
//包括加法 减法 除法 乘法

// int Add(int a,int b)
// {
//     return a+b;
// }
// int Sub(int a,int b)
// {
//     return a-b;
// }
// int Mul(int a,int b)
// {
//     return a*b;
// }
// int Div(int a,int b)
// {
//     return a/b;
// }
// int main()
// {
//     int a=0;
//     {
//         scanf("%d",&a);
//         int b=0,c=0;
//         switch(a)
//         {
//             case 1:
//                 printf("输入两个数字：");
//                 scanf("%d %d",&b,&c);
//                 int ret=Add(a,b);
//                 printf("%d\n",ret);
//                 break;
//             case 2:
//                 printf("输入两个数字：");
//                 scanf("%d %d",&b,&c);
//                 int ret=Sub(a,b);
//                 printf("%d\n",ret);
//                 break;
//             case 3:
//                 printf("输入两个数字：");
//                 scanf("%d %d",&b,&c);
//                 int ret=Mul(a,b);
//                 printf("%d\n",ret);
//                 break;
//             case 4:
//                 printf("输入两个数字：");
//                 scanf("%d %d",&b,&c);
//                 int ret=Div(a,b);
//                 printf("%d\n",ret);
//                 break;
//             default:
//                 printf("err\n");
//                 break;
//         }
//     }while(a)
//     return 0;
// }
// 如果像上面的代码这样子写会显得过于冗余

// 所以可以使用函数指针来进行封装
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
void calc(int (*p)(int,int))
{
    int b=0,c=0;
    printf("输入两个数字：");
    scanf("%d %d",&b,&c);
    int ret=p(b,c);
    printf("%d\n",ret);
}
int main()
{
    int a=0;
    {
        printf("1.加法 2.减法 3.除法 4.乘法 0.exit\n");
        scanf("%d",&a);
        switch(a)
        {
            case 1:
                calc(Add);
                break;
            case 2:
                calc(Sub);
                break;
            case 3:
                calc(Mul);
                break;
            case 4:
                calc(Div);
                break;
            default:
                printf("err\n");
                break;
        }
    }while(a)
    return 0;
}