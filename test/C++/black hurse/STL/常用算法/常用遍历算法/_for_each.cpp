#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<ctime>
using namespace std;
//普通函数
void print(int val)
{
    cout<<val<<" ";
}
//仿函数
class print1
{
public:
    void operator()(int val)
    {
        cout<<val<<" ";
    }
};


int main()
{
    srand((unsigned int)time(nullptr));
    vector<int> v;
    for(int i=0;i<10;i++)
        v.push_back(rand()%10);
    for_each(v.begin(),v.end(),print);
    cout<<endl;
    for_each(v.begin(),v.end(),print1());
    cout<<endl;
    return 0;
}