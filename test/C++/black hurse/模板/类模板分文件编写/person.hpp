#include <iostream>
#include <string>
using namespace std;

template<class T1,class T2>
class person
{
public:
    person(T1 age,T2 name);
    void show();
    T1 age;
    T2 name;
};

template<class T1,class T2>
person<T1,T2>::person(T1 age,T2 name)
{
    this->age=age;
    this->name=name;
}
template<class T1,class T2>
void person<T1,T2>::show()
{
    cout<<name<<" "<<age<<endl;
}