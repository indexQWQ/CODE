#include <iostream>
#include <string>
using namespace std;
//模板的局限性
class person
{
public:
    int age;
    string name;
    person(int age,string name)
    {
        this->age=age;
        this->name=name;
    }
};

template<class Y>
bool compare(Y& a,Y&b)
{
    if(a==b)
        return true;
    else
        return false;
}
//利用具体化person的版本实现代码，具体化优先调用
template<>bool compare(person& a,person& b)
{
    if(a.age==b.age)
        return true;
    else
        return false;
}
int main()
{
    person a(10,"index");
    person b(10,"ton");
    if(compare(a,b))
    {
        cout<<"888"<<endl;
    }
    return 0;
}