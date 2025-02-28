#include <iostream>
using namespace std;


//在多态中，通常父类中虚函数的实现是毫无意义的，主要都是掉用子类重写的内容
//因此可以将虚函数改为纯虚函数
//语法：virtual 返回值类型 函数名 (参数列表)=0;
//当类中有纯虚函数，这个类也称为抽象类

//抽象类特点：
//无法实例化对象
//子类必须重写抽象类中的纯虚函数，否则也属于抽象类

class base
{
public:
    //纯虚函数
    //只有纯虚函数，这个类也称为抽象类
    virtual void func()=0;

};

//子类必须重写抽象类中的纯虚函数，否则也属于抽象类
class son:public base
{
public:
    virtual void func()
    {
        cout<<"func"<<endl;
    }
};

void test1()
{
    // base b1;//抽象类无法实例化对象
    // base* b2=new base;//抽象类无法实例化对象
    son s1;
    base* b3=new son;
    b3->func();
}
int main()
{
    test1();
    return 0;
}