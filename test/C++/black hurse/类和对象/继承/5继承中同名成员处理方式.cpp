#include <iostream>
using namespace std;

//当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据
//访问子类同名成员 直接访问
//访问父类同名成员 需要加作用域

class base
{
public:
    base()
    {
        m_a=100;
    }
    int m_a;
    void fum()
    {
        cout<<"base"<<endl;
    }
    void fum(int)
    {
        cout<<"base int"<<endl;
    }
};

class son:public base
{
public:
    son()
    {
        m_a=10;
    }
    int m_a;
    void fum()
    {
        cout<<"son"<<endl;
    }
    
};
//同名的成员属性
void test1()
{
    son s1;
    cout<<s1.m_a<<endl;
    cout<<s1.base::m_a<<endl;
}
//同名的成员函数
void test2()
{
    son s1;
    s1.fum();
    s1.base::fum();

    //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中的所有同名成员函数
    //如果想访问到，要加父类作用域
    //s1.fum(10);//err
    s1.base::fum(2);
}
int main()
{
    test1();
    test2();
    return 0;
}