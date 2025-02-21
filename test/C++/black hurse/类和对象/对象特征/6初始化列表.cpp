#include <iostream>
using namespace std;

//cpp提供了初始化列表语法来初始化属性
//语法：构造函数():属性1(值1),属性2(值2)...{}

// 一、若类的数据成员是静态的(const)和引用类型，必需用初始化列表
// 静态(const)的数据成员只能初始化而不能赋值，同样引用类型也是只可以被初始化，那么只有用初始化列表。
//二、构造函数体内赋值会带来额外的开销，效率会低于构造函数初始化列表
class person
{
public:
    //传统初始化操作
    // person(int a,int b,int c)
    // {
    //     m_a=a;
    //     m_b=b;
    //     m_c=c;
    // }
    //初始化列表初始化属性
    person(int a,int b,int c):m_a(a),m_b(b),m_c(c)
    {

    }

    int m_a;
    int m_b;
    int m_c;
};

void test1()
{
    person p1(3,2,3);
    cout<<p1.m_a<<p1.m_b<<p1.m_c<<endl;
}
int main()
{
    test1();
    return 0;
}