#include <stdio.h>
#include <string.h>

void *memset(void *s, int c, size_t n)
{
    unsigned char *p = (unsigned char *)s;//将s转换为unsigned char指针
    while (n--)//循环n次
        *p++ = (unsigned char)c;//将p指向的内存块中的字节设置为c
    return s;
}

int main()
{
    char str[12] = "hello world";
    printf("%s\n", str);
    memset(str, 'a', 5);
    int len = strlen(str);
    printf("%s\n", str);
    printf("len = %d\n", len);
    return 0;
}

//memset函数的作用是将一个内存块中的所有字节设置为指定的值。它的原型是：

//void *memset(void *s, int c, size_t n);

//其中，s是指向内存块的指针，c是要设置的字节的值，n是要设置的字节数。函数返回s，即指向内存块的指针。
