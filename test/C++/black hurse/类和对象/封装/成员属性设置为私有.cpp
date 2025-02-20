#include <iostream>
#include <string>
using namespace std;

//优点：
//1.将所有成员属性设置为私有，可以自己控制读写权限
//2.对于写权限，我们可以检验数据的有效性

//人类
class Person
{
private:
    string m_name;//姓名 可读可写

    int m_age;//年龄 只读

    string m_Idol;//偶象 只写

public:
    void setname(string name)
    {
        m_name=name;
    }
    string getname()
    {
        return m_name;
    }
    int getage()
    {
        return m_age;
    }
    void setidol(string name)
    {
        m_Idol=name;
    }
};
int main()
{
    Person p;
    p.setname("index");
    cout<<p.getname()<<endl;

    return 0;
}