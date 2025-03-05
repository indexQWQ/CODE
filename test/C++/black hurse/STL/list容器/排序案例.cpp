#include <iostream>
#include <list>
#include <string>
using namespace std;
#define CON(d,b) d##b
class person
{
public:
    person(string name,int age,int high):name(name),age(age),high(high)
    {

    }
    string name;
    int age;
    int high;
};
void myprint(list<person> &l)
{
    for(list<person>::const_iterator it=l.begin();it!=l.end();it++)
    {
        cout<<(*it).name<<" "<<(*it).age<<" "<<(*it).high<<endl;
    }
    cout<<endl;
}
bool compare(person l1,person l2)
{
    if(l1.age==l2.age)return l1.high<l2.high;
    return l1.age<l2.age;
}
int main()
{
    list<person> l;
    person p1("index",33,53);
    person p2("index",35,21);
    person p3("index",35,41);
    person p4("index",83,24);
    person p5("index",34,51);
    person p6("index",75,23);
    string dd="123456";
    l.push_back(p1);
    l.push_back(p2);
    l.push_back(p3);
    l.push_back(p4);
    l.push_back(p5);
    l.push_back(p6);
    myprint(l);
    cout<<"------------"<<endl;
    l.sort(compare);
    myprint(l);
    return 0;
}