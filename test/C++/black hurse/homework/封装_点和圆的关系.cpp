#include <iostream>
using namespace std;

class point
{
public:
    void set(int x,int y)
    {
        m_x=x,m_y=y;
    }
    int getx()
    {
        return m_x;
    }
    int gety()
    {
        return m_y;
    }
private:
    int m_x,m_y;
};
class Circle
{
public:
    void set(int r,int x,int y)
    {
        m_r=r;
        m_center.set(x,y);
    }
    void isincircle(int x,int y)
    {
        if((x-m_center.getx())*(x-m_center.getx())+(y-m_center.gety())*(y-m_center.gety())==m_r*m_r)
        {
            cout<<"在圆上"<<endl;
        }
        else if((x-m_center.getx())*(x-m_center.getx())+(y-m_center.gety())*(y-m_center.gety())>m_r*m_r)
        {
            cout<<"在圆外"<<endl;
        }
        else
        {
            cout<<"在圆内"<<endl;
        }
    }
private:
    int m_r;
    point m_center;
};
int main()
{
    Circle c1;
    c1.set(2,0,0);
    c1.isincircle(2,0);
    return 0;
}