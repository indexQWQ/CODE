#include <iostream>
using namespace std;
// 子类继承父类后，当创建类对象，也会调用父类的构造函数
class base
{
public:
    base()
    {
        cout<<"构造"<<endl;
    }
    ~base()
    {
        cout<<"析构"<<endl;
    }
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};
class son:public base
{
public:
    son()
    {
        cout<<"son构造"<<endl;
    }
    ~son()
    {
        cout<<"son析构"<<endl;
    }
};
void test1()
{
    son s1;
}
// 构造
// son构造
// son析构
// 析构
int main()
{
    test1();
    return 0;
}