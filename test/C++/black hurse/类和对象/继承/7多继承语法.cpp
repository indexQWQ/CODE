#include <iostream>
using namespace std;

//cpp允许一个类继承多个类
//语法：class 子类:继承方式 父类1,继承方式 父类2...
//多继承可能会引发父类中有同名成员出现，需要加作用域区分

class base1
{
public:
    base1()
    {
        m_a=100;
    }
    int m_a;
};

class base2
{
public:
    base2()
    {
        m_a=200;
    }
    int m_a;
};

//子类 需要继承base1和base2
class son :public base1,public base2
{
public:
    son()
    {
        m_c=300;
        m_d=400;
    }
    int m_c;
    int m_d;
};
void test1()
{
    son s1;
    cout<<sizeof(s1)<<endl;//16
    cout<<s1.base1::m_a<<endl;
    cout<<s1.base2::m_a<<endl;
    cout<<s1.m_c<<endl;
    cout<<s1.m_d<<endl;
}
int main()
{
    test1();
    return 0;
};

