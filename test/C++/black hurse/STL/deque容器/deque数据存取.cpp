#include <iostream>
#include <deque>
using namespace std;

//at(int index);
//operator[]();
//front();
//back();
int main()
{
    deque<int> d1;
    for(int i=0;i<10;i++)
    {
        d1.push_back(i);
    }
    for(int i=0;i<10;i++)
    {
        cout<<d1[i]<<" ";
    }
    return 0;
}