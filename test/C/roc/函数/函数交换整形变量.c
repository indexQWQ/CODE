#include <stdio.h>

void swap(int *x,int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    // int temp1 = x;
    // x = y;
    // y = temp1;//这样子x和y的值就交换了，但交换的的值是地址，而不是值。
    //printf("x= %d, y= %d\n",*x,*y);
}

int main()
{
    int a = 1;
    int b = 2;
    swap(&a,&b);
    printf("a= %d, b= %d\n",a,b);
    return 0;
}

//当实参传给形参时，需要加上&符号，表示将实参的地址传给形参。
//如果没有&符号，则表示将实参的值传给形参，此时函数内对形参的操作会影响到实参的值。