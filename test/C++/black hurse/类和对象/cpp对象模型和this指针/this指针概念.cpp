#include <iostream>
using namespace std;

//由于cpp中成员变量和成员函数是分开存储的
//每个非静态成员函数只会诞生一个函数实例，也就是说多个同类型的函数会共用一块代码
//那么，这一块代码是如何区分哪个对象调用自己的？

//this指针指向被调用的成员函数所属的对象

//this指针是隐含每一个非静态成员函数内的一种指针
//this指针不需要定义，直接使用即可

//this指针用途：
//1.当形参和成员变量同名时，可用this指针来区分
//2.在类的非静态成员函数中返回对象本身，可用return *this

class person
{
public:
    person(int age)
    {
        //this指针指向被调用的成员函数所属的对象
        this->age=age;
    }
    person& personaddperson(const person& p)
    {
        this->age+=p.age;
        //this指p2的指针，而*this指向的就是p2这个对象本体
        return *this;
    }
    int age;
};
//1.解决名称冲突问题
void test1()
{
    person p1(18);
    cout<<"p1 age: "<<p1.age<<endl;
}
//2.返回对象本身用*this
void test2()
{
    person p1(10);
    person p2(10);
    //链式编程思想
    p2.personaddperson(p1).personaddperson(p1);
    cout<<"p2 age: "<<p2.age<<endl;;
}
int main()
{
    test2();
    return 0;
}