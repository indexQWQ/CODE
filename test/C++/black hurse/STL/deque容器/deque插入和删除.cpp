#include <iostream>
#include <deque>
using namespace std;

// 两端插入操作：
// push back(elem)          //在容器尾部添加一个数据
// push_front(elem);        //在容器头部插入一个数据
// pop_back();              //日删除容器最后一个数据
// pop_front();             //删除容器第一个数据
// 指定位置操作:
// insert(pos,elem);        //开在pos位置插入一个elem元素的拷贝，返回新数据的位置。
// insert(pos,n,elem);      //在pos位置插入n个elem数据，无返回值。
// insert(pos,beg,end);     //在pos位置插入(beg.end)区间的数据，无返回值。
// clear();                 //清空容器的所有数据
// erase(beg,end);          //删除(beg,end)区间的数据，返回下一个数据的位置。
// erase(pos);              //删除pos位置的数据，返回下一个数据的位置
int main()
{
    deque<int> d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    for(int i=0;i<10;i++)
    {
        d1.push_front(i);
    }
    for(int i:d1)
    {
        cout<<i<<" ";
    }
    return 0;
}