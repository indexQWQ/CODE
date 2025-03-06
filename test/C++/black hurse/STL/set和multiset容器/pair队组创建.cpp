#include <iostream>
#include <set>
#include <string>
using namespace std;

//pair<type,type>p (val1,val2);
//pair<type,type>p =make_pair(val1,val2);
int main()
{
    pair<string,int>p("index",19);
    cout<<p.first<<" "<<p.second<<endl;
    pair<string,int>p1=make_pair("index",19);
    cout<<p1.first<<" "<<p1.second<<endl;
    return 0;
}