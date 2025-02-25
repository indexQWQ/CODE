#include <iostream>
using namespace std;
//在定义不同的类的时候，有些类的成员有共性，也有特性
//可以用继承，减少重复代码

//普通实现网页

//java页面
class bace
{
public:
    void header()
    {
        cout<<"首页"<<endl;
    }
    void footer()
    {
        cout<<"底部"<<endl;
    }
    void left()
    {
        cout<<"左部"<<endl;
    }
    void content()
    {
        cout<<"内容"<<endl;
    }
};

//继承
//语法：class 子类:继承方式 父类
//子类：派生类
//父类：基类
class java:public bace
{
public:
    void content()
    {
        cout<<"java内容"<<endl;
    }
};
void test1()
{
    java Java;
    Java.header();
    Java.left();
    Java.footer();
    Java.content();

}


int main()
{
    test1();
    return 0;
}