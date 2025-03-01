#include <iostream>
using namespace std;

template<typename T>//typename 可以替换成class
void myswap(T& a,T&b)
{
    T temp=a;
    a=b;
    b=temp;
}
//注意事项:
//1.自动类型推导，必须推导出一定的数据类型T，才可以使用
void test1()
{
    int a=10,b=100;
    //有两种方式使用函数模板
    //1.自动类型推导
    myswap(a,b);
    cout<<a<<" "<<b<<endl;
}
//2.模板必须要确定出T类型，才可以使用
void test2()
{
    double c=1.2,d=2.1;
    //2.显示指定类型
    myswap<double>(c,d);
    cout<<c<<" "<<d<<endl;
}

int main()
{
    test1();
    return 0;
}