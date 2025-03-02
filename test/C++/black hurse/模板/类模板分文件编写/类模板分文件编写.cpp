// #include <iostream>
// #include <string>
// using namespace std;

//问题
//类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到
//解决方式1：直接包含.cpp原文件
//#include "person.cpp"
//解决方式2：将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制的
#include "person.hpp"

// template<class T1,class T2>
// class person
// {
// public:
//     person(T1 age,T2 name);
//     void show();
//     T1 age;
//     T2 name;
// };

// template<class T1,class T2>
// person<T1,T2>::person(T1 age,T2 name)
// {
//     this->age=age;
//     this->name=name;
// }
// template<class T1,class T2>
// void person<T1,T2>::show()
// {
//     cout<<name<<" "<<age<<endl;
// }
int main()
{
    person<int,string> p1(18,"index");
    p1.show();
    return 0;
}