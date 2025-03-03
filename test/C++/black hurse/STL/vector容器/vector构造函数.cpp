#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// vectorcT> v;                     //采用模板实现类实现，默认构造函数
// vector(v.pegin(), v.end());      //v[begin(.end①)区间中的元素拷贝给本身。
// vector(n, elem);                 //构造函数将n个elem拷贝给本身。
// vector(const vector &vec);       //拷贝构造函数。
void myprint(int p)
{   
    cout<<p<<" ";
}
int main()
{
    vector<int> v1;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    for_each(v1.begin(),v1.end(),myprint);
    cout<<endl;

    vector<int> v2(v1.begin(),v1.end());
    for_each(v2.begin(),v2.end(),myprint);
    cout<<endl;

    vector<int> v3(10,100);
    for_each(v3.begin(),v3.end(),myprint);
    cout<<endl;

    vector<int> v4(v3);
    for_each(v4.begin(),v4.end(),myprint);
    cout<<endl;
    return 0;
}