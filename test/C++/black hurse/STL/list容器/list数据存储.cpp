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
//front();      返回第一个元素
//back();       返回最后一个元素

//迭代器不支持随机访问
int main()
{
    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_front(3);
    l.push_front(3);
    l.push_front(6);
    myprint(l);
    cout<<l.front()<<" "<<l.back();
    return 0;
}