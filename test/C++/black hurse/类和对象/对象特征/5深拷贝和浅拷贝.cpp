#include <iostream>
using namespace std;

//浅拷贝：简单的赋值拷贝操作

//深拷贝：在堆区重新申请空间，进行拷贝操作

//如果属性有在堆区开辟的，一定要自己提供拷贝函数，防止浅拷贝带来的问题
class person
{
public:
    person()
    {
        cout<<"默认构造函数"<<endl;
    }
    person(int age,int hight)
    {
        m_age=age;
        m_hight=new int(hight);
        cout<<"有参构造函数"<<endl;
    }
    person(const person& p)
    {
        m_age=p.m_age;
        //编译器拷贝默认函数默认实现这一行代码：m_hight=p.m_hight;
        //深拷贝
        m_hight=new int(*p.m_hight);
        cout<<"拷贝构造函数"<<endl;
    }
    ~person()
    {
        //析构代码，将堆区开辟的数据做释放
        if(m_hight!=NULL)
        {
            delete m_hight;
            m_hight=NULL;
        }
        cout<<"析构函数"<<endl;
    }

    int m_age;
    int *m_hight;
};

void test1()
{
    //栈先进后出，所以是p2先被释放
    person p1(18,170);
    cout<<"p1 age "<<p1.m_age<<" high "<<*(p1.m_hight)<<endl;
    person p2(p1);
    cout<<"p2 age "<<p2.m_age<<" high "<<*(p2.m_hight)<<endl;
    //按道理程序一般会崩，因为同一地址的内存被释放了两次
}
int main()
{
    test1();
    return 0;
}