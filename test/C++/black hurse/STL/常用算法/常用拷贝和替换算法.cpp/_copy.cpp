#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <ctime>
using namespace std;

//copy(iterator beg,iterator end,iterator dest)
//dest目标起始迭代器

void print(int val){
    cout<<val<<" ";
}

int main()
{
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    for_each(v.begin(),v.end(),print);cout<<endl;
    vector<int>v2;
    v2.resize(10);
    copy(v.begin(),v.end(),v2.begin());
    for_each(v2.begin(),v2.end(),print);cout<<endl;
    return 0;
}