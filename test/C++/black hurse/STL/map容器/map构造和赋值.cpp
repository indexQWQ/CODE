#include <iostream>
#include <map>
using namespace std;

//map<t1,t2> mp;
//map(const map& mp);
//map& operator=(const map& mp);
int main()
{
    map<int,int> m1;
    m1.insert(pair<int,int>(1,22));
    m1.insert({4,5});
    for(pair<int,int> i:m1)
        cout<<i.first<<" "<<i.second<<endl;
    return 0;
}