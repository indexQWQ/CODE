#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch='w';
    char ch1=1;
    printf("%d",isalpha(ch));//是字母返回 非零值
    printf("%d",isalpha(ch1));//不是字母返回0
    return 0;
}