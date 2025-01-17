#include <stdio.h>
// 枚举顾名思义就是一一列举。
// 把可能的取值一一列举。
// 比如我们现实生活中：
// 一周的星期一到星期日是有限的7天，可以一一列举。
// 性别有：男、女、保密，也可以一一列举。
// 月份有12个月，也可以一一列举
// 这里就可以使用枚举了。

// 定义
enum Day//星期
{
    Mon=1,//1//赋初始值
    Tues,//2
    Wed,//3
    Thur,//4
    Fri,//5
    Sat,//6
    Sun//7
};
enum Sex//性别
{
    MALE,//0
    FEMALE,//1
    SECRET//3
};
enum Color//颜色
{
    RED,
    GREEN,
    BLUE
};

int main()
{
    enum Day d=Fri;
    // printf("%d\n",Mon);
    // printf("%d\n",Tues);
    // printf("%d\n",Wed);
    // printf("%d\n",Thur);
    // printf("%d\n",Fri);
    // printf("%d\n",Sat);
    // printf("%d\n",Sun);
    return 0;
}
//  枚举的优点 
// 为什么使用枚举？
// 我们可以使用
// #define 定义常量，为什么非要使用枚举？#define 没有具体的类型
// 枚举的优点：
// 1. 增加代码的可读性和可维护性
// 2. 和#define定义的标识符比较枚举有类型检查(检查在c++体现的明显，在c不明显)，更加严谨。
// 3. 防止了命名污染（封装）
// 4. 便于调试(#define 在执行代码的时候是要替换的)
// 5. 使用方便，一次可以定义多个常量
// #define M 100
// test.c -------(预处理)------->编译----->链接------>.exe
// 在预处理的时候会将将代码里面define的值都替换掉，然后将#define M 100丢掉
// 调试是在.exe之后的所以不能很好的观察到M的值的，就是调试时候的代码和看到的代码不一样