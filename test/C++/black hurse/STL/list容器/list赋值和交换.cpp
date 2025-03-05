#include <iostream>
#include <list>
using namespace std;
void myprint(list<int> &l)
{
    for(list<int>::const_iterator it=l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
// 函数原型：
// assign(beg,end);                 //将(beg, end)区间中的数据拷贝赋值给本身。
// assign(n, elem);                 //将n个elem拷贝赋值给本身。
// list& operator={const last &lst);//重载等号操作符
// swap(1st);                       //将Ist与本身的元素互换。

int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    myprint(l);
    list<int> l2;
    l2=l;
    myprint(l2);
    list<int> l3;
    l3.assign(l2.begin(),l2.end());
    myprint(l3);
    list<int> l4;
    l4.assign(10,0);
    myprint(l4);
    l.swap(l4);
    myprint(l);
    return 0;
}