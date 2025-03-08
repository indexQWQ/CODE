#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<ctime>
using namespace std;

// template<class T> bool logical_and<T> //逻辑与
// template<class T> bool logical_or<T>  //逻辑或
// template<class T> bool logical_not<T> //逻辑非

int main()
{
    srand((unsigned int)time(nullptr));
    vector<bool> v;
    for(int i=0;i<10;i++)
        v.push_back(rand()%2);
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;

    vector<int> v2;
    v2.resize(v.size());

    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
    for(int i:v2)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}