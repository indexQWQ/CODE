#include <stdio.h>
#include <string.h>
// 输入输出函数
//标准输入 stdin 键盘
//标准输出 stdout 屏幕
//标准错误 stderr 您的屏幕

// getchar() 从标准输入流中读取一个字符
// putchar(c) 将字符 c 写入标准输出流

//getchar & putchar 
// int main()
// {
//     int c;
//     printf("Enter a character: ");
//     c=getchar();
//     printf("You entered:");
//     // int len=strlen(c);
//     putchar(c);
//     return 0;
// }
//结果
// Enter a character: qwe
// You entered:q

// char *gets(char *s) 函数从 stdin 读取一行到 s 所指向的缓冲区，直到一个终止符或 EOF。
// int puts(const char *s) 函数把字符串 s 和一个尾随的换行符写入到 stdout

//gets & puts
// int main()
// {
//     char str[100];
//     printf("enter a value:");
//     gets(str);
//     printf("you entered:");
//     puts(str);
//     int len=strlen(str);
//     printf("%d",len);
//     return 0;
// }
//结果
// enter a value:qwer
// you entered:qwer
// 4

// int scanf(const char *format, ...) 函数从标准输入流 stdin 读取输入，并根据提供的 format 来浏览输入。
// int printf(const char *format, ...) 函数把输出写入到标准输出流 stdout ，并根据提供的格式产生输出。

// scanf & printf
// int main()
// {
//     char str[100];
//     int i;
    
//     printf( "Enter a value :");
//     scanf("%s %d", str, &i);
//     int len=strlen(str);
//     printf( "You entered: %s %d long:%d", str, i,len);
//     printf("\n");

//     return 0;
// }
//结果
// Enter a value :qere 1
// You entered: qere 1 long:4
