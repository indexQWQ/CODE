#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//empty();              //判断容器是否为空
//capacity();           //容器的容量
//size();               //返回容器中元素的个数
//resize(int num);      //重新指定容器的长度为num,若容器变长，则以默认值0填充新位置
                        //如果如果容器变短，则超过容器的长度的元素被删除
//resize(int num,elem)  //重新指定容器的长度为num,若容器变长，则以elem填充新位置
                        //如果如果容器变短，则超过容器的长度的元素被删除

void myprint(int val)
{
    cout<<val<<" ";
}
int main()
{
    vector<int> v1;
    if(v1.empty())cout<<"v1为空"<<endl;
    for(int i=0;i<10;i++)
    {
        v1.push_back(i);
    }
    if(v1.empty())cout<<"v1为空"<<endl;
    for_each(v1.begin(),v1.end(),myprint);
    cout<<endl;
    cout<<"v1容量:"<<v1.capacity()<<endl;
    cout<<"v1大小:"<<v1.size()<<endl;
    //重新指定大小
    v1.resize(13);//如果重新指定的大小，则以默认值0填充新位置
    for_each(v1.begin(),v1.end(),myprint);
    cout<<endl;
    //重新指定容器的长度为num,若容器变长，则以elem填充新位置
    v1.resize(16,10);
    for_each(v1.begin(),v1.end(),myprint);
    cout<<endl;
    //如果如果容器变短，则超过容器的长度的元素被删除
    v1.resize(5);
    for_each(v1.begin(),v1.end(),myprint);
    cout<<endl;
    cout<<"v1容量:"<<v1.capacity()<<endl;
    return 0;
}