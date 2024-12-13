#include <stdio.h>

int main()
{
    char *p="asdfg";// 把字符串首字符的地址，赋值给p
    printf("%s\n",p);
    printf("%c",*(p));
    return 0;
}