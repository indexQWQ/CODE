#include <iostream>
using namespace std;

//2.静态成员函数：
//  所有对象共享同一个函数
//  静态成员函数只能访问静态成员变量

class person
{
public:
    static void func()
    {
        //静态成员函数只能访问静态成员变量
        m_a=100;
        //m_b=1000;//err//无法区分到底是哪个对象的成员，因为所有对象共享同一个函数
        cout<<"static func"<<endl;
    }

    static int m_a;
    int m_b;
private:
    static void fun2()
    {
        cout<<"static func2"<<endl;
    }
};

void test1()
{
    person p1;
    //1.通过对象进行访问
    p1.func();
    //2.通过类名进行访问
    person::func();
    
    //静态成员函数也有访问权限
    //person::func2();//err
}
int main()
{
    test1();
    return 0;
}