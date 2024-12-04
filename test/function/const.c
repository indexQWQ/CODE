#include <stdio.h>

int main()
{
    const int a=10;
    //a=20;
    //1.const 放在*的左边
    //意思是：p指向的对象不能通过p来改变，但是p本身的值是可以改变的
    // const int *p=&a;//int const*p=&a;
    //*p=20;//err
    // int n=100;
    // p=&n;//ok

    //2.const 放在*的右边
    //意思是：p指向的对象能通过p来改变，但是p本身的值是不可以改变的
    // int *const p=&a;
    // *p=20;//ok
    // int n=100;
    // p=&n;//err
    printf("%d\n",a);
}