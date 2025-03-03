#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<vector<int>> arr;
    vector<int> p1;
    vector<int> p2;
    vector<int> p3;
    vector<int> p4;
    for(int i=0;i<4;i++)
    {
        p1.push_back(i);
        p2.push_back(i+1);
        p3.push_back(i+2);
        p4.push_back(i+3);
    }
    arr.push_back(p1);
    arr.push_back(p2);
    arr.push_back(p3);
    arr.push_back(p4);
    for(vector<vector<int>>::iterator i=arr.begin();i<arr.end();i++)
    {
        for(vector<int>::iterator j=(*i).begin();j<(*i).end();j++)
        {
            cout<<*j<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}