#include <iostream>
using namespace std;

//cpp默认至少给一个类添加4个函数
//1.默认构造函数(无参，函数体为空)
//2.默认析构函数(无参，函数体为空)
//3.默认拷贝函数，对属性值进行拷贝
//4.赋值运算符operator=,对属性进行值拷贝

class person
{
    friend void test1();
public:

    person(int age)
    {
        m_age=new int(age);
    }
    int *m_age;
    ~person()
    {
        delete this->m_age;
    }

    //重载=
    person & operator=(person &p)
    {
        //应该先判断是否有属性在堆区，如果有先释放干净
        //深拷贝
        this->m_age=new int(*p.m_age);
        return *this;
    }
    
private:
    
};
void test1()
{
    person p1(108);
    person p2(19);
    person p3=p2=p1;
    cout<<*p3.m_age<<endl;
}
int main()
{
    test1();
    return 0;
}