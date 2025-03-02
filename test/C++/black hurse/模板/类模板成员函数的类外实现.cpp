#include <iostream>
#include <string>
using namespace std;


//类模板成员函数类外实现
template<class T1,class T2>
class person
{
public:
    person(T1 name,T2 age);
    // {
    //     this->age=age;
    //     this->name=name;
    // }
    T1 name;
    T2 age;
    void show();
    // {
    //     cout<<name<<" "<<age<<endl;
    // }
};
//类外实现
template<class T1,class T2>
person<T1,T2>::person(T1 name,T2 age)
{
    this->age=age;
    this->name=name;
}
template<class T1,class T2>
void person<T1,T2>::show()
{
    cout<<name<<" "<<age<<endl;
}
int main()
{

    return 0;
}