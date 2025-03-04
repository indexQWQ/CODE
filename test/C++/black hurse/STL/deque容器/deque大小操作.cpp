#include <iostream>
#include <string>
#include <deque>
using namespace std;
//empty();              //判断容器是否为空
//size();               //返回容器中元素的个数
//resize(int num);      //重新指定容器的长度为num,若容器变长，则以默认值0填充新位置
                        //如果如果容器变短，则超过容器的长度的元素被删除
//resize(int num,elem)  //重新指定容器的长度为num,若容器变长，则以elem填充新位置
                        //如果如果容器变短，则超过容器的长度的元素被删除
int main()
{
    deque<int> d1;
    if(d1.empty())cout<<"空"<<endl;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    if(d1.empty())cout<<"空"<<endl;
    //deque没有容量的概念
    cout<<"大小:"<<d1.size()<<endl;
    d1.resize(13,55);
    for(int i:d1)
    {
        cout<<i<<" ";
    }
    return 0;
}