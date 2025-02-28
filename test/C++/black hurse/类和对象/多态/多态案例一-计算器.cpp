#include <iostream>
#include <string>
using namespace std;

//多态的优点
//代码组织结构清晰
//可读性强
//利于前期和后期的扩展及维护

//普通写法
class caculater
{
    public:
    int m_num1;
    int m_num2;

    int getresult(string oper)
    {
        if(oper=="+")
        {
            return m_num1+m_num2;
        }
        else if(oper=="-")
        {
            return m_num1-m_num2;
        }
        else if(oper=="*")
        {
            return m_num1*m_num2;
        }
        //如果想修改扩展新的功能，需要修改源码
        //在真正的开发中提倡 开闭原则
        //对扩展进行开放，对修改进行关闭
        return 0;
    }
};
void test1()
{
    caculater c;
    c.m_num1=10;
    c.m_num2=10;
    cout<<"+"<<c.getresult("+")<<endl;
    cout<<"-"<<c.getresult("-")<<endl;
    cout<<"*"<<c.getresult("*")<<endl;
}

//利用多态实现计算器

//实现计算器抽象类（基类）
class abstract_caculater
{
public:
    int m_num1;
    int m_num2;
    virtual int getresult()
    {
        return 0;
    }
};
//加法计算器类
class addcalculator:public abstract_caculater
{
    virtual int getresult()
    {
        return m_num1+m_num2;
    }
};
//减法~~
class subcalculator:public abstract_caculater
{
    virtual int getresult()
    {
        return m_num1-m_num2;
    }
};
//乘法~~
class mulcalculator:public abstract_caculater
{
    virtual int getresult()
    {
        return m_num1*m_num2;
    }
};
void test2()
{
    //多态使用条件
    //父类指针或者引用指向子类对象
    //加法
    abstract_caculater* abc=new addcalculator;
    abc->m_num1=10;
    abc->m_num2=10;
    cout<<abc->m_num1<<"+"<<abc->m_num2<<"="<<abc->getresult()<<endl;
    //用完销毁
    delete abc;
    abc=NULL;
    //减法
    abc=new subcalculator;
    abc->m_num1=10;
    abc->m_num2=10;
    cout<<abc->m_num1<<"-"<<abc->m_num2<<"="<<abc->getresult()<<endl;
    delete abc;
    //乘法
    abc=new mulcalculator;
    abc->m_num1=10;
    abc->m_num2=10;
    cout<<abc->m_num1<<"*"<<abc->m_num2<<"="<<abc->getresult()<<endl;

}
int main()
{
    test2();
    return 0;
}