// char        1   //字符数据类型
// short       2   //短整型
// int         4   //整形
// long        4/8 //长整型 4:32位 8:64位
// long long   8   //更长的整形 c99
// float       4   //单精度浮点数
// double      8   //双精度浮点数
// //C语言有没有字符串类型？

// 1.1 类型的基本归类： 
// 整形家族：
//char //字符的本质是ASCII码值，是整型，所以划分到整型家族
//   unsigned char
//   signed char
//   char 到底是unsigned char还是signed char,标准是未定义的，取决于编译器
//short
//   unsigned short [int]
//   signed short [int]
//int 
//   unsigned int   
//   signed int
//   int-->signed int
//long
//   unsigned long [int]
//   signed long [int]

// 浮点数家族：表示小数
// float
// double

// 构造类型：
// > 数组类型
// int arr1[5];   类型int[5]
// > 结构体类型 struct
// > 枚举类型 enum
// > 联合类型 union

// 指针类型
// int *pi;
// char *pc;
// float* pf;
// void* pv;
// #include <stdio.h>

// 空类型：
// void 表示空类型（无类型）
// 通常应用于函数的返回类型、函数的参数、指针类型。


// int main()
// {
    
//     return 0;
// }