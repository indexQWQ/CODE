#include <iostream>
using namespace std;

//cpp中，类内的成员变量和成员函数存储
//只有非静态成员变量才属于类的对象上
class person
{
    int m_a;//非静态成员变量 属于类的对象上
    static int m_b;//静态成员变量 不属于类的对象上
    void fun(){}//非静态成员函数 不属于类的对象上
    static void fun(){}//静态成员函数 不属于类的对象上
};
int person::m_b=10;
void test1()
{
    person p1;
    //空对象占用内存为：1
    //cpp编译器会给每个空对象也分配一个字节空间，为了区分空对象占内存的位置
    //每个空对象也因该有一个独一无二的内存地址
    cout<<"sizeof p1: "<<sizeof(p1)<<endl;
}
void test2()
{
    person p1;
    cout<<"sizeof p1: "<<sizeof(p1)<<endl;
}
int main()
{
    test2();
    return 0;
}