#include <iostream>
using namespace std;

//默认情况下，cpp编译器至少给一个类添加三个函数
//1.默认构造函数(无参，函数体为空)
//2.默认析构函数(无参，函数体为空)
//3.默认拷贝构造函数，对属性值进行拷贝

//构造函数调用规则：
//如果用户定义 有参构造函数，cpp不在提供默认无参构造 但是会提供默认拷贝构造
//如果用户定义 拷贝构造函数，cpp不会再提供其它构造函数

class person
{
public:
    // person()
    // {
    //     cout<<"默认构造函数"<<endl;
    // }
    person(int age)
    {
        m_age=age;
        cout<<"有参构造函数"<<endl;
    }
    // person(const person& p)
    // {
    //     m_age=p.m_age;
    //     cout<<"拷贝构造函数"<<endl;
    // }
    ~person()
    {
        cout<<"析构函数"<<endl;
    }

    int m_age;
};

// void test1()
// {
//     person p1;
//     p1.m_age=10;
//     person p2(p1);
//     cout<<"p2 age "<<p2.m_age<<endl;
// }

void test2()
{
    person p1(18);
    person p2(p1);
}
int main()
{
    //test1();
    test2();
    return 0;
}