#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

class person
{
public:
    person(char name,int age):name(name),age(age){}
    char name;
    int age;

    bool operator==(const person& p)
    {
        if(this->name==p.name && this->age==p.age)
            return true;
        return false;
    }
};
int main()
{
    //查找内置的数据类型
    srand((unsigned int)time(nullptr));
    vector<int> v;
    for(int i=0;i<10;i++)
        v.push_back(rand()%10);
    vector<int>::iterator it=find(v.begin(),v.end(),4);
    if(it!=v.end()) cout<<*it<<endl;

    //查找自定义的数据类型
    vector<person>v1;
    string arr="ABCDEFGHIJ";
    for(int i=0;i<10;i++){
        person temp(arr[i],18);
        v1.push_back(temp);
    }
    person p('A',18);
    vector<person>::iterator its=find(v1.begin(),v1.end(),p);
    if(its!=v1.end()) cout<<(*its).name <<" "<<(*its).age<<endl;
    return 0;
}