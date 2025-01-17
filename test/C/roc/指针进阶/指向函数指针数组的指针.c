#include <stdio.h>

//  void test(const char* str)
//  {
//     printf("%s\n", str);
//  }
//  int main()
//  {
//     //函数指针pfun
//     void (*pfun)(const char*) = test;
//     //函数指针的数组pfunArr
//     void (*pfunArr[5])(const char* str);
//     pfunArr[0] = test;
//     //指向函数指针数组pfunArr的指针ppfunArr
//     void (*(*ppfunArr)[5])(const char*) = &pfunArr;
//     return 0;
//  }

#include <stdio.h>

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

typedef int(*pf_t)(int,int);
int main()
{
    // 函数指针数组
    //转移表
    pf_t arr[4]={Add,Sub,Mul,Div};
    // 函数指针数组的指针
    pf_t (*pf)[4]=&arr;
    //也可以这样写 int(*(*p)[4])(int ,int)
    int i=0;
    for(i=0;i<4;i++)
    {
        int ret=(*pf)[i](2,1);
        printf("%d ",ret);
    }
    return 0;
}