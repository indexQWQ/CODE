#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[] = "hello";
    char str2[] = "world";
    int result = strcmp(str1, str2);
    if (result == 0)// strcmp函数返回0表示两个字符串相等
        printf("The strings are equal.\n");
    else if (result < 0)// strcmp函数返回负数表示第一个字符串小于第二个字符串
        printf("The first string is less than the second.\n");
    else// strcmp函数返回正数表示第一个字符串大于第二个字符串
        printf("The first string is greater than the second.\n");
    return 0;
}

//strcmp函数的作用是比较两个字符串的大小，如果两个字符串相等，则返回0；如果第一个字符串小于第二个字符串，则返回负数；如果第一个字符串大于第二个字符串，则返回正数。