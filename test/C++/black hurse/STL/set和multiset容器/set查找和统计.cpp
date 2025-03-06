#include <iostream>
#include <set>
using namespace std;

//fing(key);    //查找key是否存在，若存在，返回该键的元素的迭代器，若不存在，返回set.end()
//count(key);   //统计key的元素的个数

int main()
{
    set<int> s1;
    for(int i=0;i<10;i++)
        s1.insert(i);
    for(int i:s1)
        cout<<i<<" ";
    cout<<endl;
    s1.erase(s1.find(3));
    for(int i:s1)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}