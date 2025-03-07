#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<map>
#include<ctime>
using namespace std;

class person
{
public:
    string name;
    int cash;
    int depa;
};
int main()
{
    srand((unsigned int)time(nullptr));
    vector<person> v;
    string na="ABCDEFGHIZ";
    for(int i=0;i<10;i++)
    {
        person temp;
        temp.name=na[i];
        temp.cash=i;
        temp.depa=rand()%3+1;
        v.push_back(temp);
    }
    multimap<int,person> mum;
    for(auto i:v)
    {
        mum.insert({i.depa,i});
    }
    int flag=1;
    for(multimap<int,person>::iterator i=mum.begin();i!=mum.end();i++)
    {
        if((*i).first==flag)
        {
            cout<<flag<<" :"<<(*i).second.name<<" "<<(*i).second.cash<<endl;
        }
        else
        {
            cout<<"-----------------"<<endl;
            flag++;
            i--;
        }
    }
    return 0;
}