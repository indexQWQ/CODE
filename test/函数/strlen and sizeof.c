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
    char str[] ="Hello,world";
    char str1[100];
    int len = strlen(str);//strlen函数返回字符串的长度遇到空字符时停止
    printf("The length of the string is %d\n", len);
    int len1= sizeof(str);
    printf("The size of the string is %d\n", len1);//sizeof函数返回字符串的字节数
    fgets(str1,sizeof(str1),stdin);
    int len2=strlen(str1);
    printf("%d",len2);
    return 0;
}  
//结果
// The length of the string is 11
// The size of the string is 12
// hello world
// 12