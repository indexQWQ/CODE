#include <iostream>
using namespace std;

//制作饮品的大致流程为：煮水-冲泡-倒入杯中-加入辅料

class abtractdrink
{
public:
    //煮水
    virtual void boil()=0;
    //冲泡
    virtual void brew()=0;
    //倒入杯中
    virtual void pourincup()=0;
    //加入辅料
    virtual void putsomething()=0; 

    //制作饮品
    void makedrink()
    {
        boil();
        brew();
        pourincup();
        putsomething();
    }
};

//制作咖啡
class coffee:public abtractdrink
{
public:
    //煮水
    virtual void boil()
    {
        cout<<"冲泡咖啡"<<endl;
    }
    //冲泡
    virtual void brew()
    {
        cout<<"冲泡咖啡"<<endl;
    }
    //倒入杯中
    virtual void pourincup()
    {
        cout<<"冲泡咖啡"<<endl;
    }
    //加入辅料
    virtual void putsomething()
    {
        cout<<"冲泡咖啡"<<endl;
    }
};

//制作茶叶
class tea:public abtractdrink
{
public:
    //煮水
    virtual void boil()
    {
        cout<<"冲泡茶叶"<<endl;
    }
    //冲泡
    virtual void brew()
    {
        cout<<"冲泡茶叶"<<endl;
    }
    //倒入杯中
    virtual void pourincup()
    {
        cout<<"冲泡茶叶"<<endl;
    }
    //加入辅料
    virtual void putsomething()
    {
        cout<<"冲泡茶叶"<<endl;
    }
};

void dowork(abtractdrink &a)
{
    a.makedrink();
}

int main()
{
    coffee c1;
    dowork(c1);
    tea t1;
    dowork(t1);
    return 0;
}