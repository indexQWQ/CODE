#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    pair<set<int>::iterator,bool> ret=s.insert(10);
    if(ret.second)
        cout<<"success"<<endl;
    else
        cout<<"failure"<<endl;
    ret=s.insert(10);
    if(ret.second)
        cout<<"success"<<endl;
    else
        cout<<"failure"<<endl;

    multiset<int> s1;
    for(int i=0;i<10;i++)
        s1.insert(2);
    s1.insert(1);
    for(int i:s1)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}