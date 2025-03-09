#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <ctime>
using namespace std;

//merge(iterator beg1,iterator end1,iterator beg2,iterator end3,iterator dest)
//两个容器必须有序
//dest目标容器开始迭代器

class mycop
{
public:
    bool operator()(int val,int v2){
        return val>v2;
    }
};
void print(int val){
    cout<<val<<" ";
}
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    vector<int>v2;
    for(int i=1;i<11;i++){
        v2.push_back(i);
    }
    vector<int>v3;
    v3.resize(20);
    merge(v.begin(),v.end(),v2.begin(),v2.end(),v3.begin());
    for_each(v3.begin(),v3.end(),print);cout<<endl;
}