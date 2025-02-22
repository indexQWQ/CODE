#include <iostream>
using namespace std;

//cpp中空指针也是可以调用成员函数的，但也要注意到有没有用到this指针

//如果用到this指针，需要加以判断保证代码的健壮性
class person
{
public:
    void showname()
    {
        cout<<"show person"<<endl;
    }

    void showage()
    {
        //错误原因是因为传入的指针是NULL
        //提高健壮性
        if(this==NULL)
        {
            return;
        }
        cout<<"show age: "<<this->m_age<<endl;
    }
    static int m_age;
};
int person::m_age=100;
void test1()
{
    person *p=NULL;
    p->showage();
    p->showname();
}
int main()
{
    test1();
    return 0;
}