#include <iostream>
#include <string>
using namespace std;

//全局函数类内实现——直接在类内声明友元
//全局函数类外实现——需要提前让编译器知道全局函数的存在
#include <iostream>
#include <string>
using namespace std;

//提前让编译器知道person存在
template<class T1,class T2>
class person;
//全局函数 类外实现
template<class T1,class T2>
void show2(person<T1,T2>p)
{
    cout<<p.age<<" "<<p.name<<endl;
}

template<class T1,class T2>
class person
{
    //全局函数 类内实现
    friend void show(person<T1,T2>p)
    {
        cout<<p.age<<" "<<p.name<<endl;
    }
    //全局函数 类外实现
    //加空模板参数列表
    //需要提前让编译器知道全局函数的存在
    friend void show2<>(person<T1,T2>p);
    // {
    //     cout<<p.age<<" "<<p.name<<endl;
    // }

public:
    person(T1 age,T2 name);
private:
    T1 age;
    T2 name;
};

template<class T1,class T2>
person<T1,T2>::person(T1 age,T2 name)
{
    this->age=age;
    this->name=name;
}


int main()
{
    person<int,string> p(18,"index");
    show(p);
    show2(p);
    return 0;
}