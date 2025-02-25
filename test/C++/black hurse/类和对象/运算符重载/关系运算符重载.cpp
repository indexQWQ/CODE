#include <iostream>
using namespace std;

//重载关系运算符
class person
{
public:
    person(string name,int age):name(name),age(age)
    {

    }
    string name;
    int age;

    //==
    bool operator==(person &p)
    {
        if(this->age==p.age && this->name==p.name)
            return true;
        return false;
    }
};
void test1()
{
    person p1("tom",18);
    person p2("tom",8);
    if(p1==p2)
    {
        cout<<"p1 == p2"<<endl;
    }
    else
        cout<<"p1 != p2"<<endl;
}
int main()
{
    test1();
    return 0;
}