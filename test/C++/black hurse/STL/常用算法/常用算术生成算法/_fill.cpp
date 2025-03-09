#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

//fill(iterator beg,iterator end,val)
//向容器中填充元素
//value填充的值

class myprint
{
public:
    void operator()(int val){
        cout<<val<<" ";
    }
};
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    fill(v.begin(),v.end(),2);
    for_each(v.begin(),v.end(),myprint());cout<<endl;
    return 0;
}