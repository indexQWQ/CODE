#include <iostream>
#include <set>
using namespace std;
//size();   //返回容器中元素的数目
//empty();  //判断容器是否为空
//swap(st); //交换两个集合容器

int main()
{   
    set<int>s1;
    for(int i=0;i<10;i++)
        s1.insert(i);
    for(int i:s1)
        cout<<i<<" ";
    cout<<endl;
    if(s1.empty())cout<<"空"<<endl;
    set<int>s2;
    for(int i=10;i>=1;i--)
        s2.insert(i);
    s2.swap(s1);
    for(int i:s1)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}