#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<ctime>
using namespace std;

// transform(iterator beg1,iterator end1,iterator beg2,func):
// //beg1源容器开始迭代器
// //end1源容器结束迭代器
// //beg2目标容器开始迭代器
// //_func函数或者函数对象//逻辑仿函数

void print(int val)
{
    cout<<val<<" ";
}
class transfo
{
public:
    int operator()(int v)
    {
        return v+1;
    }
};
int main()
{
    
    srand((unsigned int)time(nullptr));
    vector<int> v;
    for(int i=0;i<10;i++)
        v.push_back(rand()%10);
    for_each(v.begin(),v.end(),print);  
    cout<<endl;
    vector<int> v1;
    v1.resize(v.size());//目标容器必须提前开辟空间
    transform(v.begin(),v.end(),v1.begin(),transfo());
    for_each(v1.begin(),v1.end(),print);
    return 0;
}