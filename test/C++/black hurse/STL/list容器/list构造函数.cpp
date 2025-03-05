#include <iostream>
#include <list>
using namespace std;

// 函数原型：
// list<T> lst;             //1ist采用采用模板类实现，对象的默认构造形式:
// list(beg,end),           //构造函数将[beg,end)区间中的元素拷贝给本身。
// list(n,elem);            //构造函数将n个elem拷贝给本身。
// list(const list &lst);   //拷贝构造函数。

void myprint(list<int> &l)
{
    for(list<int>::const_iterator it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    myprint(l);
    list<int> l2(l);
    list<int> l3(l2.begin(),l2.end());
    myprint(l3);
    list<int> l4(10,0);
    myprint(l4);
    return 0;
}