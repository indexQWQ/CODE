#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <ctime>
using namespace std;

//reverse(iterator beg,iterator end)


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
    reverse(v.begin(),v.end());
    for_each(v.begin(),v.end(),print);cout<<endl;
    return 0;
}