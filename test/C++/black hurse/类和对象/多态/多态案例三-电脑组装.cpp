#include <iostream>
using namespace std;

class CPU
{
public:
    virtual void calculate()=0;
    virtual ~CPU()
    {

    }
};
class videocard
{
public:
    virtual void display()=0;
    virtual ~videocard()
    {

    }
};
class memory
{
public:
    virtual void storage()=0;
    virtual ~memory()
    {

    }
};

class intel:public CPU
{
public:
    virtual void calculate()
    {
        cout<<"intel CPU"<<endl;
    }
};
class intel1:public videocard
{
public:
    virtual void display()
    {
        cout<<"intel1 videocard"<<endl;
    }
};
class intel2:public memory
{
public:
    virtual void storage()
    {
        cout<<"intel2 memory"<<endl;
    }
};

class computer
{
public:
    CPU *a;
    videocard* b;
    memory* c;
    computer(CPU* a,videocard* b,memory* c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void dowork()
    {
        a->calculate();
        b->display();
        c->storage();
    }
    ~computer()
    {
        delete a;
        delete b;
        delete c;
    }
};
int main()
{
    CPU *a=new intel;
    videocard* b=new intel1;
    memory* c=new intel2;
    computer p(a,b,c);
    p.dowork();
    return 0;
}