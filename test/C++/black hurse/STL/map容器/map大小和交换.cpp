#include <iostream>
#include <map>
using namespace std;

//size();   //返回容器中元素的数目
//empty();  //判断容器是否为空
//swap(st); //交换两个集合容器

int main()
{
    map<int,int> m1;
    m1.insert(pair<int,int>(1,22));
    m1.insert({4,5});
    for(pair<int,int> i:m1)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<m1.size()<<endl;

    map<int,int> m2;
    m2.swap(m1);
    for(pair<int,int> i:m2)
        cout<<i.first<<" "<<i.second<<endl;
    return 0;
}