#include <stdio.h>

// 输入输出函数
// getchar() 从标准输入流中读取一个字符
// putchar(c) 将字符 c 写入标准输出流

//
int main()
{
    int c;
    printf("Enter a character: ");
    c=getchar();
    printf("You entered:");
    printf("%d\n",c);
    putchar(c);
    return 0;
}