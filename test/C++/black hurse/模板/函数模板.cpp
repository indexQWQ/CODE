#include <iostream>
using namespace std;

//函数模板作用
//建立一个通用函数，其函数返回值类型可以不具体制定，用一个虚拟的类型来代表

//语法：template<typename T,typename D...>函数声明或定义
//template---声明创建模板
//typename---表面其后面的符号是一种数据类型，可以用class代替
//T---通用的数据类型，名称可以替换，通常为大写字母


//两个整型交换函数
void swapint(int& a,int& b)
{
    int temp=a;
    a=b;
    b=temp;
}
//两给浮点型交换
void swapdouble(double& a,double& b)
{
    double temp=a;
    a=b;
    b=temp;
}
//函数模板
template<typename T>//声明一个模板，告诉编译器后面的代码中紧跟着的T不要报错，T是一个通用的类型
void myswap(T& a,T&b)
{
    T temp=a;
    a=b;
    b=temp;
}

void test1()
{
    int a=10,b=100;
    //swapint(a,b);
    //有两种方式使用函数模板
    //1.自动类型推导
    myswap(a,b);
    cout<<a<<" "<<b<<endl;
    double c=1.2,d=2.1;
    //2.显示指定类型
    myswap<double>(c,d);
    //swapdouble(c,d);
    cout<<c<<" "<<d<<endl;
}
int main()
{
    test1();
    return 0;
}