#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;

class greaterfive
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i);
    }
    sort(v.begin(),v.end(),greaterfive());
    vector<int>::iterator it=v.begin();
    for(;it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}