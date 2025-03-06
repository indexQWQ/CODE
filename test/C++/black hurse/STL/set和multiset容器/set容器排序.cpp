#include <iostream>
#include <set>
#include <string>
using namespace std;
//set默认的排序规则为从小到大，掌握如何改变排序规则，利用仿函数
class mycompare
{
public:
    bool operator()(int v1,int v2)
    {
        return v1>v2;
    }
};
int main()
{
    set<int,mycompare> s1;
    for(int i=0;i<10;i++)
        s1.insert(i);
    for(int i:s1)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}