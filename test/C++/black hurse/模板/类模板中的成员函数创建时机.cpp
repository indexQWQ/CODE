#include <iostream>
using namespace std;

//普通类中的成员函数一开始就可以创建
//类模板中的成员函数在调用时才创建
class person1
{
public:
    void show1()
    {
        cout<<"person1"<<endl;
    }
};

class person2
{
public:
    void show2()
    {
        cout<<"person1"<<endl;
    }
};

template<class T>
class person
{
public:
    T obj;
    void func1()
    {
        obj.show1();//只要不调用就不会创建，所以不会报错
    }
    void func2()
    {
        obj.show2();
    }
};
int main()
{
    person<person1> p;
    p.func1();
    //p.func2();
    return 0;
}