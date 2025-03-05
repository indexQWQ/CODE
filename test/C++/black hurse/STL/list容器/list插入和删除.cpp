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
// push back(elem)      //在容器尾部加入一个元素
// pop_back():          //删除容器中最后一个元素
// push_front(elem)：   //在容器开头插入一一个元素
// pop_front();         //从容器开头移除第一个元素
// insert(pos,elem):    //在pos位置插elem元素的拷贝，返回新数据的位置。
// insert(pos,n,elem);  //在pos位置插入n个elem数据，无返回值。
// insert(pos,beg,end): //在pos位置插入(beg.end)区间的数据，无返回值。
// clear()；            //移除容器的所有数据
// erase(beg,end);      //删除[beg.end)区间的数据，返回下一个数据的位置。
// erase(pos):          //删除pos位置的数据，返回下一个数据的位置。

// remove(elem):        //删除容器中所有与elem值匹配的元素。

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
    l.pop_back();
    l.pop_front();
    myprint(l);
    l.insert(l.begin(),1000);
    myprint(l);
    l.remove(3);
    myprint(l);
    return 0;
}