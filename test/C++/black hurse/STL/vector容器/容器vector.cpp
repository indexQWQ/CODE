#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
//容器：vector
//算法：for_each
//迭代器：vector<int>::iterator

void myprint(int val)
{
    cout<<val<<endl;
}
int main()
{
    vector<int> v;
    //向容器中插入数据
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    //通过迭代器访问容器内容
    vector<int>::iterator itBegin=v.begin();//起始迭代器 指向容器中第一个元素
    vector<int>::iterator itEnd=v.end();//起始迭代器 指向容器中最后一个元素的下一个位置
    //1
    while(itBegin!=itEnd)
    {
        cout<<*itBegin++<<endl;
        
    }
    cout<<"*****************"<<endl;
    //2
    for(vector<int>::iterator i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<endl;
    }
    cout<<"*****************"<<endl;
    //3利用STL提供的遍历算法
    for_each(v.begin(),v.end(),myprint);
    return 0;
}