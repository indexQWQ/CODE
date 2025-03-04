#include <iostream>
#include <deque>
#include <random>
#include <time.h>
#include <algorithm>
using namespace std;

//sort(iterator beg,iterator end);  //对beg和end区间内的元素进行排序

int main()
{
    deque <int> d1;
    srand((unsigned int)time(nullptr));
    for(int i=0;i<10;i++)
    {
        d1.push_back(rand()%100+1);
    }
    //排序 默认排序规则 从大到小 升序
    //对于支持迭代器的容器，都可以用sort排序
    sort(d1.begin(),d1.end());
    for(int i:d1)
    {
        cout<<i<<" ";
    }
    return 0;
}