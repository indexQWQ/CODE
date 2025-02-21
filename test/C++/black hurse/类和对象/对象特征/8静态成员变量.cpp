#include <iostream>
using namespace std;

//静态成员：
//1.静态成员变量：
//  所有对象共享同一份数据
//  在编译阶段分配内存
//  类内声明，类外初始化
//2.静态成员函数：
//  所有对象共享同一个函数
//  静态成员函数只能访问静态成员变量

class person
{
public:
    //类内声明
    static int m_a;

    //静态成员变量也有访问权限
private:
    static int m_b;
};
//类外初始化
int person::m_a=100;
int person::m_b=200;

void test1()
{
    person p;
    cout<<p.m_a<<endl;
    person p2;
    p2.m_a=200;
    //所有对象共享同一份数据
    cout<<p.m_a<<endl;
}
void test2()
{
    person p;
    //静态成员不属于某个对象，所以对象都共享同一份数据
    //因此静态成员变量有两种访问方式
    //1.通过对象进行访问
    cout<<p.m_a<<endl;
    //2.通过类名进行访问
    cout<<person::m_a<<endl;

    //静态成员变量也有访问权限
    //cout<<p.m_b<<endl;//err
}
int main()
{
    //test1();
    test2();
    return 0;
}