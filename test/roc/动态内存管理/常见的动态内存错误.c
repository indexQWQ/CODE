#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
// 对NULL指针的解引用操作
void test1()
{
    int *p = (int *)malloc(INT_MAX/4);
    *p = 20;//如果p的值是NULL，就会有问题
    free(p);
}
// 对动态开辟空间的越界访问
void test2()
{
    int i = 0;
    int *p = (int *)malloc(10*sizeof(int));
    if(NULL == p)
    {
        printf("%s\n",strerror(errno));
        return 1;
    }
    for(i=0; i<=10; i++)
    {
        *(p+i) = i;//当i是10的时候越界访问
    }
    free(p);
}
// 对非动态开辟内存使用free释放
void test3()
{
    int a = 10;
    int *p = &a;
    free(p);
    p=NULL;
}
// 使用free释放一块动态开辟内存的一部分
void test4()
{
    int *p = (int *)malloc(100);
    if(NULL == p)
    {
        printf("%s\n",strerror(errno));
        return 1;
    }
    int i=0;
    for(i=0;i<10;i++)
    {
        *p=i;
        p++;
    }
    free(p);//p不再指向动态内存的起始位置
}
// 对同一块动态内存多次释放
void test5()
{
    int *p = (int *)malloc(100);
    free(p);
    free(p);//重复释放
}
//  动态开辟内存忘记释放（内存泄漏）
void test6()
{
    int *p = (int *)malloc(100);
    if(NULL != p)
    {
        *p = 20;
    }
}
int main()
{
    // test1();
    // test2();
    // test3();
    // test4();
    // test5();
    test6();
    return 0;
}
