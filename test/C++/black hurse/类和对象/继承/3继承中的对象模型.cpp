#include <iostream>
using namespace std;

class base
{
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;//私有成员只是被隐藏了，但是还是会继承下去
};

class son:public base
{
public:
    int m_d;
};
void test1()
{
    son s1;
    cout<<sizeof(s1)<<endl;
    //16
    //父类中所有非静态成员属性都会被子类继承下来
    //而父类中的私有成员只是被隐藏了
}
int main()
{
    test1();
    return 0;
}