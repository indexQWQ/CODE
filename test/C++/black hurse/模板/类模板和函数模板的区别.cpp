#include <iostream>
using namespace std;

//1.类模板没有自动类型推导
//2.类模板在模板函数参数列表可以有默认参数

template<class T,class Y>
class person
{
public:
    T age;
    Y name;
    person(T age,Y name="index")
    {
        this->age=age;
        this->name=name;
    }
};
int main()
{
    person <int,string>p1(18);
    cout<<p1.age<<" "<<p1.name<<endl;
    return 0;
}