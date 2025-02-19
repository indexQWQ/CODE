#include<iostream>
#include <string>
using namespace std;
//栈区存放函数的参数值，局部变量等
//栈区数据注意事项————不要返回局部变量的地址
//栈区的数据由编译器管理开辟和释放
int *fun()
{
    int a=10;//局部变量存放在栈区，栈区的数据在函数执行完后自动释放
    return &a;
}
int main()
{
    int *p=fun();
    cout<<*p<<endl;
    cout<<*p<<endl;
    return 0;
}