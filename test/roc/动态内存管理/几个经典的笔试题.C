#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//  题目1：
void GetMemory(char *p)
{
    p = (char *)malloc(100);// 没有释放内存会内存泄漏
}
void Test(void)
{
    char *str = NULL;
    GetMemory(str);//传的是地址的拷贝
    strcpy(str, "hello world");//野指针
    printf(str);
}

//  题目2：
char *GetMemory(void)
{
    char p[] = "hello world";
    return p;
}
void Test(void)
{
    char *str = NULL;
    str = GetMemory();//野指针
    printf(str);
}

//  题目3：
void Test(void)
{
    char *str = (char *) malloc(100);
    strcpy(str, "hello");
    free(str);//内存已经释放了
    if(str != NULL)
    {
        strcpy(str, "world");//野指针
        printf(str);
    }
}

