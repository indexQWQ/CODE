#include <iostream>
using namespace std;

//概念
//两个派生类继承同一个基类
//又有某个类同时继承两个派生类
//这种继承被称为菱形继承，或者钻石继承

//vbptr
//v-virtual
//b-base
//ptr-pointer

//动物类
class animal
{
public:
    int m_age;
};

//利用虚继承 解决菱形继承的问题
//继承之前 加上关键字 virtual 变为虚继承 animal变为虚基类
//羊类
class sheep:virtual public animal
{

};

//驼类
class tuo:virtual public animal
{

};

//羊驼类
class sheeptuo:public sheep,public tuo
{
    
};

void test1()
{
    sheeptuo st;
    st.sheep::m_age=100;
    st.tuo::m_age=200;
    //当菱形继承，两个父类拥有相同的数据，需要加以作用域区分
    cout<<st.sheep::m_age<<endl;
    cout<<st.tuo::m_age<<endl;
    cout<<st.m_age<<endl;

    //而这份数据我们只要有一份就行，菱形继承导致数据有两份，资源浪费
}
int main()
{
    test1();
    return 0;
}