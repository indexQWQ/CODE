#include <iostream>
#include <string>
using namespace std;

//类做友元
class building
{
    //goodgay类是builing类的好朋友
    friend class goodgay;

public:
    string m_sittingroom;

    building();
private:
    string m_bedroom;
    void bedroom()
    {
        cout<<"好东西"<<endl;
    }
};
//类外写成员函数
building::building()
{
    m_bedroom="卧室";
    m_sittingroom="客厅";
}

class goodgay
{
public:
    goodgay();
    void visit();//参观函数 访问building中的属性
    building* m_building;
};
//类外写成员函数
goodgay::goodgay()
{
    //创建建筑类对象
    m_building=new building;
}
void goodgay::visit()
{
    cout<<"好基友正在访问："<<m_building->m_sittingroom<<endl;
    cout<<"好基友正在访问："<<m_building->m_bedroom<<endl;
    cout<<"好基友正在访问：";
    m_building->bedroom();
}

void test1()
{
    goodgay gg;
    gg.visit();
}
int main()
{
    test1();
    return 0;
}