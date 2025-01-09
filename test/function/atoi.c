// int atoi(const char *str)
// str -- 要转换为整数的字符串。
// 该函数返回转换后的长整数，如果没有执行有效的转换，则返回零。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
//1.空指针
//2.空字符串
//3.空格
//4.+-
//5.越界
//6.非数字字符串
enum status
{
    VALID,
    INVALID,
}STA=INVALID;
int my_atoi(const char *);
int main()
{
    char arr[]="      -2344uk5";
    int ret=my_atoi(arr);
    if(STA==INVALID)
    {
        printf("非法返回:%d\n",ret);
    }
    else
    {
        printf("正常返回:%d\n",ret);
    }
    return 0;
}
int my_atoi(const char *str)
{
    //assert(str);
    int flag=1;
    if(*str=='\0')return 0;
    while(isspace(*str))
    {
        str++;
    }
    if(*str=='+')
    {
        flag=1;
        str++;
    }
    else if(*str=='-')
    {
        flag=-1;
        str++;
    }
    long long ret=0;
    while(*str)
    {
        if(isdigit(*str))
        ret=10*ret+flag*(*str-'0');
        else
        break;
        if(ret>INT_MAX || ret<INT_MIN)
        {
            return 0;
        }
        str++;
    }
    if(*str=='\0')
    {
        STA=VALID;
    }
    return (int)ret;
}