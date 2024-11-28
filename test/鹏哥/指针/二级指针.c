#include <stdio.h>

int main()
{
    int a=10;
    int *pa=&a;//pa是一个指针变量，一级指针变量
    int **ppa=&pa;//ppa是一个二级指针变量
    //int **要分开理解，int *说明ppa指向的是对象是int *类型，*说明ppa是指针
    **ppa=20;
    // *pa=20;
    printf("%d",a);
    return 0;
}