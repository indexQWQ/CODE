#include <iostream>
#include <string>
using namespace std;

//
class phone
{
public:
    phone(string name)
    {
        m_name=name;
        cout<<"phone构造函数调用"<<endl;
    }
    string m_name;
    ~phone()
    {
        cout<<"phone析构函数调用"<<endl;
    }
};
class person
{
public:
    //m_phone(phone)--->phone m_phone=phone(name) 隐式类型转换
    person(string name,string phone):m_name(name),m_phone(phone)
    {
        cout<<"person构造函数调用"<<endl;
    }
    ~person()
    {
        cout<<"person析构函数调用"<<endl;
    }
    string m_name;
    phone m_phone;
};

void test1()
{
    person p("index","phone");
    cout<<p.m_name<<p.m_phone.m_name<<endl;
}

//当其它类对象作为本类成员，构造时候先构造类对象，再构造自身，析构顺序相反
int main()
{
    test1();
    return 0;
}