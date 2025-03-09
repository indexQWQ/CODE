#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <ctime>
using namespace std;

//replace(iterator beg,iterator end,oldval,newval)
//将区间内旧元素替换为新元素

void print(int val){
    cout<<val<<" ";
}

int main()
{
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(5);
    }
    for_each(v.begin(),v.end(),print);cout<<endl;
    replace(v.begin(),v.end(),5,6);
    for_each(v.begin(),v.end(),print);cout<<endl;
    return 0;
}