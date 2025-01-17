// #include <stdio.h>
// //函数自己调用自己

#include <stdio.h>

void print(unsigned int n)
{
    if(n>9)//终止条件,如果没有终止条件,会出现死递归，导致栈溢出（stack overflow）
    {
        print(n/10);//递归调用自己,n应该变化，使它接近终止条件
    }
    printf("%d ",n%10);
}
//print(1234)
//print(123)   4
//print(12)  3 4
//print(1) 2 3 4
int main()
{
    unsigned int num =0;
    scanf("%u",&num);
    print(num);
    return 0;
}
//递归

//下面是我自己写的
// void print(unsigned int n)
// {
//     if(n<=9)
//     {
//         printf("%u ",n);
//         return;
//     }
//     unsigned int a =n%10;
//     n/=10;
//     print(n);
//     printf("%u ",a);
// }
// int main()
// {
//     unsigned int num =0;
//     scanf("%u",&num);
//     print(num);
//     return 0;
// }
//%d打印有符号的整数（包括正负数）
//%u打印无符号整数