#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <ctime>
#include <algorithm>
using namespace std;

class person
{
public:
    string name;
    int score;
    person(int name,int score)
    {
        this->name=name;
        this->score=score;
    }
};

void initname(vector<person>&v)
{
    string str="ABCDE";
    for(int i=0;i<5;i++)
    {
        person temp(str[i],0);
        v.push_back(temp);
    }
}
void setscore(vector<person>&v)
{
    for(int i=0;i<5;i++)
    {
        deque<int> temp;
        for(int i=0;i<10;i++)
        {
            int score=rand()%100+1;
            temp.push_back(score);
        }
        sort(temp.begin(),temp.end());
        int sum=0;
        temp.pop_back();
        temp.pop_front();
        for(int j:temp)sum+=j;
        v[i].score=sum/8;
    }
}
int main()
{
    srand((unsigned int)time(nullptr));
    vector<person> v;
    initname(v);
    setscore(v);
    for(person i:v)
    {
        cout<<i.name<<":"<<i.score<<endl;
    }
    return 0;
}