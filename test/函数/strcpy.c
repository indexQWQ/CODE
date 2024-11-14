#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100] = "Hello, world!";
    char str2[100];
    strcpy(str2, str1);//复制str1到str2
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    return 0;
}

//strcpy函数的作用是将一个字符串拷贝到另一个字符串中，如果目标字符串的长度小于源字符串的长度，则会在目标字符串的结尾添加空格。
//strcpy函数的原型为：char *strcpy(char *dest, const char *src);
//参数dest是目标字符串，参数src是源字符串。函数返回值是目标字符串的地址。
//注意：strcpy函数的第二个参数是const char *类型，表示源字符串是常量指针，不能修改。
//strcpy函数的实现原理是：从源字符串的第一个字符开始，逐个复制到目标字符串的第一个字符，直到遇到空字符为止。如果目标字符串的长度小于源字符串的长度，则会在目标字符串的结尾添加空格。

