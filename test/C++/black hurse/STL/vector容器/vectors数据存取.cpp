#include <iostream>
#include <vector>
#include <string>
using namespace std;

//at(int index);
//operator[];
//front();      //返回容器中第一个元素
//back();       //返回容器中最后一个元素

int main()
{
    vector<int> v1;
    for(int i=0;i<10;i++)
        v1.push_back(i);
    for(int i=0;i<(int)v1.size();i++)
        cout<<i<<" ";
    cout<<endl;
    for(int i=0;i<(int)v1.size();i++)
        cout<<v1.at(i)<<" ";
    cout<<endl;
    cout<<v1.front()<<endl;
    cout<<v1.back()<<endl;
    return 0;
}