#include <iostream>
using namespace std;

//继承三种方式：公共、保护、私有


class base
{
    //friend class son1;
public:
    int m_a;
protected:
    int m_b;
private:
    int m_c;
};
//公共
class son1:public base
{
    public:
    void func()
    {
        m_a=10;
        m_b=10;
        //m_c=10;//err
    }
};
//保护
class son2:protected base
{
    public:
    void func()
    {
        m_a=10;
        m_b=10;
        //m_c=10;//err
    }
};
//私有
class son3:private base
{
    public:
    void func()
    {
        m_a=10;
        m_b=10;
        //m_c=10;//err
    }
};
void test1()
{
    son1 s1;
    s1.m_a=100;
    //s1.m_b=100;//err

    son2 s2;
    //s2.m_a=100;//err
    //s2.m_b=100;//err

    son3 s3;
    //s3.m_a=100;//err
    //s3.m_b=100;//err
}
int main()
{
    test1();
    return 0;
}