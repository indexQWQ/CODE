#include <iostream>
#include <string>
#include <deque>
using namespace std;

//deque& operator=(const deque &deq);
//assign(beg,end);
//assign(n,elem);
int main()
{
    deque<int> d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    deque<int> d2=d1;
    deque<int> d3;
    d3.assign(d2.begin(),d2.end());
    for(int i:d3)
    {
        cout<<i<<endl;
    }
    deque<int> d4;
    d4.assign(10,100);
    for(int i:d4)
    {
        cout<<i<<endl;
    }
    return 0;
}