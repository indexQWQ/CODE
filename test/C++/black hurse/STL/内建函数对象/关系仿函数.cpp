#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<ctime>
using namespace std;

// 仿函数原型：
// template<class T> bool equal_to<T>       //等于
// template<class T> bool not_equal_to<T>   //不等于
// template<class T> bool greater<T>        //大于
// template<class T> bool greater_equal<T>   //大于等于
// template<class T> bool less<T>           //小于
// template<class T> bool less_equal<T>     //小于等于

int main()
{
    srand((unsigned int)time(nullptr));
    vector<int> v;
    for(int i=0;i<5;i++)
        v.push_back(rand()%10+1);
    //sort(v.begin(),v.end(),mycpm());
    sort(v.begin(),v.end(),greater<int>());
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}