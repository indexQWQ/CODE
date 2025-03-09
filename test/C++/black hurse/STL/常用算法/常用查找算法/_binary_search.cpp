#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <functional>
#include <ctime>
using namespace std;

//bool binary_search(iterator beg,iterator end,val);
//在无序序列中不能用

void print(int v){
    cout<<v<<" ";
}
int main()
{
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    for_each(v.begin(),v.end(),print);
    cout<<endl;
    if(binary_search(v.begin(),v.end(),5)){
        cout<<"找到"<<endl;
    }
    return 0;
}