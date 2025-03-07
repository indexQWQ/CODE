#include <iostream>
#include <map>
using namespace std;

//find(key);
//count(key);
int main()
{
    map<int,int> m1;
    for(int i=0;i<10;i++)
        m1.insert({i,3});
    for(pair<int,int> i:m1)
        cout<<i.first<<" "<<i.second<<endl;
    cout<<"------------"<<endl;
    m1.erase(m1.find(5));
    for(pair<int,int> i:m1)
        cout<<i.first<<" "<<i.second<<endl;

    return 0;
}