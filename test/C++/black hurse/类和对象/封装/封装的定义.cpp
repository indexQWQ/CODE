#include<iostream>
using namespace std;

const double PI=3.14;
//封装的意义：
//1.将属性和行为作为一个整体，表现生活中的事物
//2.将属性和行为加以权限控制

//设计一个圆类，求圆的周长
class circle
{
private:
    /* data */
    //访问权限
    //公共权限
public:
    
    //类中的属性和行为 统一称为 成员
    //属性：成员属性 成员变量
    //行为：成员函数 成员方法

    //属性
    //半径
    int m_r;

    //行为
    //获取圆的周长
    double calculateZC()
    {
        return 2*PI*m_r;
    }

    void setm_r(double r)
    {
        m_r=r;
    }
};

int main()
{
    //通过圆类 创建具体的圆(对象)
    circle cl;
    //给圆对象 的属性进行赋值
    cl.m_r=10;

    cout<<"circle c:"<<cl.calculateZC()<<endl;
    return 0;
}