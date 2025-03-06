#include <iostream>
#include <set>
#include <string>
using namespace std;
//set默认的排序规则为从小到大，掌握如何改变排序规则，利用仿函数

class person
{
public:
    int age;
    string name;
};
class mycompare
{
public:
    bool operator()(person v1,person v2)
    {
        return v1.age >v2.age;
    }
};
int main()
{
    set<person,mycompare> s1;
    for(int i=0;i<10;i++){
        person temp;
        temp.age=i;
        s1.insert(temp);
    }
    for(person i:s1)
        cout<<i.age<<" ";
    cout<<endl;
    return 0;
}