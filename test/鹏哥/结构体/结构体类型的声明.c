//结构是一些值的集合，结构中的每个成员是可以不同类型的
//而数组是一组相同类型元素的集合

//结构体可以表达一个复杂对象
//例如；人：名字，电话，性别，身高
#include <stdio.h>

// struct tag
// {
//  member-list;
// }variable-list;
//struct 是结构体关键字
//tag 结构体标签
//member-list 成员变量列表
//variable-list 变量列表

//人
//声明的结构体类型struct peo
// struct peo
// {
//     char name[100];
//     char tele[12];
//     char sex[5];//一个汉字两个字符
//     int high;
// };
//相当于图纸
//或者说是创建了一个类型

// struct peo
// {
//     char name[100];
//     char tele[12];
//     char sex[5];//一个汉字两个字符
//     int high;
// }p1,p2;//p1和p2是使用struct peo结构体类型创建的两个变量
// //p1和p2是两个全局变量

// int main()
// {
//     struct peo p1={0};//结构体变量的创建
//     //相当于用图纸建房子

//     return 0;
// }

//结构体里面可以出现其他结构体
// struct peo
// {
//     char name[100];
//     char tele[12];
//     char sex[5];//一个汉字两个字符
//     int high;
// };
// struct st
// {
//     struct peo p;
//     int num;
//     float f;
// };


//结构体变量的初始化
// struct peo
// {
//     char name[100];
//     char tele[12];
//     char sex[5];//一个汉字两个字符
//     int high;
// }p3,p4;

// int main()
// {
//     struct peo p1={"张三","1334567945","男",180};

//     return 0;
// }

