#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <ctime>
using namespace std;

//sort(iterator beg,iterator end,pred)
//pred 谓词
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
    sort(v.begin(),v.end(),mycop());
    for_each(v.begin(),v.end(),print);cout<<endl;
    sort(v.begin(),v.end(),less<int>());
    for_each(v.begin(),v.end(),print);cout<<endl;
    return 0;
}