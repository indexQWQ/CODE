#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end3,iterator dest)
//求两个集合的交集
//两个集合必须是有序序列##
//dest目标容器开始迭代器
//返回交集最后的迭代器
class myprint
{
public:
    void operator()(int val){
        cout<<val<<" ";
    }
};
int main()
{
    vector<int>v,v2,v3;
    for(int i=0;i<10;i++){
        v.push_back(i);
        v2.push_back(i+3);
    }
    v3.resize(10);
    vector<int>::iterator it=set_intersection(v.begin(),v.end(),v2.begin(),v2.end(),v3.begin());
    for_each(v3.begin(),it,myprint());cout<<endl;
    return 0;
}