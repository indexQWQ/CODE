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
//reverse(); //反转
//sort();    //链表排序
bool mycompare(int v1,int v2)
{
    return v1>v2;
}
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
    l.reverse();
    myprint(l);
    l.sort();//升序
    myprint(l);
    l.sort(mycompare);//降序
    myprint(l);
    return 0;
}