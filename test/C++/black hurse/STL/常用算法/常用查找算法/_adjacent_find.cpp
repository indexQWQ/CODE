#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <ctime>
using namespace std;

//查找相邻的元素

//adjacent_find(iterator beg,iterator end);
//查找相邻重复元素，返回相邻元素的第一个位置的迭代器
void print(int v){
    cout<<v<<" ";
}
int main()
{
    vector<int>v;
    srand((unsigned int)time(nullptr));
    for(int i=0;i<10;i++){
        v.push_back(rand()%4);
    }
    for_each(v.begin(),v.end(),print);
    cout<<endl;
    vector<int>::iterator it=adjacent_find(v.begin(),v.end());
    for_each(it,v.end(),print);
    cout<<endl;
    return 0;
}