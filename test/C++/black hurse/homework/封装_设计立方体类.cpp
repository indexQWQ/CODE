#include <iostream>
using namespace std;

class Cube
{
private:
    int m_H;
    int m_L;
    int m_W;

public:
    void set(int h,int l,int w)
    {
        m_H=h;
        m_L=l;
        m_W=w;
    }
    int c()
    {
        return 2*(m_H*m_L+m_L*m_W+m_H*m_W);
    }
    int s()
    {
        return m_H*m_L*m_W;
    }
};

int main()
{
    Cube c1;
    c1.set(10,10,10);
    cout<<c1.c()<<endl;
    cout<<c1.s()<<endl;
    return 0;
}