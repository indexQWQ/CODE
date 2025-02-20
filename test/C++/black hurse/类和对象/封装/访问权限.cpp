#include <iostream>
#include <string>
using namespace std;

//三种访问权限
//公共权限 public     成员 类内可以访问 类外可以访问
//保护权限 protected  成员 类内可以访问 类外不可以访问 儿子可以访问父亲中的保护内容
//私有权限 privat     成员 类内可以访问 类外不可以访问 儿子不可以访问父亲的私有内容

class Person
{
//公共权限
public:
    string m_name;

//保护权限
protected:
    string m_car;

//私有权限
private:
    string m_password;

public:
    void func()
    {
        m_name="index";
        m_car="BMW";
        m_password="8888";
    }
};
int main()
{
    Person pl;
    pl.m_name;
    pl.func();
    return 0;
}