#include <iostream>
#include <string>
#include <vector>
using namespace std;

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
int main()
{
    vector<person> p;
    p.push_back({18,"index"});
    p.push_back({18,"index"});
    p.push_back({18,"index"});
    for(person i:p)
    {
        cout<<i.age<<" "<<i.name<<endl;
    }
    for(vector<person>::iterator i=p.begin();i<p.end();i++)
    {
        cout<<(*i).age<<" "<<(*i).name<<endl;
    }
    return 0;
}