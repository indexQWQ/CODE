#include <stdio.h>
void arr(int* p)
{
    (*p)++;//要使用函数指针，必须用(*p)++这种形式调用
}
int main ()
{
    int a=0;
    arr(&a);
    printf("%d\n", a);
    arr(&a);
    printf("%d\n", a);
    arr(&a);
    printf("%d\n", a);
    return 0;
}