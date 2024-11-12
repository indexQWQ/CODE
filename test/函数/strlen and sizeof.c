#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "Hello,world!";
    int len = strlen(str);//strlen函数返回字符串的长度遇到空字符时停止
    printf("The length of the string is %d\n", len);
    printf("The size of the string is %d\n", sizeof(str));//sizeof函数返回字符串的字节数
    return 0;
}   