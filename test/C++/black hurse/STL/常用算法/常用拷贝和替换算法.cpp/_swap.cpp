#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <ctime>
using namespace std;

//swap(containter c1,container c2)
//互换两个容器的元素
//c1,c2,容器
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
    for(int i=9;i>=0;i--){
        v2.push_back(i);
    }
    for_each(v.begin(),v.end(),print);cout<<endl;
    for_each(v2.begin(),v2.end(),print);cout<<endl;
    swap(v,v2);
    for_each(v.begin(),v.end(),print);cout<<endl;
    for_each(v2.begin(),v2.end(),print);cout<<endl;
    return 0;
}