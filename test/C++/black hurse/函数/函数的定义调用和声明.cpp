#include <iostream>
using namespace std;

//语法
// 返回值类型 函数名 (参数列表)
// {
//     函数体语句

//     return表达式;
// }
int add(int,int);//函数的声明
int main()
{
    cout<<add(3,3);
    return 0;
}
//例子加法函数
int add(int a,int b)//形参
{
    int c=a+b;
    return c;
}