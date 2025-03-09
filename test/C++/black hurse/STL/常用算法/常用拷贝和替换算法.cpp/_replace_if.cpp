#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <ctime>
using namespace std;

//replace(iterator beg,iterator end,_pred,newval)
//将区间内旧元素替换为新元素
//_pred谓词
void print(int val){
    cout<<val<<" ";
}
class mypred
{
public:
    bool operator()(int v1){
        return v1>5;
    }
};
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    for_each(v.begin(),v.end(),print);cout<<endl;
    replace_if(v.begin(),v.end(),mypred(),6);
    for_each(v.begin(),v.end(),print);cout<<endl;
    return 0;
}