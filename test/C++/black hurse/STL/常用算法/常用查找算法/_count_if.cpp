#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <ctime>
using namespace std;

//int count_if(iterator beg,iterator end,pred)
//返回统计元素出现次数
//pred谓词
void print(int v){
    cout<<v<<" ";
}
class person
{
public:
    string name;
    int age;
    person(string name,int age):name(name),age(age){}
    bool operator==(const person &p){//底层加const
        if(this->age==p.age)return true;
        return false;
    }
};
class mypred1
{
public:
    bool operator()(int val){
        return val>1;
    }
};
class mypred2
{
public:
    bool operator()(const person& val){
        return val.age >=12;
    }
};
int main()
{
    //统计内置类型
    vector<int>v;
    srand((unsigned int)time(nullptr));
    for(int i=0;i<10;i++){
        v.push_back(rand()%3);
    }
    for_each(v.begin(),v.end(),print);
    cout<<endl;
    cout<<count_if(v.begin(),v.end(),mypred1())<<endl;;

    //统计自定义类型
    vector<person>v1;
    person p1("index",11);
    person p2("index1",12);
    person p3("index2",12);
    person p4("index3",125);
    person p5("index3",12);
    v1.push_back(p1);
    v1.push_back(p2);
    v1.push_back(p3);
    v1.push_back(p4);
    cout<<count_if(v1.begin(),v1.end(),mypred2())<<endl;
    return 0;
}