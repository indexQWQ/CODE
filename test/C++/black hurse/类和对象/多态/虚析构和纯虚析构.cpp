#include <iostream>
#include <string>
using namespace std;

//多态使用时，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
//解决方式：将父类中的析构函数改为虚析构或者纯虚析构

//虚析构和纯虚析构共性：
//可以解决父类释放子类对象
//都需要有具体的函数实现

//虚析构和纯虚析构区别
//如果是纯虚析构，该类属于抽象类，无法实例化对象

class animal
{
public:
    //纯虚函数
    virtual void speak()=0;
    animal()
    {
        cout<<"animal构造"<<endl;
    }
    //利用虚析构可以解决父类指针释放子类时不干净的问题
    virtual ~animal()
    {
        cout<<"animal虚析构"<<endl;
    }

    //纯虚析构 需要声明也需要实现
    //virtual ~animal()=0;
};
// animal::~animal()
// {
//     cout<<"animal纯虚析构"<<endl;
// }
class cat:public animal
{
public:
    cat(string name)
    {
        cout<<"cat构造"<<endl;
        m_name=new string(name);
    }
    virtual void speak()
    {
        cout<<*m_name<<"maojiao"<<endl;
    }
    string *m_name;
    ~cat()
    {
        if(m_name!=NULL)
        {
            cout<<"cat析构"<<endl;
            //父类的指针在析构的时候 不会调用子类中析构
            delete m_name;
        }
    }
};
int main()
{
    animal *a=new cat("tom");
    a->speak();
    delete a;
    a=NULL;
    return 0;
}