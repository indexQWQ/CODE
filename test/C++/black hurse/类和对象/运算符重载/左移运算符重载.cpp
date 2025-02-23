#include <iostream>
using namespace std;

//重载左移运算符配合友元可以实现输出自定义类型
class person
{
    friend ostream& operator<<(ostream &cout,person &p);
public:
    int m_a;

    person(int a,int b)
    {
        m_a=a;
        m_b=b;
    }
private:
    int m_b;
    //1.成员函数重载<<
    //p.operator<<(cout) 简化版本p<<cout
    //通常不会利用成员函数重载<<，因为无法实现cout在左侧
    // void operator<<(cout)
    // {

    // }
};

//用全局函数重载<<
ostream& operator<<(ostream &cout,person &p)//本质 operator<<(cout,p) 简化 cout<<p
{
    cout<<p.m_a<<" "<<p.m_b;
    return cout;
}
void test1()
{
    person p1(101,10);
    cout<<p1.m_a<<endl;
    cout<<p1<<endl;
}
int main()
{
    test1();
    return 0;
}