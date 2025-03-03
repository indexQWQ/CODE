#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void myprint(int p)
{   
    cout<<p<<" ";
}
// vector& operator=(const vector &vec);    //重载等号操作符
// assign(bfg, end);                        //将(beg,end)区间中的数据拷贝赋值给本身。
// assign(n, elem);                         //将n个elem拷贝赋值给本身

int main()
{
    vector<int>v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    for_each(v1.begin(),v1.end(),myprint);
    cout<<endl;

    //=赋值
    vector<int>v2=v1;
    for_each(v2.begin(),v2.end(),myprint);
    cout<<endl;

    //assign
    vector<int>v3;
    v3.assign(v1.begin(),v1.end());
    for_each(v3.begin(),v3.end(),myprint);
    cout<<endl;

    //n个elem拷贝赋值给本身
    vector<int>v4;
    v4.assign(10,100);
    for_each(v4.begin(),v4.end(),myprint);
    cout<<endl;
    return 0;
}