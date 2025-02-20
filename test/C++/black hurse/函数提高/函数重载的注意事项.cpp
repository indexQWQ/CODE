#include <iostream>
using namespace std;

//函数重载的注意事项：
//1.引用作为重载条件
void fun(int& ref)
{
    cout<<"fun(int& ref)"<<ref<<endl;
}
void fun(const int& ref)
{
    cout<<"fun(const int& ref)"<<ref<<endl;
}
//2.函数重载碰到默认参数
void fun2(int a)
{
    cout<<"fun2(int a)"<<endl;
}
void fun2(int a,int b=10)
{
    cout<<"fun2(int a,int b=10)"<<endl;
}
int main()
{
    int a=10;
    fun(a);
    fun(10);
    //fun2(10);//err
    fun2(10,20);
    return 0;
}