#include <stdio.h>

//概念： 野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
// 野指针成因
// 1. 指针未初始化
// 2. 指针越界访问
// 3. 指针指向的空间释放

int *test()
{
    int a=10;
    return &a;
}
int main()
{
    int *p=test();
    printf("%d\n",*p);
    return 0;
}