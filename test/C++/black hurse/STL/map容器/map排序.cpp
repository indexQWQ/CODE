#include <iostream>
#include <map>
using namespace std;
//sort();

class mycompare
{
public:
    bool operator()(int val,int val2)
    {
        return val>val2;
    }
};
int main()
{
    map<int,int> m1;
    for(int i=0;i<10;i++)
        m1.insert({i,3});
    for(pair<int,int> i:m1)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<"------------"<<endl;
    map<int,int,mycompare> m2;
    for(int i=0;i<10;i++)
        m2.insert({i,3});
    for(pair<int,int> i:m2)
        cout<<i.first<<" "<<i.second<<endl;
    return 0;
}