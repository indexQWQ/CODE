#include <iostream>
#include <string>
using namespace std;

//在程序中，有些私有属性也想让类外特殊的一些函数或者类进行访问，就需要用到友原技术
//友元的目的让一个函数或类 访问另一个类中的私有成员
//友元关键字：friend

//友元的三种实现：
//全局函数做友元
//类做友元
//成员函数做友元
class building
{
    //goodgay全局函数是building好朋友，可以访问building中的私有成员
    friend void goodgay(building &room);

public:
    string m_sittingroom;

    building()
    {
        m_bedroom="卧室";
        m_sittingroom="客厅";
    }
private:
    string m_bedroom;
    void bedroom()
    {
        cout<<"好东西"<<endl;
    }
};
//全局函数
void goodgay(building &room)
{
    cout<<"好基友正在访问："<<room.m_sittingroom<<endl;
    cout<<"好基友正在访问："<<room.m_bedroom<<endl;
    cout<<"好基友正在访问：";
    room.bedroom();
}
void test1()
{
    building room;
    goodgay(room);
}
int main()
{
    test1();
    return 0;
}