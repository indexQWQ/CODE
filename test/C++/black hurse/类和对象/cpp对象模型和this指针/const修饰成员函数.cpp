#include <iostream>
using namespace std;

//常函数：
//成员函数后加const我们通常称为常函数
//常函数内不可以修改成员属性
//成员属性声明时加关键字mutable后，在常函数中依然可以修改

class person
{
public:
    person(int a)
    {
        m_a=a;
    }
    //this指针的本质 是指针常量 指针的指向不能修改person* const this；
    //void show()后面加const后，相当于在person* const this前面加了const
    //变成const person* const this;
    //在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以被修改
    void show() const 
    {
        //this->m_a=10;//err
        //this=NULL;//err
        m_b=10;
    }
    void fun()
    {

    }
    int m_a;
    mutable int m_b;//特殊变量，即使在常函数中，也可以修改这个值，加mutable
};
void test1()
{
    person p1(10);
    p1.show();
    cout<<"p1 m_b: "<<p1.m_b<<endl;
}

//常对象：
//声明对象前加const称为常对象
//常对象只能调用常函数
void test2()
{
    const person p1(10);
    //p1.m_a=100;//err
    p1.m_b=100;

    //常对象只能调用常函数
    p1.show();
    //p1.fun();//err
}
int main()
{
    test2();
    return 0;
}