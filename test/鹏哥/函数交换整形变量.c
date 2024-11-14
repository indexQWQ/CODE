#include <stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 1;
    int b = 2;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}

//当实参传给形参时，需要加上&符号，表示将实参的地址传给形参。
//如果没有&符号，则表示将实参的值传给形参，此时函数内对形参的操作会影响到实参的值。