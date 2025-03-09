#include <iostream>
#include <string>
#include <vector>

#include <numeric>

using namespace std;

//accumulate(iterator beg,iterator end,val)
//计算容器元素累计总数
//value起始值

int main()
{
    vector<int>v;
    for(int i=0;i<=100;i++){
        v.push_back(i);
    }
    int total=accumulate(v.begin(),v.end(),0);
    cout<<total<<endl;
    return 0;
}