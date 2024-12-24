#include <stdio.h>

struct S
{
    int data[1000];
    int num;
};
struct S s = {{1,2,3,4}, 1000};
//结构体传参
void print1(struct S s)
{
    printf("%d\n", s.num);
}
//结构体地址传参
void print2(struct S* ps)
{
    printf("%d\n", ps->num);
}
int main()
{
    print1(s);  //传结构体
    print2(&s); //传地址
    return 0;
}
// 上面的print1 和print2 函数哪个好些？
// 答案是：首选print2函数。
// 原因：
// 函数传参的时候，参数是需要压栈，会有时间和空间上的系统开销。
// 如果传递一个结构体对象的时候，结构体过大，参数压栈的的系统开销比较大，所以会导致性能的下降。