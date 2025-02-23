#include <iostream>
#include <string>
using namespace std;

class building;//声明
class goodgay
{
public:
    goodgay();
    void visit1(); //让visit1函数可以访问building中的私有成员
    void visit2(); //让visit2函数不可以访问building中的私有成员
    building* build;
};
class building
{
    friend void goodgay::visit1();
public:
    building()
    {
        sittingroom="客厅";
        bedroom="卧室";
    }
    string sittingroom;
private:
    string bedroom;
};
goodgay::goodgay()
{
    build=new building;
}
void goodgay::visit1()
{
    cout<<"好基友正在访问："<<build->sittingroom<<endl;
    cout<<"好基友正在访问："<<build->bedroom<<endl;
}
void goodgay::visit2()
{
    cout<<"好基友正在访问："<<build->sittingroom<<endl;
    //cout<<"好基友正在访问："<<build->bedroom<<endl;//err
}
void test1()
{
    goodgay gg;
    gg.visit1();
    gg.visit2();
}
int main()
{
    test1();
    return 0;
}