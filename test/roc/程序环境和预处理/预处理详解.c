// 3.1 预定义符号
// __FILE__    //进行编译的源文件
// __LINE__    //文件当前的行号
// __DATE__    //文件被编译的日期
// __TIME__    //文件被编译的时间
// __STDC__    //如果编译器遵循ANSI C，其值为1，否则未定义

// #include <stdio.h>
// int main()
// {
//     int i=0;
//     for(i=0;i<10;i++)
//     {
//         printf("file:%s i=%d\n",__FILE__,i);
//     }
//     return 0;
// }


// 3.2 #define 
// 3.2.1 #define 定义标识符

// 语法：
// #define name  stuff
// 举个栗子：
// #define MAX 1000           //为 register这个关键字，创建一个简短的名字
//  #define reg register      //用更形象的符号来替换一种实现    
// #define do_forever for(;;) //在写case语句的时候自动把 break写上。
// #define CASE break;case    // 如果定义的 stuff过长，可以分成几行写，除了最后一行外，每行的后面都加一个反斜杠(续行符)。
// #define DEBUG_PRINT printf("file:%s\tline:%d\t \
//  date:%s\ttime:%s\n" ,\
//  __FILE__,__LINE__ ,   \    //这里的\是续行符
//  __DATE__,__TIME__ )  


// 3.2.2 #define 定义宏 
// #define 机制包括了一个规定，允许把参数替换到文本中，这种实现通常称为宏（macro）或定义
// 宏（define macro）。
