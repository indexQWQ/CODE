#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <ctime>
using namespace std;

//random_shuffle(iterator beg,iterator end);
//指定范围内的元素随机调整次序

class mycop
{
public:
    bool operator()(int val,int v2){
        return val>v2;
    }
};
void print(int val){
    cout<<val<<" ";
}
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    random_shuffle(v.begin(),v.end());
    for_each(v.begin(),v.end(),print);cout<<endl;
    sort(v.begin(),v.end(),less<int>());
    for_each(v.begin(),v.end(),print);cout<<endl;
    return 0;
}