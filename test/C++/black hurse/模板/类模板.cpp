#include <iostream>
#include <string>
using namespace std;

//语法
//template<class T>
//类

template<class T,class Y>
class person
{
public:
    T age;
    Y name;
    person(T age,Y name)
    {
        this->age=age;
        this->name=name;
    }
};
int main()
{
    //
    person <string,int>p1("index",18);
    cout<<p1.age<<" "<<p1.name<<endl;
    return 0;
}