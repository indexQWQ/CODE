#include <iostream>
using namespace std;


//重载递增运算符

class myinterger
{
    friend ostream &operator<<(ostream& cou,myinterger p);
public:
    myinterger()
    {
        m_num=0;
    }

    //重载前置++
    myinterger& operator++()
    {
        this->m_num++;
        return *this;
    }
    //重载后置++
    //int代表占位参数，可以用于区分前置和后置
    myinterger operator++(int)
    {
        myinterger p=*this;
        this->m_num++;
        return p;
    }

private:
    int m_num;
};

//重载<<
ostream &operator<<(ostream& cou,myinterger p)
{
    cou<<p.m_num;
    return cou;
}

void test1()
{
    myinterger myi;
    cout<<++(++myi)<<endl;
    cout<<myi<<endl;
}
void test2()
{
    myinterger myi;
    cout<<myi++<<endl;
    cout<<myi<<endl;
}
int main()
{
    test2();
    return 0;
}