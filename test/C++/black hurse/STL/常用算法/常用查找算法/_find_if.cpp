#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

//find_if(iterator beg,iterator end,_pred)
//_pred 返回bool类型的仿函数
class person{
    public:
    int age;
    string name;
};
class mycop
{
public:
    bool operator()(int val){
        return val>5;
    }
};
class mycop1
{
public:
    bool operator()(person& val){
        return val.age>15;
    }
};

int main()
{
    //查找内置的数据类型
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    vector<int>::iterator it=find_if(v.begin(),v.end(),mycop());
    for(;it!=v.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
    //查找自定义的数据类型
    vector<person>v1;
    v1.push_back({18,"index"});
    v1.push_back({13,"index"});
    v1.push_back({12,"index"});
    v1.push_back({15,"index"});
    vector<person>::iterator it1=find_if(v1.begin(),v1.end(),mycop1());
    //for(;it1!=v1.end();it1++){
        cout<<it1->name<<" "<<it1->age<<endl;
    //}
    return 0;
}