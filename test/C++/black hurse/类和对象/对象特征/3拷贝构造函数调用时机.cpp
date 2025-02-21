#include <iostream>
using namespace std;
class person
{
public:
    person()
    {
        cout<<"默认构造函数"<<endl;
    }

    person(int age)
    {
        m_age=age;
        cout<<"有参构造函数"<<endl;
    }
    person(const person &p)
    {
        m_age=p.m_age;
        cout<<"拷贝构造函数"<<endl;
    }
    ~person()
    {
        cout<<"析构函数"<<endl;
    }

    int m_age;
};

//1.使用一个已经创建完毕的对象来初始化一个新对象
void test1()
{
    person p1(20);
    person p2(p1);
    cout<<"p2 age "<<p2.m_age<<endl;;
}
//2.值传递的方式给函数参数传值
void dowork(person p)
{
    p.m_age=100;
}
void test2()
{
    person p1;
    p1.m_age=1000;
    dowork(p1);
    cout<<p1.m_age<<endl;
}
//3.值方式返回局部对象
person dowork1()
{
    person p1;
    return p1;
}
void test3()
{
    person p=dowork1();
}

int main()
{
    //test1();
    //test2();
    test3();
    return 0;
}