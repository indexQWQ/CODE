#include <iostream>
using namespace std;
//作用：函数名可以相同，提高复用性
//函数重载满足条件：
//1.同一作用域下
//2.函数名相同
//3.函数参数 类型不同 或者 个数不同 或者 顺序不同
//注意：函数的返回值不能作为函数重载的条件
void add(int a)
{
    cout<<"add"<<endl;
}
void add()
{
    cout<<"add1"<<endl;
}
void add(int b,double a)
{
    cout<<"add2"<<endl;
}
void add(double a,int b)
{
    cout<<"add3"<<endl;
}
int main()
{
    add(10);
    add(0.3,2);
    return 0;
}