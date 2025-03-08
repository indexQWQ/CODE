#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;

class greaterfive
{
public:
    bool operator()(int v1)
    {
        return v1>5;
    }
};
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    vector<int>::iterator it=find_if(v.begin(),v.end(),greaterfive());//匿名函数对象
    for(;it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}