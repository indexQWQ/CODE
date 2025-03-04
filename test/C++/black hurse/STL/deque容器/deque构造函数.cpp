#include <iostream>
#include <string>
#include <deque>
using namespace std;

//deque<T> d;                   //默认构造函数
//deque(begin,end);             //构造函数将[begin，end)中的元素拷贝给本身
//deque(n,elem);                //n个elem拷贝给本身
//deque(const deque& d);        //拷贝构造
int main()
{
    deque<int> d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    for(int i:d1)
    {
        cout<<i<<endl;
    }
    return 0;
}