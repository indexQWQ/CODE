#include <stdio.h>
#include <string.h>
//sizeof
//是一个操作符，用来计算变量(类型)所占空间的大小，不关注内存中存放的内容
//单位字节
//
//strlen
//是一个库函数，是专门用来求字符串长度的，只能针对字符串
//从参数给定的地址向后找\0，统计\0之前的字符数，返回这个数值
//
int main()
{
    char str[] = "Hello,world!";
    int len = strlen(str);//strlen函数返回字符串的长度遇到空字符时停止
    printf("The length of the string is %d\n", len);
    printf("The size of the string is %d\n", sizeof(str));//sizeof函数返回字符串的字节数
    return 0;
}   