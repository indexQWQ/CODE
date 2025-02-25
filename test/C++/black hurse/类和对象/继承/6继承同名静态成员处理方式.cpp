#include <iostream>
using namespace std;

//静态成员与非静态成员出现同名，处理方式一致

class base
{
public:
    static int m_a;
    static int m_b;
};
int base::m_a=100;
int base::m_b=300;

class son:public base
{
public:
    son()
    {
        m_a=200;
    }
    int m_a;
    static int m_b;
};
int son::m_b=400;

//同名静态成员函数
void test1()
{
    //通过对象访问
    son s1;
    cout<<s1.m_a<<endl;
    cout<<s1.base::m_a<<endl;

    //通过类名访问
    cout<<son::m_b<<endl;
    cout<<son::base::m_b<<endl;
}
int main()
{
    test1();
    return 0;
}