#include <iostream>
using namespace std;

//运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型

//作用实现两个自定义数据类型相加的运算

//对于内置的数据类型，编译器知道如何进行运算

class person
{
public:
    int m_a;
    int m_b;
    //1.成员函数重载+
    // person operator+(person &p)
    // {
    //     person temp;
    //     temp.m_a=this->m_a+p.m_a;
    //     temp.m_b=this->m_b+p.m_b;
    //     return temp;
    // }
};
//2.全局函数重载+
person operator+(person &a,person &b)
{
    person temp;
    temp.m_a=a.m_a+b.m_a;
    temp.m_b=a.m_b+b.m_b;
    return temp;
}
void test1()
{
    person p1;
    p1.m_a=11;
    p1.m_b=111;
    person p2;
    p2.m_a=11;
    p2.m_b=111;
    //简化person p3=p1.operator+(p2);
    person p3=p1+p2;
    cout<<"p3 "<<p3.m_a<<" "<<p3.m_b<<endl;
    //person p3=p1+p2;
}
int main()
{
    test1();
    return 0;
}